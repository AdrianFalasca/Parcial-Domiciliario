// C++ code
//
#define SWITCH 4
#define G 13
#define F 12
#define A 11
#define B 10
#define E 9
#define D 8
#define C 7
#define MOTOR A0
#define LED 5



//Inicialización de variables.
int contadorDecena = 0;
int contadorUnidad = 0;
int digito;
int cambiaDisplay = 0;
int contPrincipal = 0;
float temp = 0;
int tempLeida = 0;
int contEspera = 0;
int fotoresistencia = 0;


//Configuración de los pines.
void setup()//Los displays, el led y el motor en salida digital y el switch en entrada digital.
{
  pinMode(G, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
  pinMode(SWITCH, INPUT_PULLUP);
  Serial.begin(9600);
  pinMode(MOTOR, OUTPUT);
  pinMode(LED, OUTPUT);
}

void separarNumero(){//Función para separar el contador principal en decena y unidad.
  contadorDecena = contPrincipal / 10;
  contadorUnidad = contPrincipal % 10;
}


void arrancarMotor(){ 
  //Lee la entrada analógica y enciende el motor si supera 30 grados.
  tempLeida = analogRead(A2);
  temp = map(tempLeida, 20, 350,-40,125);
  //Serial.println(tempLeida);
  if(temp > 30){
    digitalWrite(MOTOR, HIGH);
  }
  else{
    digitalWrite(MOTOR, LOW);
  }
  
}


void esNumeroPrimo(){//Evalúa que sea un número primo.
	int cont = 0;
  for(int i=1; i<=contPrincipal; i++){
	  if (contPrincipal%i==0){
      cont++;}
      }
  if (cont==2){
    separarNumero();
  }
}

void prenderLedFotoresistencia(){
  //Lee la entrada analógica y enciende el led si supera los 300.
  fotoresistencia = analogRead(A3);
  Serial.println(fotoresistencia);
  if (fotoresistencia > 300){
    digitalWrite(LED, LOW);
  }
  else{
    digitalWrite(LED, HIGH);
  }
}

void loop(){
// Loop que llama a las funciones para arrancar motor, alternar displays y prender fotoresistencia.
//Lee el switch para luego ver primos o naturales del 0-99.
  arrancarMotor();
  alternarDisplays();
  prenderLedFotoresistencia();
  
  int tipoNumero = digitalRead(SWITCH);
  contEspera++;

  if (contEspera == 10){
    contEspera = 0;
    if (tipoNumero == 1){
        separarNumero();      
}
    else{
		  esNumeroPrimo();	
}

	if (contPrincipal > 99){
    contPrincipal = 0;
    }
  else{
    contPrincipal++;
  }
  }
}



void alternarDisplays()
{//función para alternan los displays.
  //Llama a la función que visualiza la decena o unidad y se la pasa como parámetro.
    
    if (cambiaDisplay == 0) {    
      digitalWrite(A4, HIGH);      
      digitalWrite(A5, LOW);
      
      contadorDigito(contadorDecena);
      delay(50);
      cambiaDisplay=1;     
    }
    else{
      digitalWrite(A4, LOW);      
      digitalWrite(A5, HIGH);
    
      contadorDigito(contadorUnidad);
      delay(50);
      cambiaDisplay=0; 
    }
}

void contadorDigito(int digito)
  {//función para encender y apagar los dígitos de ambos displays.
    //Se le pasa como parámetro la decena o la unidad para que la visualice.

  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(B, LOW);
  digitalWrite(A, LOW);
  digitalWrite(F, LOW);
	digitalWrite(G, LOW);  


switch(digito){
  
case 0:
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(F, HIGH);
  break;

case 1:
  digitalWrite(C, HIGH);
  digitalWrite(B, HIGH);
  break;

case 2:
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(G, HIGH);
  break;

case 3:
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(A, HIGH);
	digitalWrite(G, HIGH);
  break;

case 4:
  digitalWrite(C, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(F, HIGH);
	digitalWrite(G, HIGH);
  break;

case 5:
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(F, HIGH);
	digitalWrite(G, HIGH);
  break;

case 6:
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(F, HIGH);
	digitalWrite(G, HIGH);
  break;
  
case 7:
  digitalWrite(C, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(A, HIGH);
  break;

case 8:
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(F, HIGH);
	digitalWrite(G, HIGH);
  break;

case 9:
  digitalWrite(C, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(F, HIGH);
	digitalWrite(G, HIGH);
  break;

}}
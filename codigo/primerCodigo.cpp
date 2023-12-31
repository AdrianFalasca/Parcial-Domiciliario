// C++ code
//
#define UNIDAD 3
#define DECENA 2
#define RESET 4
#define G 13
#define F 12
#define A 11
#define B 10
#define E 9
#define D 8
#define C 7

//Inicialización de variables.
int antPresionado1 = 1;
int antPresionado2 = 1;
int contadorDecena = 0;
int contadorUnidad = 0;
int digito;
int cambiaDisplay = 0;
int contPrincipal = 0;

//Configuración de los pines.
void setup()//Los displays en salida digital y los botones en entrada digital.
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
  pinMode(UNIDAD, INPUT_PULLUP);
  pinMode(DECENA, INPUT_PULLUP);
  pinMode(RESET, INPUT_PULLUP);
}

void loop()// Loop que llama a dos funciones.
{   
  alternarDisplays();
  presionando(); 
}

void separarNumero(){//Función para separar el contador principal en decena y unidad.
  contadorDecena = contPrincipal / 10;
  contadorUnidad = contPrincipal % 10;
}

void presionando(){
  //Función para que incremente, decremente o resetee cuando se presiona el botón.
  //
  int presionado1 = digitalRead(UNIDAD);
  int presionado2 = digitalRead(DECENA);
  int presionado3 = digitalRead(RESET);
  
  if (presionado1 == 0 && antPresionado1 == 1){
    //Ingresa si se presiona y antes no estaba presionado.
      if (contPrincipal == 99){
        contPrincipal = 0;
    }
      else{
        contPrincipal++;
}	}

  separarNumero();
  antPresionado1 = presionado1;
  
//-------------------------------------------------------------------
  if (presionado2 == 0 && antPresionado2 == 1){
    //Ingresa si se presiona y antes no estaba presionado.
    
    if (contPrincipal == 0){
      contPrincipal = 99;
      }
    else{
      contPrincipal--;
  }
  }
  separarNumero();
  antPresionado2 = presionado2;

//----------------------------------------------------------  
  if (presionado3 == 0){
    contPrincipal = 0;
    separarNumero();
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
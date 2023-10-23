# PARCIAL DOMICILIARIO. SDP. ARDUINO.




### PRIMERA PARTE. PARCIAL DOMICILIARIO. FALASCA. FERRARA.


#### Se conectan los mismos pines a los mismos segmentos(letras) a los dos displays y en modo cátado un cable distinto para cada uno para hacer la multiplexación, encender uno y apagar el otro y viceversa continuamente. La configuración en salida digital con resistencias de 220ohms.Tres pulsadores configurados como entradas digitales que incrementarán, decrementarán o resetearán los displays. Los displays mostrarán del 0-99. Uno mostrará la unidad y el otro la decena.




### SEGUNDA PARTE. PARCIAL DOMICILIARIO. FALASCA.


#### A la primera parte se le cambia por los botones un switch que dependiendo de su posición mostrará los numeros naturales del 0-99 o los números primos de éstos. El switch se conecta uno a tierra, otro a 5v y el común a un pin con configuración en entrada digital. Además incorpora un sensor de temperatura que leerá la temperatura y si supera los 30 grados prenderá un motor con engranajes que gira simulando ser el motor de un ventilador. El motor de aficionado se conecta a tierra y a un pin configurado como salida digital. El sensor de temperatura se conecta a tierra, a 5v y el vout a un pin con prefijo A que está configurado por defecto como entrada analógica.




### TERCERA PARTE. PARCIAL DOMICILIARIO. FALASCA.


##### A la segunda parte se le incorporó un led que se enciende cuando la luz de la fotoresistencia baja. En la fotoresistencia cuanto mayor sea la intensidad de la luz que incide en la superficie del LDR menor será su resistencia y cuanta menos luz incida mayor será su resistencia. La led se configura como salida digital con una resistencia de 220ohms. Y la fotoresistencia se conecta a 5v, a un pin con prefijo A como entrada analógica y a tierra con una resistencia de 1kohm. 

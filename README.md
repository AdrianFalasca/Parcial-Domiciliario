# PARCIAL DOMICILIARIO. SDP. ARDUINO.


### Integrantes: 
* **Adrián Falasca.**
* **Eduardo Ferrara.**


------------


### PRIMERA PARTE.
#### Contador de 0 a 99 con Display 7 Segmentos y Multiplexación


<p>
<img width="600px" src="https://github.com/AdrianFalasca/Parcial-Domiciliario/blob/main/esquemas/Esquema1.jpg">
</p>





### Descripción:
#### Se conectan los mismos pines a los mismos segmentos(letras) a los dos displays y en modo cátodo un cable distinto para cada uno para hacer la multiplexación, encender uno y apagar el otro y viceversa continuamente. La configuración en salida digital con resistencias de 220ohms.Tres pulsadores configurados como entradas digitales que incrementarán, decrementarán o resetearán los displays. Los displays mostrarán del 0-99. Uno mostrará la unidad y el otro la decena.



### Link al proyecto:
* [Primer proyecto](https://www.tinkercad.com/things/5IK3aRrQh0f-primera-parte-parcial-domiciliario-falasca-ferrara/editel "Primer proyecto")

------------


### SEGUNDA PARTE. 
####  Modificación por un interruptor deslizante y números primos. Incorporación de un motor de aficionado y un sensor de temperatura.


<p>
<img width="600px" src="https://github.com/AdrianFalasca/Parcial-Domiciliario/blob/main/esquemas/Esquema2.jpg">
</p>


### Descripción:
#### A la primera parte se le cambia por los botones un switch que dependiendo de su posición mostrará los numeros naturales del 0-99 o los números primos de éstos. El switch se conecta uno a tierra, otro a 5v y el común a un pin con configuración en entrada digital. Además incorpora un sensor de temperatura que leerá la temperatura y si supera los 30 grados prenderá un motor con engranajes que gira simulando ser el motor de un ventilador. El motor de aficionado se conecta a tierra y a un pin configurado como salida digital. El sensor de temperatura se conecta a tierra, a 5v y el vout a un pin con prefijo A que está configurado por defecto como entrada analógica.

### Link al proyecto:
* [Segundo proyecto](https://www.tinkercad.com/things/6vjpMG5Y50m-segunda-parte-parcial-domiciliario-adrian-falasca/editel "Segundo proyecto")



------------


### TERCERA PARTE.
#### Incorporación al proyecto de la fotoresistencia.

### Integrante: 
* **Adrián Falasca.**

<p>
<img width="600px" src="https://github.com/AdrianFalasca/Parcial-Domiciliario/blob/main/esquemas/Esquema3.jpg">
</p>

### Descripción:
##### A la segunda parte se le incorporó un led que se enciende cuando la luz de la fotoresistencia baja. En la fotoresistencia cuanto mayor sea la intensidad de la luz que incide en la superficie del LDR menor será su resistencia y cuanta menos luz incida mayor será su resistencia. La led se configura como salida digital con una resistencia de 220ohms. Y la fotoresistencia se conecta a 5v, a un pin con prefijo A como entrada analógica y a tierra con una resistencia de 1kohm. 
### Link al proyecto:

* [Tercer proyecto](https://www.tinkercad.com/things/lcDUdU4J38a-tercera-parte-parcial-domiciliario-adrian-falasca/editel "Tercer proyecto")

------------

### CUARTA PARTE. 
#### Modificación del contador de números primos por hexadecimales.
### Integrante: 
* **Adrián Falasca.**

<p>
<img width="600px" src="https://github.com/AdrianFalasca/Parcial-Domiciliario/blob/main/esquemas/Esquema4.jpg">
</p>

### Descripción:
#### En esta cuarta parte se muestran en los dos displays los números hexadecimales del 0-99 en lugar de los números primos.  
### Link al proyecto:
* [Cuarto proyecto](https://www.tinkercad.com/things/4qfZOSFfbyF-cuarta-parte-parcial-domiciliario-adrian-falasca/editel "Cuarto proyecto")

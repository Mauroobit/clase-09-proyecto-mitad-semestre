
## Acerca de

Este proyecto de mitad de semestre fue hecho en el día martes 10 de mayo 2022, como parte del curso  aud5i022-2022-1.

Consiste de una barra de progreso de volumen basada en un potenciometro y 4 LEDs. El concepto principal de este proyecto era hacer un controlador de multimedia USB  haciendo uso del arduino UNO, pero esta idea fue truncada ya que el chip Atmega 16u2 del UNO no es capaz de transmitirse como HID. Es posible hacerlo con otras versiones como el Arduino Leonardo. (Teoricamente el UNO es capaz de hacerlo tambien utilizando la library [HoodLoader2](https://github.com/NicoHood/HoodLoader2), pero es una alteración al firmware y no queriamos exponernos a destruir nuestras placas o sobrecomplejizar el proceso).

Por ello, decidimos convertirlo en un proyecto mas analogíco, donde unos LEDs fueran los responsables de indicar el nivel del volumen de un speaker. Donde cada uno de estos LEDs representan un 25% del volumen; de esta manera los LEDs se van prendiendo mediante el volumen suba (1 led = 25%, 2 leds = 50%, etc.)

Los integrantes de este proyecto son: 
* Jose Moya
* Mauro Saravia

## lista de materiales

Los materiales son:

* Arduino Uno
* Protoboard
* Cables
* Potenciómetro
* Speaker 8 ohm de 0.5w
* 4 LEDs
* 4 Resistores
* Cable Usb tipo B a tipo A

Ademas de los materiales señalados es necesario añadir la siguiente library ![LibraryVolume](Volume.png)

## armado de circuito

estos son los pasos para armar el circuito.

primero hacemos X y se ve así.

![texto descripción de la foto](imagenes/00-ejemplo.jpg)

después hacemos Y y se ve así.

![texto descripción de la foto](imagenes/00-ejemplo.jpg)

## código para microcontrolador Arduino

el código está hecho para Arduino Uno, y está incluido en este repositorio aquí: [codigo_arduino/codigo_arduino.ino](codigo_arduino/codigo_arduino.ino).

Este codigo está basado en el trabajo de [Connor Nishijima](https://github.com/connornishijima/arduino-volume1) y [Joan Carles Francesc Fernández López](https://www.youtube.com/watch?v=qqc2aHCtWco).

primero creamos las variables blabla para almacenar valores para blabla. la variabla bla es análoga en el rango blabla y la variable blabla es digital y tiene valores posibles 0 y 1.

primero en setup() hacemos que los pines X e Y sean entradas digitales, el pin Z sea salida digital, y abrimos la comunicación serial.

luego en loop() leemos las entradas y usamos la salida Z para lograr prender una luz LED.

## conclusiones

Concluimos el proyecto sabiendo como utilizar un potenciometro en Arduino UNO para ajustar el volumen de un speaker 

* botón pulsador
* circuito para 

lo más difícil de este proyecto fue bla.

cometimos los siguientes errores durante el armado del circuito y en el código, y los solucionamos así y este error no lo supimos resolver.

este proyecto lo vemos como la base para lograr bla, nos hace pensar en bla, y nos gustaría expandirlo para 10 botones y mil luces y diez arduinos conectados por wifi.

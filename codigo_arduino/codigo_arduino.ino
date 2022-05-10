// AUD5I022-1 Primer Semestre 2022
// Entrega mitad de semestre
// Barra de progreso de volumen basado en un potenciometro y LEDs

//Libreria requerida: Volume - 1.1.2 by Connor Nishijima

// Codigos basados en:
  // "Potenciometro con 4 LEDS en cascada con arduino":
    //https://www.youtube.com/watch?v=qqc2aHCtWco
  // "Volume Library Interactive Sketch" (c) 2016 Connor Nishijima 
    // Released under the GPLv3 license https://github.com/connornishijima/arduino-volume1

#include "Volume.h" // Include the Volume library
Volume vol; // Plug your speaker into the default pin for your board type:
            // https://github.com/connornishijima/arduino-volume1#supported-pins

// Asignar LED
int led1=13; //led 1 en salida 13
int led2=12; //led 1 en salida 12
int led3=11; //led 1 en salida 11
int led4=10; //led 1 en salida 10
int val; //varaible val para potenciometro

// Warble variables!
int f = 100;
int fade = 1;

int p = 600;
int fadeP = 1;

int v = 0;
int fadeV = 0;


void setup() {
  vol.begin();
  pinMode (led1, OUTPUT); //salida para led 1
  pinMode (led2, OUTPUT); //salida para led 2
  pinMode (led3, OUTPUT); //salida para led 3
  pinMode (led4, OUTPUT); //salida para led 4
  pin
}


void loop() {
//Basado en "Potenciometro con 4 LEDS en cascada con arduino"
  val=analogRead(A0); //entrada analogica del potenciometro
  if (val>=0&&val<10){
    digitalWrite (led1, LOW); //todos los leds apagados
    digitalWrite (led2, LOW);
    digitalWrite (led3, LOW);
    digitalWrite (led4, LOW);
  }
  if (val>=10&&val<255){
    digitalWrite (led1, HIGH); //led 1 encendido
    digitalWrite (led2, LOW);
    digitalWrite (led3, LOW);
    digitalWrite (led4, LOW);
  }
  if (val>=255&&val<511){
    digitalWrite (led1, HIGH); //led 1 encendido
    digitalWrite (led2, HIGH); //led 2 encendido
    digitalWrite (led3, LOW);
    digitalWrite (led4, LOW);
  }
  if (val>=511&&val<767){
    digitalWrite (led1, HIGH); //led 1 encendido
    digitalWrite (led2, HIGH); //led 2 encendido
    digitalWrite (led3, HIGH); //led 3 encendido
    digitalWrite (led4, LOW);
  }
  if (val>=767&&val<1023){
    digitalWrite (led1, HIGH); //led 1 encendido
    digitalWrite (led2, HIGH); //led 2 encendido
    digitalWrite (led3, HIGH); //led 3 encendido
    digitalWrite (led4, HIGH); //led 4 encendido
  }

 //Tomado de: https://github.com/connornishijima/arduino-volume1/tree/master/examples/volume_warble
  vol.tone(f + p, v);

  float mv = constrain(analogRead(A0) / 10, 0, 100) / 100.00;
  // 0 Volts   =   0% volume
  // 2.5 Volts =  50% volume
  // 5 Volts   = 100% volume!
  // 
  // Use a potentiometer tied to A0 as a master volume control.
  
  vol.setMasterVolume(mv);
  vol.delay(1);        // delay in between reads for stability

  if (f < 800 and fade == 1) {
    f += 1;
  }
  else {
    fade = 0;
  }

  if (f > 0 and fade == 0) {
    f -= 1;
  }
  else {
    fade = 1;
  }

  if (p < 200 and fadeP == 1) {
    p += 10;
  }
  else {
    fadeP = 0;
  }

  if (p > 0 and fadeP == 0) {
    p -= 10;
  }
  else {
    fadeP = 1;
  }

  if (v < 250 and fadeV == 1) {
    v += 5;
  }
  else {
    fadeV = 0;
  }

  if (v > 65 and fadeV == 0) {
    v -= 5;
  }
  else {
    fadeV = 1;
  }
}

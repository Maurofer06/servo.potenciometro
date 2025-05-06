/*
Esta practica consiste en el control de un RGB a partir
de un potenciometro conectado a una entrada analogica del 
arduino
*/

#define POTENCIOMETRO A0
#include <Servo.h> 
Servo servoMotor;

int val; //variable para leer los valores del potenciometro

void setup() {
 servoMotor.attach(9); //establecer pin del servo
}

void loop(){
 val = analogRead(POTENCIOMETRO); //lee el valor de potenciometro
 val = map(val, 0, 1023, 0, 180); //transforma el valor del potenciometro
 servoMotor.write(val);
 delay(15); //espera respuesta del servomotor
}

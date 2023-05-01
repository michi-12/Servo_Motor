#include <Servo.h>// Incluímos la librería para poder controlar el servo
Servo servoMotor;// Declaramos la variable para controlar el servo
 
void setup() {
  Serial.begin(9600);// Iniciamos el monitor serie para mostrar el resultado 
  servoMotor.attach(9);// Iniciamos el servo para que empiece a trabajar con el pin 9
  servoMotor.write(0);// Inicializamos al ángulo 0 el servomotor
}
 
void loop() {
  // Vamos a tener dos bucles uno para mover en sentido positivo y otro en sentido negativo
  // sentido positivo
  for (int i = 0; i <= 180; i++)
  { 
    servoMotor.write(i);  // Desplazamos al ángulo correspondiente
    delay(5);// Hacemos una pausa de 5ms
  }
  // Para el sentido negativo
  for (int i = 179; i > 0; i--)
  { 
    servoMotor.write(i);// Desplazamos al ángulo correspondiente  
    delay(5);// Hacemos una pausa de 5ms
  }
}
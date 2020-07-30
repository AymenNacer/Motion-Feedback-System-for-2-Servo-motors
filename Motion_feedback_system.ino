#include <Servo.h>
Servo motor1;
Servo motor2;

int resistorValue ; 
int const resistorChange = A0;


void setup() {

  motor1.attach(2);
  motor2.attach(3);
  pinMode(resistorChange, INPUT);
}

void loop() { 
 
             
  resistorValue = map(analogRead(resistorChange), 0, 1023, 0, 180);     
  motor1.write(resistorValue);      
  motor2.write(resistorValue);   
                
  delay(15); 

}
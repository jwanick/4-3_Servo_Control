// Sweep
// by BARRAGAN <http://barraganstudio.com> 
// This example code is in the public domain.


#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 
 
int pos = 0;    // variable to store the servo position 
 
void setup() 
{ 
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object 
   
    
} 
 
 
void loop() 
{ 
 myservo.write(99);
    delay(1000);
    myservo.write(16);
    delay(1000);
    myservo.write(173);
    delay(1000);
    
}

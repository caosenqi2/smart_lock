#define BLYNK_PRINT DebugSerial
#include <SoftwareSerial.h>
SoftwareSerial DebugSerial(2, 3); // RX, TX
#include <BlynkSimpleStream.h>
#include <Servo.h>

char auth[] = "eKGWhrvuAjfQZyjpcUbQbzeaRqfo5O_f";

Servo servo;
int pos = 0;
int x=50;
int ib = '0';
int pin = 13;

BLYNK_WRITE(V3){
  servo.write(param.asInt());
  }

void setup()
{
  Serial.begin(9600);
  Blynk.begin(Serial, auth);
  pinMode(pin, OUTPUT);
  servo.attach(9);
}

void loop()
{
  while(1){
    //digitalWrite(pin, HIGH);delay(1000);digitalWrite(pin, LOW);delay(1000);
    //digitalWrite(pin, HIGH);
    //delay(30);
    //ib=Serial.read();
    
    x = 200;
    while(x>0){
    Blynk.run();x--;
    }
    
    
    ib = Serial.read();
    if (ib=='a') break;
  }

  
  


if(ib == 'a'){
      //digitalWrite(pin, HIGH);delay(1000);digitalWrite(pin, LOW);delay(1000);
      digitalWrite(pin, LOW);
      for (pos = 90; pos >= 0; pos -= 1) { 
        servo.write(pos);              
        delay(3);                      
      }

      delay(8000);
      
     for (pos = 0; pos <= 90; pos += 1) { // goes from 180 degrees to 0 degrees
      servo.write(pos);              // tell servo to go to position in variable 'pos'
      delay(3);                       // waits 15ms for the servo to reach the position
     }
    }
  while(Serial.available()>0){ib = Serial.read();}
}

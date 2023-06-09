#include "SR04.h"

#define TRIG_PIN 12
#define ECHO_PIN 11 
int buzzer = 9;

SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);
long security_distance;

void setup() {
   Serial.begin(9600);
   delay(1000);
   pinMode(buzzer,OUTPUT);
}

void loop() {
   
   security_distance=sr04.Distance();
   Serial.print(security_distance);
   Serial.println("cm"); 

   delay(1000);
   
   if (security_distance>3){
     digitalWrite(buzzer,HIGH);
     delay(1);//wait for 1ms
   }
}

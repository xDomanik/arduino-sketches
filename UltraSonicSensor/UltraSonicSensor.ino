//www.elegoo.com
//2016.12.08
#include "SR04.h"

#define TRIG_PIN 6
#define ECHO_PIN 8
#define yellow 2

SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);
long a;

void setup() {
   Serial.begin(9600);//Initialization of Serial Port
   delay(1000);
   pinMode(yellow, OUTPUT);
}

void loop() {
   a=sr04.Distance();
   Serial.print(a/2.54);
   Serial.println("inches");//The difference between "Serial.print" and "Serial.println" 
                        //is that "Serial.println" can change lines.

   if(a > 70){
    digitalWrite(yellow, LOW);
   }else{
     digitalWrite(yellow, HIGH);
   }
delayMicroseconds(1);
}

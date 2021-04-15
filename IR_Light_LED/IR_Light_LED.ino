
#include <IRremote.h>


const int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results results;
int pin = 4;

void setup(){
  Serial.begin(9600);
  irrecv.enableIRIn();
  pinMode(pin, OUTPUT);
  irrecv.blink13(true);
}

void loop(){
  if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        switch(results.value) {
          case 0xFF30CF:
          digitalWrite(pin, HIGH);
          break;
          default:
          digitalWrite(pin, LOW);
        }
        irrecv.resume();
  }
}

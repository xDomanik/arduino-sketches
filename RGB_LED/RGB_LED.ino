#define BLUE 3
#define GREEN 5
#define RED 6


void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, HIGH);
  digitalWrite(RED, LOW);
  digitalWrite(RED,LOW);

  
  

}

void loop() {
  // put your main code here, to run repeatedly:

  #define delayTime 1000

  int red = 255;
  int blue = 200;
  int green = 124;

  delay(delayTime);
  if(red == 255){
    
    analogWrite(BLUE, blue);
     analogWrite(GREEN, green);
     analogWrite(RED, red);
    delay(delayTime);
 
  }

}

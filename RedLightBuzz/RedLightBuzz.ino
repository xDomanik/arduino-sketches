int ledPin = 7;
int buttonApin = 3;
int buzzer = 8;

void setup() 
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);  
  pinMode(buzzer, OUTPUT);
  
}

void loop() 
{
  if (digitalRead(buttonApin) == HIGH)
  {
      Serial.print("HIGH");

      // Buzzer
      int total = 10000;
      int counter = 0;
      
      while (counter < total){
        digitalWrite(buzzer, HIGH);
        counter+=1;
      }

    digitalWrite(ledPin, HIGH);
  }


 if (digitalRead(buttonApin) == LOW)
  {
      Serial.print("LOW ");
      digitalWrite(buzzer, LOW);

    digitalWrite(ledPin, LOW);
  }
} 

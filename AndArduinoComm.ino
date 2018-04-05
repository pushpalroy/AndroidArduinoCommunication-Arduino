#include <SoftwareSerial.h>

int  GREEN = 13;
char c;

void setup()
{
  Serial.begin(38400);
  Serial.println("STARTING");
  
  pinMode(GREEN, OUTPUT);
}

void loop()
{
  while(Serial.available())
  {
    c = (char)Serial.read();
    Serial.println(c);
    
    switch (c){
    case 'a':
        digitalWrite(GREEN, HIGH);
      break;
    case 'b':
        digitalWrite(GREEN, LOW);
      break;
    }
  }
}


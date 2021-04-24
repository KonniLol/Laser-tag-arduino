#include <Arduino.h>
 
int ldrPin = A0;     // the cell and 10K pulldown are connected to a0
int ledPin = A4;
long ldrValue1, ldrValue2;

  
void setup(void) {
   pinMode (ledPin,OUTPUT);  // set the siren pin as output
   pinMode (ldrPin,INPUT);  // set the siren pin as output
   //Serial.begin(9600);  
}
 
void loop(void) {
  ldrValue1 = analogRead(ldrPin);  
  delay(10);
  ldrValue2 = analogRead(ldrPin);  

  if (ldrValue2-ldrValue1 > 20){ //||ldrValue2-ldrValue1 > 20
  digitalWrite(ledPin,HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  }  
  //Serial.print("Analog reading = ");
  //Serial.println(ldrValue1);     // the raw analog reading
}

#include <Arduino.h>

const int lampPin = 33;  //Merah
const int lampPin2 = 25; //Kuning
const int lampPin3 =  32; //hijau

void setup() {
  pinMode(lampPin, OUTPUT);
  pinMode(lampPin2, OUTPUT);
  pinMode(lampPin3, OUTPUT);
}

void loop() {
  Serial.println("Lampu Merah");
  digitalWrite(lampPin, HIGH); 
  digitalWrite(lampPin2, LOW); 
   digitalWrite(lampPin3, LOW);
  delay(10000);  

  Serial.println("Lampu Kuning");
  digitalWrite(lampPin, LOW);   
  digitalWrite(lampPin2, HIGH);  
  digitalWrite(lampPin3, LOW);
  delay(10000);  

  Serial.println("Lampu Hijau");
  digitalWrite(lampPin, LOW);   
  digitalWrite(lampPin2, LOW);  
  digitalWrite(lampPin3, HIGH);
  delay(10000);  
}
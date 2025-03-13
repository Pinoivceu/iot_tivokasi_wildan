#include <Arduino.h>

const int trigPin = 5;
const int echoPin = 18;

#define SOUND_SPEED 0.034  // Kecepatan suara dalam cm/us
#define CM_TO_INCH 0.393701

void setup() {
    Serial.begin(115200);
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
}

float getDistanceCm() {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    
    long duration = pulseIn(echoPin, HIGH);
    return (duration * SOUND_SPEED) / 2;
}

void loop() {
    float distanceCm = getDistanceCm();
    float distanceInch = distanceCm * CM_TO_INCH;
    
    Serial.print("Jarak: ");
    Serial.print(distanceCm);
    Serial.println(" cm");
    
    // Jika ingin menampilkan dalam inch, bisa diaktifkan
    // Serial.print("Jarak: ");
    // Serial.print(distanceInch);
    // Serial.println(" inch");
    
    delay(1000);
}

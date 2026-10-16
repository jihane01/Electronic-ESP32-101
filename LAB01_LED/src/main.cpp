#include <Arduino.h>

const int LED = 23;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH); // Allumer
  delay(3000);             // 3 secondes
  digitalWrite(LED, LOW);  // Éteindre
  delay(3000);             // 3 secondes
}

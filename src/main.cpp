#include <Arduino.h>

const int ledpin = 5;
const int ledtime = 300;

void setup() {
  pinMode(ledpin,OUTPUT);
}

void loop() {
  digitalWrite(ledpin,HIGH);
  delay(ledtime);
  digitalWrite(ledpin,LOW);
  delay(ledtime);
}
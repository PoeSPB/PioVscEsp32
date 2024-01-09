#include <Arduino.h>

#define LED 2

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  //int result = myFunction(2, 3);
  pinMode(LED, OUTPUT);  // set pin as output
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(500);
  digitalWrite(LED,HIGH);
  delay(500);
  digitalWrite(LED,LOW);
}

// put function definitions here:
/*int myFunction(int x, int y) {
  return x + y;
}
*/
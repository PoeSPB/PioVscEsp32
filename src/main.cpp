#include <Arduino.h>
#include <stdio.h>

#define LED 12

// put function declarations here:
int myFunction(int, int);

int i = 0;

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  //int result = myFunction(2, 3);
  pinMode(LED, OUTPUT);  // set pin as output
  digitalWrite(LED,HIGH);
}

void loop() {
  if(i < 1000) {
    delay(i);
    digitalWrite(LED,LOW);
    tone(15,400,i);
    Serial.printf("%i\n", i);
    delay(i);
    digitalWrite(LED,HIGH);
    i+=100;
  } else {
    while(i != 0) {
      delay(i);
      digitalWrite(LED,LOW);
      tone(15,400,i);
      Serial.printf("%i\n", i);
      delay(i);
      digitalWrite(LED,HIGH);
      i-=100;      
    }
  }
}

// put function definitions here:
/*int myFunction(int x, int y) {
  return x + y;
}
*/
#include <Servo.h>
Servo myservo;

int pot = A0; //pin A0
int periodo = 20000;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);
  myservo.writeMicroseconds(1500);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = map(analogRead(pot),0,1024,0,periodo);

  Serial.print("val: "); Serial.println(val);

  myservo.writeMicroseconds(val);
}

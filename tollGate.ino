#include<Servo.h>
Servo myservo;
const int t=3;
const int e=5; 
long tme;
int d;
 
void setup() {
myservo.attach(9);
pinMode(t,OUTPUT);
pinMode(e,INPUT);
Serial.begin(9600);
}
 
void loop() {
digitalWrite(t,LOW);
delayMicroseconds(2);
digitalWrite(t,HIGH);
delayMicroseconds(10);
digitalWrite(t,LOW);
 
tme=pulseIn(e,HIGH);
d=(0.034*tme)/2;
 
if(d<=10){
 
myservo.write(90);
  }
else{
myservo.write(0);}
 
Serial.print("d:");
Serial.println(d);
 
delay(1);
 
}

#include <SoftwareSerial.h>// import the serial library
//mySerial(rxPin, txPin);
SoftwareSerial mySerial (10, 11);
void setup() {
pinMode(10,INPUT);
pinMode(11,OUTPUT);
//set data rate
mySerial.begin(9600);
}

void loop() {
  
  
  mySerial.println("Hello");
  delay(2000);
  mySerial.println("Hello after 2 seconds");
  delay(30000); 
  mySerial.println("Start again after 30 Seconds\n let's go \n");
}

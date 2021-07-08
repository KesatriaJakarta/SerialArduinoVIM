#include<HardwareSerial.h>
String a;
int status = true;
int ledPins[] = {3, 4, 5, 6, 7, 8};
byte count;
#define nBits sizeof(ledPins)/sizeof(ledPins[0])

void setup() {
  for(byte i=0; i<nBits; i++){
    pinMode(ledPins[i], OUTPUT);}
    Serial.begin(9600); }// opens serial port, sets data rate to 9600 bps
 
void loop(){
if(status == true){
   Serial.write("OK\r\n");
    //delay(2);
      status = 2;
 }
while(Serial.available()) {
a= Serial.readString(); // read the incoming data 
    String led1 = a.substring(0,1);
    String led2 = a.substring(2,3);
    String led3 = a.substring(4,5);
    String led4 = a.substring(6,7);
    String led5 = a.substring(8,9);
    String led6 = a.substring(10,11);
    if(led1 == "1"){ digitalWrite(ledPins[0],HIGH); } else { digitalWrite(ledPins[0],LOW); }
    if(led2 == "1"){ digitalWrite(ledPins[1],HIGH); } else { digitalWrite(ledPins[1],LOW); }
    if(led3 == "1"){ digitalWrite(ledPins[2],HIGH); } else { digitalWrite(ledPins[2],LOW); }
    if(led4 == "1"){ digitalWrite(ledPins[3],HIGH); } else { digitalWrite(ledPins[3],LOW); }
    if(led5 == "1"){ digitalWrite(ledPins[4],HIGH); } else { digitalWrite(ledPins[4],LOW); }
    if(led6 == "1"){ digitalWrite(ledPins[5],HIGH); } else { digitalWrite(ledPins[5],LOW); } 
    status = 1; 
    //delay(100);
  }
}
   
  

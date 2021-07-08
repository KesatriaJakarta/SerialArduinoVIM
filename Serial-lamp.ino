int led1 = 3;
int led2 = 4;
int led3 = 5;
int led4 = 6;
int led5 = 7;
int led6 = 8;
int out;

void setup()
{
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
}

void loop()
{
  if (Serial.available()>0)
  {
    int pussy = Serial.read();
    switch (pussy) {
      case '1':
          digitalWrite(led1, HIGH);
          delay(2000);
          digitalWrite(led1, LOW);
          delay(2000);
          digitalWrite(led2, HIGH);
          delay(2000);
          digitalWrite(led2, LOW);
          delay(2000);
          digitalWrite(led3, HIGH);
          delay(2000);
          digitalWrite(led3, LOW);
          delay(2000);
          digitalWrite(led4, HIGH);
          delay(2000);
          digitalWrite(led4, LOW);
          delay(2000);
          digitalWrite(led5, HIGH);
          delay(2000);
          digitalWrite(led5, LOW);
          delay(2000);
          digitalWrite(led6, HIGH);
          delay(2000);
          digitalWrite(led6, LOW);
          delay(2000);
          Serial.println("ALLED Play"); 
       break;
           
       case '2':
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);
        digitalWrite(led5, HIGH);
        digitalWrite(led6, HIGH);
        Serial.println("ALLED ON");
       break;
       case '3':
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
        digitalWrite(led5, LOW);
        digitalWrite(led6, LOW);
        Serial.println("ALLED OFF");
       break;
          case 'a':
          digitalWrite(led1, HIGH);
          delay(100);
          digitalWrite(led1, LOW);
          delay(100);
          digitalWrite(led1, HIGH);
          delay(100);
          digitalWrite(led1, LOW);
          delay(100);
          digitalWrite(led1, HIGH);
          delay(100);
          digitalWrite(led1, LOW);
          delay(100);
          digitalWrite(led1, HIGH);
          delay(100);
          digitalWrite(led1, LOW);
          delay(100);
          break;
          case 'b':
          digitalWrite(led2, HIGH);
          delay(100);
          digitalWrite(led2, LOW);
          delay(100);
          digitalWrite(led2, HIGH);
          delay(100);
          digitalWrite(led2, LOW);
          delay(100);
          digitalWrite(led2, HIGH);
          delay(100);
          digitalWrite(led2, LOW);
          delay(100);
          digitalWrite(led2, HIGH);
          delay(100);
          digitalWrite(led2, LOW);
          delay(100);
          break;
          case 'c':
          digitalWrite(led3, HIGH);
          delay(100);
          digitalWrite(led3, LOW);
          delay(100);
          digitalWrite(led3, HIGH);
          delay(100);
          digitalWrite(led3, LOW);
          delay(100);
          digitalWrite(led3, HIGH);
          delay(100);
          digitalWrite(led3, LOW);
          delay(100);
          digitalWrite(led3, HIGH);
          delay(100);
          digitalWrite(led3, LOW);
          delay(100);
          break;
          case 'd':
          digitalWrite(led4, HIGH);
          delay(100);
          digitalWrite(led4, LOW);
          delay(100);
          digitalWrite(led4, HIGH);
          delay(100);
          digitalWrite(led4, LOW);
          delay(100);
          digitalWrite(led4, HIGH);
          delay(100);
          digitalWrite(led4, LOW);
          delay(100);
          digitalWrite(led4, HIGH);
          delay(100);
          digitalWrite(led4, LOW);
          delay(100);
          break;
    }
    /*
    if (pussy =='1')
    {
    out=1;
    }
    if (pussy =='2')
    {
    out=2;
    }
    if (pussy =='3')
    {
    out=3;
    }
    
  if(out==1)
  runs:                         
  {
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led1, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  Serial.println("LED running");
  loop();
  goto runs;
   } 
  if(out==2)
  start:                           
  {
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  Serial.println("LED ON");  
  loop();
  goto start;
  }
  if(out==3)
  stop:                             
  {
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  Serial.println("LED OFF");
  //loop();
  goto stop;
  }*/
  }
}

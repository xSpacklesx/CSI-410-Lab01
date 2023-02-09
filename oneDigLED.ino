int a=6; 
int b=7; 
int c=5; 
int d=11; 
int e=10; 
int f=8; 
int g=9; 
int dp=4; 

const int sensorPin = A0;

//display number 1
void display1(void) 
{ 
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
} 
//display number2
void display2(void) 
{
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(d,HIGH);
} 
// display number3
void display3(void) 
{ 
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);  
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(g,HIGH);
} 
// display number4
void display4(void) 
{ 
    digitalWrite(f,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(c,HIGH);
} 
// display number5
void display5(void) 
{ 
    digitalWrite(a,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
} 
// display number6
void display6(void) 
{ 
    digitalWrite(a,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);  
    digitalWrite(e,HIGH);  
} 
// display number7
void display7(void) 
{   
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
} 
// display number8
void display8(void) 
{ 
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);  
    digitalWrite(e,HIGH);  
    digitalWrite(f,HIGH);  
} 
void clearDisplay(void) 
{ 
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(g,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);  
    digitalWrite(e,LOW);  
    digitalWrite(f,LOW);  
} 
void display9(void) 
{ 
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);  
    digitalWrite(f,HIGH);  
} 
void display0(void) 
{ 
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);  
    digitalWrite(e,HIGH);  
    digitalWrite(f,HIGH);  
} 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int i;
  for (i = 4; i<-11;i++)
    pinMode(i,OUTPUT);
  pinMode(12, OUTPUT);
  digitalWrite(12, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  float sensorVal = analogRead(sensorPin);
  Serial.print("Sensor Value = ");
  Serial.println(sensorVal);
  
  if (sensorVal <= 102 ){
    clearDisplay();
    display0();
    digitalWrite(12, HIGH);
  }
  else if (sensorVal >= 103 && sensorVal <= 204){
    clearDisplay();
    display1();
    digitalWrite(12, HIGH);
  }
  else if (sensorVal >= 205 && sensorVal <= 306){
    clearDisplay();
    display2();
    digitalWrite(12, HIGH);
  }
  else if (sensorVal >= 307 && sensorVal <= 408){
    clearDisplay();
    display3();
    digitalWrite(12, HIGH);
  }
  else if (sensorVal >= 409 && sensorVal <= 510){
    clearDisplay();
    display4();
    digitalWrite(12, HIGH);
  }
  else if (sensorVal >= 511 && sensorVal <= 612){
    clearDisplay();
    display5();
    digitalWrite(12, HIGH);
  }
  else if (sensorVal >= 613 && sensorVal <= 714){
    clearDisplay();
    display6();
    digitalWrite(12, LOW);
  }
  else if (sensorVal >= 715 && sensorVal <= 816){
    clearDisplay();
    display7();
    digitalWrite(12, LOW);
  }
  else if (sensorVal >= 817 && sensorVal <= 918){
    clearDisplay();
    display8();
    digitalWrite(12, LOW);
  }
  else if (sensorVal >= 919){
    clearDisplay();
    display9();
    digitalWrite(12, LOW);

  }
}

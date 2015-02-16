#define lmf 11  //Left motor Forward Pin
#define lmb 10  //Left motor Backward Pin
#define rmf 6   //Right motor Forward Pin
#define rmb 5   //Right motor Backward Pin
int leftsensor = 0;
int rightsensor = 1;

void setup(){
  Serial.begin(9600);
  pinMode(lmf,OUTPUT);
  pinMode(lmb,OUTPUT);
  pinMode(rmf,OUTPUT);
  pinMode(rmb,OUTPUT);
  
  
}


void loop(){
  int reading1 = analogRead(leftsensor);
  int reading2 = analogRead(rightsensor);
  Serial.print("Left Sensor Reading: ");
  Serial.print(leftsensor);
  Serial.print("\t Right Sensor Reading: ");
  Serial.println(rightsensor);
  
  if((reading1 == 0) && (reading2 == 0))
  {
     forward(); 
  }
  if(reading1 == 0 && reading2 !=0 )
  {
    right();
  }
  if(reading1 !=0 && reading2 == 0)
  {
    left();
  }
  if(reading1 !=0 && reading2 != 0)
  {
    backward();
  }
}

void forward(){
  //forward motion
  digitalWrite(lmf,HIGH);
  digitalWrite(lmb,LOW);
  digitalWrite(rmf,HIGH);
  digitalWrite(rmb,LOW);
  delay(5000);
}

void backward(){
  //backward motion
  digitalWrite(lmb,HIGH);
  digitalWrite(lmf,LOW);
  digitalWrite(rmb,HIGH);
  digitalWrite(rmf,LOW);
  delay(5000);
}

void right(){
  //right
  
  digitalWrite(lmf,HIGH);
  digitalWrite(lmb,LOW);
  digitalWrite(rmb,HIGH);
  digitalWrite(rmf,LOW);
  delay(5000);
}

void left(){
  //left
  
  digitalWrite(lmb,HIGH);
  digitalWrite(lmf,LOW);
  digitalWrite(rmf,HIGH);
  digitalWrite(rmb,LOW);
  delay(5000);
}

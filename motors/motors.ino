#define lmf 11  //Left motor Forward Pin
#define lmb 10  //Left motor Backward Pin
#define rmf 6   //Right motor Forward Pin
#define rmb 5   //Right motor Backward Pin

void setup{
  pinMode(lmf,OUTPUT);
  pinMode(lmb,OUTPUT);
  pinMode(rmf,OUTPUT);
  pinMode(rmb,OUTPUT);
  
  
}

void loop{
  
  //forward motion
  digitalWrite(lmf,HIGH);
  digitalWrite(lmb,LOW);
  digitalWrite(rmf,HIGH);
  digitalWrite(rmb,LOW);
  delay(5000);
  
  //backward motion
  digitalWrite(lmb,HIGH);
  digitalWrite(lmf,LOW);
  digitalWrite(rmb,HIGH);
  digitalWrite(rmf,LOW);
  delay(5000);

  //right
  
  digitalWrite(lmf,HIGH);
  digitalWrite(lmb,LOW);
  digitalWrite(rmb,HIGH);
  digitalWrite(rmf,LOW);
  delay(5000);
  
  //left
  
  digitalWrite(lmb,HIGH);
  digitalWrite(lmf,LOW);
  digitalWrite(rmf,HIGH);
  digitalWrite(rmb,LOW);
  delay(5000);
  
}

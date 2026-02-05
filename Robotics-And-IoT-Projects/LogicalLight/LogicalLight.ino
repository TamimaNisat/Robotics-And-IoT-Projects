void setup() {
  // put your setup code here, to run once:
  pinMode(4,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(4,HIGH);
  delay(2000);
  digitalWrite(4,LOW);

  digitalWrite(7,HIGH);
  delay(800);
  digitalWrite(7,LOW);

  digitalWrite(8,HIGH);
  delay(1500);
  digitalWrite(8,LOW);
  delay(1500);

  
  
  

}

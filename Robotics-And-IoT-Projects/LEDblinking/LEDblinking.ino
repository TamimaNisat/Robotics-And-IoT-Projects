void setup() {
  // put your setup code here, to run once:
  pinMode(4, OUTPUT);
  
  
  
}

void loop() {
  digitalWrite(4, HIGH); // LED ON
  delay(500);           // Wait for 0.5 second

  digitalWrite(4, LOW);  // LED OFF
  delay(500);           // Wait for 0.5 second
}
void setup() {
  pinMode(4, OUTPUT); // LED 1
  pinMode(7, OUTPUT); // LED 2
  pinMode(8, OUTPUT); // LED 3
}

void loop() {
  // LED 1 → 2 blinks
  for(int i = 0; i < 1; i++) {
    digitalWrite(4, HIGH);
    delay(500);
    digitalWrite(4, LOW);
    delay(500);
  }

  // LED 2 → 3 blinks
  for(int i = 0; i < 2; i++) {
    digitalWrite(7, HIGH);
    delay(500);
    digitalWrite(7, LOW);
    delay(500);
  }

  // LED 3 → 4 blinks
  for(int i = 0; i < 3; i++) {
    digitalWrite(8, HIGH);
    delay(500);
    digitalWrite(8, LOW);
    delay(500);
  }

  // Optional delay before repeating the sequence
  delay(1000);
}

int brightness1 = 0;
int brightness2 = 255;

void setup() {
  Serial.begin(9600);

  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {

  brightness1++;      // 0 → 255
  brightness2--;      // 255 → 0

  analogWrite(10, brightness1);
  //delay(50); 
  analogWrite(11, brightness2);

  delay(60);   // same delay for both

}
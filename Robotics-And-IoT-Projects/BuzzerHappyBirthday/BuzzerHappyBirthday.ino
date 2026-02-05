int buzzer = 3;

// Musical note frequencies (Hz) – standard
#define NOTE_C4  262
#define NOTE_D4  294
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_G4  392
#define NOTE_A4  440
#define NOTE_B4  494
#define NOTE_C5  523

int melody[] = {
  NOTE_G4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_C5, NOTE_B4,
  NOTE_G4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_D4, NOTE_C5,
  NOTE_G4, NOTE_G4, NOTE_C5, NOTE_E4, NOTE_C5, NOTE_B4, NOTE_A4,
  NOTE_F4, NOTE_F4, NOTE_E4, NOTE_C5, NOTE_D4, NOTE_C5
};

int noteDurations[] = {
  4,4,2,2,2,1,
  4,4,2,2,2,1,
  4,4,2,2,2,2,1,
  4,4,2,2,1
};

void setup() {
  for (int i = 0; i < 25; i++) {
    int duration = 1000 / noteDurations[i];
    tone(buzzer, melody[i], duration);
    delay(duration * 1.3);
    noTone(buzzer);
  }
}

void loop() {
}

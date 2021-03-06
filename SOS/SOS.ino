#define ledPin 13 // Preprocessor directive is like a symbol in ASM
int durations[] = {200, 200, 200, 500, 500, 500, 200, 200, 200};

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 9; i++)
  {
    flash(durations[i]); // pass in the delays of the array!
  }
  delay(1000);
}

void flash(int delayPeriod)
{
  digitalWrite(ledPin, HIGH);
  delay(delayPeriod);
  digitalWrite(ledPin, LOW);
  delay(delayPeriod);
}


#define ledPin 13 // Preprocessor directive is like a symbol in ASM
int delayPeriod = 250;// This is a global variable


void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  static int count = 0; // C statics can only be initialized once
  digitalWrite(ledPin, HIGH);
  delay(delayPeriod);
  digitalWrite(ledPin, LOW);
  delay(delayPeriod);
  count++;
  if (count == 20)
  {
    count = 0;
    delay(3000);
  }
}


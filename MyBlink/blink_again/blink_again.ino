int ledPin = 13;
int delayPeriod = 100;

void setup() {
  // put your setup code here, to run once:
    pinMode(ledPin, OUTPUT);
    
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH);
  delay(delayPeriod);
  digitalWrite(ledPin, LOW);
  delay(delayPeriod); // You have to delay on both ends for a blink to be visible
  delayPeriod = delayPeriod + 100; // blink slows down gradually
  // Added if example
  if(delayPeriod > 3000)
  {
    delayPeriod = 100;
  }
  
}

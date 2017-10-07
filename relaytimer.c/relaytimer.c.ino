const int RelayControl = 12;
const int Led = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(RelayControl, OUTPUT);
  pinMode(Led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Led, LOW);
  digitalWrite(RelayControl, HIGH);
  //delay(3600000); // 1 Hour delay
  //delay(7200000); // 2 Hour delay
  delay(2000); // 2 Seconds delay
  //delay(3600000); // Hour delay
  digitalWrite(RelayControl, LOW);
  digitalWrite(Led, HIGH);
  while (true)
  {
    // Empty loop, reset to start timing again.
  }
}

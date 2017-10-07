const int RelayControl = 13;


void setup() {
  // put your setup code here, to run once:
  pinMode(RelayControl, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(RelayControl, HIGH);
  delay(3600000); // 1 Hour delay
  //delay(7200000); // 2 Hour delay
  //delay(3600000); // Hour delay
  //delay(3600000); // Hour delay
  digitalWrite(RelayControl, LOW);
  while (true)
  {
    // Empty loop, reset to start timing again.
  }
}

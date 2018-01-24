unsigned long times;
unsigned long target = 10000; // 10 sec oletus
const int ledPin =  LED_BUILTIN;
const int relayPin = 5; // D1
const int button1Pin = 14; // D5
const int button2Pin = 12; // D6
const int button3Pin = 13; // D7

void setup(){
  //Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  pinMode(relayPin, OUTPUT);
  pinMode(button1Pin, INPUT_PULLUP);
  pinMode(button2Pin, INPUT_PULLUP);
  pinMode(button3Pin, INPUT_PULLUP);00
}

void loop(){  
  //Serial.print("Time: ");
  times = millis();
  // Relay on time set as button value: 0.5, 1, 2 hours..
  if(0==digitalRead(button1Pin))
  {
    target = millis()+1800000; // 0.5 Hour
  }
  if(0==digitalRead(button2Pin))
  {
    target = millis()+3600000; // 1 Hour
  }
  if(0==digitalRead(button3Pin))
  {
    target = millis()+7200000; // 2 Hours
  }
  
  if(times<target)
  {
    //Serial.print("Timer running! ");
    //Serial.println(times);
    digitalWrite(ledPin, LOW);
    digitalWrite(relayPin, HIGH);
  }
  else
  {
    //Serial.println(times);
    digitalWrite(ledPin, HIGH);
    digitalWrite(relayPin, LOW);//prints time since program started
  }
  delay(1000);             // wait a second so as not to send massive amounts of data
}

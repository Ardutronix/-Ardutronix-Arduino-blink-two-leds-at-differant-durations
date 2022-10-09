unsigned long previousMillisLED1 = 0;
unsigned long previousMillisLED2 = 0;
const long interval_1 = 200; //duration of blink LED1
const long interval_2 = 1000; //duration of blink LED2

int LED1 = 7;
int LED2 = 12;

void setup()
  {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  }
void loop()
  {
  unsigned long currentMillisLED1 = millis();
  if (currentMillisLED1 - previousMillisLED1 >= interval_1)
  {
    previousMillisLED1 = currentMillisLED1;
    digitalWrite(LED1, !digitalRead(LED1));
  }
  unsigned long currentMillisLED2 = millis();
  if (currentMillisLED2 - previousMillisLED2 >= interval_2)
  {
    previousMillisLED2 = currentMillisLED2; 
    digitalWrite(LED2, !digitalRead(LED2));
  }
}

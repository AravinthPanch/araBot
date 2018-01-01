//E1 Thermistor pin
//int testPin = A15;

//E0 Hotend pin 
int testPin = 7;


void setup()
{
  pinMode(testPin, OUTPUT);
}

void loop()
{
  digitalWrite(testPin, HIGH);
  delay(1000);
  digitalWrite(testPin, LOW);
  delay(1000);
}

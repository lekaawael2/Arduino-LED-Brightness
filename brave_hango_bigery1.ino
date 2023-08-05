// C++ code
//
int led = 9;
void setup()
{
  digitalWrite(led,0);
  pinMode(led, OUTPUT); 
}

void loop()
{
  analogWrite(led,255);
  delay(1000);
  analogWrite(led,65);
  delay(500);
}
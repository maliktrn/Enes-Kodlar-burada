int trigPin = 3;
int echoPin = 4;
int a = 8;
int b = 9;
int c = 10;
int buzzerPin = 12;

long sure;
long mesafe;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop()
{
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);

  sure = pulseIn(echoPin, HIGH);
  mesafe = (sure/2)/29.1;

  if(mesafe <= 10)
  {
    digitalWrite(c,HIGH);
    digitalWrite(buzzerPin,HIGH);
    delay(100);
    digitalWrite(b,LOW);
    digitalWrite(a,LOW);
  }
  else if(mesafe <= 15)
  {
    digitalWrite(c,HIGH);
    digitalWrite(buzzerPin,HIGH);
    delay(100);
    digitalWrite(c,LOW);
    digitalWrite(buzzerPin,LOW);
    delay(100);
        
    digitalWrite(b,LOW);
    digitalWrite(a,LOW);
  }
  else if(mesafe <= 20)
  {
    digitalWrite(b,HIGH);
    digitalWrite(buzzerPin,HIGH);
    delay(100);
    digitalWrite(b,LOW);
    digitalWrite(buzzerPin,LOW);
    delay(100);
        
    digitalWrite(c,LOW);
    digitalWrite(a,LOW);
  }
  else if(mesafe <= 25)
  {
    digitalWrite(a,HIGH);
    digitalWrite(buzzerPin,HIGH);
    delay(100);
    digitalWrite(a,LOW);
    digitalWrite(buzzerPin,LOW);
    delay(100);
        
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
  }
  else
  {
    digitalWrite(buzzerPin,HIGH);
    delay(1000);
    digitalWrite(buzzerPin,LOW);
    delay(1000);
  }
}

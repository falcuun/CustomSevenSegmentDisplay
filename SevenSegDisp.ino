#define FIRST 2
#define SECOND 3
#define THIRD 4
#define FOURTH 5
#define FIFTH 6
#define SIXTH 7
#define SEVENTH 8


void setup()
{
  pinMode(FIRST, OUTPUT);
  pinMode(SECOND, OUTPUT);
  pinMode(THIRD, OUTPUT);
  pinMode(FOURTH, OUTPUT);
  pinMode(FIFTH, OUTPUT);
  pinMode(SIXTH, OUTPUT);
  pinMode(SEVENTH, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  counting();
}

void counting()
{
  OFF();
  one();
  delay(1000);
  OFF();
  two();
  delay(1000);
  OFF();
  three();
  delay(1000);
  OFF();
  four();
  delay(1000);
  OFF();
  five();
  delay(1000);
  OFF();
  six();
  delay(1000);
  OFF();
  seven();
  delay(1000);
  OFF();
  eight();
  delay(1000);
  OFF();
  nine();
  delay(1000);
  OFF();
  zero();
  delay(1000);
}

void one()
{
  digitalWrite(SECOND, HIGH);
  digitalWrite(THIRD, HIGH);
}

void two()
{
  digitalWrite(FIRST, HIGH);
  digitalWrite(SIXTH, HIGH);
  digitalWrite(SEVENTH, HIGH);
  digitalWrite(THIRD, HIGH);
  digitalWrite(FOURTH, HIGH);
}

void three()
{
  digitalWrite(FIRST, HIGH);
  digitalWrite(SECOND, HIGH);
  digitalWrite(THIRD, HIGH);
  digitalWrite(FOURTH, HIGH);
  digitalWrite(SEVENTH, HIGH);
}

void four()
{
  digitalWrite(FIFTH, HIGH);
  digitalWrite(SEVENTH, HIGH);
  digitalWrite(THIRD, HIGH);
  digitalWrite(SECOND, HIGH);
}
void five()
{
  digitalWrite(FIRST, HIGH);
  digitalWrite(SECOND, HIGH);
  digitalWrite(SEVENTH, HIGH);
  digitalWrite(FIFTH, HIGH);
  digitalWrite(FOURTH, HIGH);
}
void six()
{
  digitalWrite(FIFTH, HIGH);
  digitalWrite(FOURTH, HIGH);
  digitalWrite(SEVENTH, HIGH);
  digitalWrite(FIRST, HIGH);
  digitalWrite(SECOND, HIGH);
  digitalWrite(SIXTH, HIGH);
}
void seven()
{
  digitalWrite(FOURTH, HIGH);
  digitalWrite(SECOND, HIGH);
  digitalWrite(THIRD, HIGH);
}
void eight()
{
  digitalWrite(FIRST, HIGH);
  digitalWrite(SECOND, HIGH);
  digitalWrite(THIRD, HIGH);
  digitalWrite(FOURTH, HIGH);
  digitalWrite(FIFTH, HIGH);
  digitalWrite(SIXTH, HIGH);
  digitalWrite(SEVENTH, HIGH);
}
void nine()
{
  digitalWrite(FIRST, HIGH);
  digitalWrite(SECOND, HIGH);
  digitalWrite(THIRD, HIGH);
  digitalWrite(FOURTH, HIGH);
  digitalWrite(FIFTH, HIGH);
  digitalWrite(SEVENTH, HIGH);
}

void zero()
{
  digitalWrite(FIRST, HIGH);
  digitalWrite(SECOND, HIGH);
  digitalWrite(THIRD, HIGH);
  digitalWrite(FOURTH, HIGH);
  digitalWrite(FIFTH, HIGH);
  digitalWrite(SIXTH, HIGH);
}

void OFF()
{
  digitalWrite(FIRST, LOW);
  digitalWrite(SECOND, LOW);
  digitalWrite(THIRD, LOW);
  digitalWrite(FOURTH, LOW);
  digitalWrite(FIFTH, LOW);
  digitalWrite(SIXTH, LOW);
  digitalWrite(SEVENTH, LOW);
}

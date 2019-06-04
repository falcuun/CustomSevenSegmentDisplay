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
  // Blinking number 3 test
  digitalWrite(FIRST, LOW);
  digitalWrite(SECOND, LOW);
  digitalWrite(THIRD, LOW);
  digitalWrite(FOURTH, LOW);
  digitalWrite(FIFTH, LOW);
  digitalWrite(SIXTH, LOW);
  digitalWrite(SEVENTH, LOW);
  delay(1000);

  digitalWrite(FIRST, HIGH);
  digitalWrite(SECOND, HIGH);
  digitalWrite(THIRD, HIGH);
  digitalWrite(FOURTH, HIGH);
  digitalWrite(FIFTH, HIGH);
  digitalWrite(SIXTH, HIGH);
  digitalWrite(SEVENTH, HIGH);

  delay(1000);
}

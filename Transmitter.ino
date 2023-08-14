// Transmitter Coder
int button = 4;
char inByte = '1';

void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(button) == 1)
  {
    Serial.write(inByte);
    delay(1000);
  }
  else
  {
    Serial.write('0');
    delay(100);
  }
}
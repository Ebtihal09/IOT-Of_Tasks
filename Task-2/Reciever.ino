// Reciever Coder
int led = 7;
char inByte = '1';

void setup() {
 // put your setup code here, to run once:
 pinMode(led, OUTPUT);
 Serial.begin(9600);
}

void loop() {
 // put your main code here, to run repeatedly:
 if (Serial.available())
 {
   inByte = Serial.read();
   if (inByte == '1')
   {
     digitalWrite(led, 1);
   }
   else
   {
     digitalWrite(led, 0);
   }
 }

}

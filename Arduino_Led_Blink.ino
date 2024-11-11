int led = 13; //set led pin to pin number 13
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT); //set led as output
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(led, HIGH); //turn on led
 delay(1000); // 1 second delay
 digitalWrite(led, LOW); //turn of led
 delay(1000); // 1 second delay
}

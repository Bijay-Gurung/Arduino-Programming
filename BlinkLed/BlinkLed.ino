void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int icount = 0;
  while(icount <6){
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(1000);
    icount = icount+1;
    if (icount == 6){
      digitalWrite(13, LOW);
      delay(5000);
    }
  }
}

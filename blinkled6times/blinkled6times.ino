void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 delay(1000);
 for(int i = 0; i<2; i++){
   for(int j = 0; j<2; j++){
     for(int k = 0; k<2; k++){
       for(int l = 0; l<2; l++){
         digitalWrite(13,i);
         digitalWrite(12,j);
         digitalWrite(11,k);
         digitalWrite(10,l);
         delay(1000);         
       }
     }
   }
 }
}

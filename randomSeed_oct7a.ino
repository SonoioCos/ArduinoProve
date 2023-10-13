
int numRandom;
int lecturaA0;


void setup() {
  // put your setup code here, to run once:
Serial.begin (9600);
lecturaA0=analogRead(A0);
randomSeed(lecturaA0);
}

void loop() {
  // put your main code here, to run repeatedly:
numRandom=random(13);
Serial.println (numRandom);
//Serial.println(lecturaA0);
delay(100);
}

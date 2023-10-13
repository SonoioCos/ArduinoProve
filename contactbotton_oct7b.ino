

int valBoton;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode (2,INPUT);
pinMode (13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
valBoton= digitalRead(2);
Serial.println(valBoton);
delay(250);

digitalWrite(13, valBoton);


}
/*if(valBoton==1){
digitalWrite (13,1);
else {
  digitalWrite (13,0); */

  /*if(valBoton==LOW){
digitalWrite (13,HIGH);
else {
  digitalWrite (13,LOW); */ //al reves se apaga con 0 y se enciende con 1//

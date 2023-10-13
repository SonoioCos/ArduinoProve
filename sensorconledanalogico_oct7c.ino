//variables y constantes globales
const int analogPin = A0;
int valSensor;
//int valBoton;
//const int digitalPin =11;
int valMap;
const int miled=11;




void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(analogPin,INPUT);
pinMode (miled,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
valSensor=analogRead(analogPin);
Serial.println(valSensor);
delay(250);

valMap=map(valSensor,0,1000,0,255); //rango de 0 a mil però los rangos led para ser leidos son de 0 a 255//
analogWrite(miled, valMap);


//valBoton=digitalRead (digitalPin);


  
}

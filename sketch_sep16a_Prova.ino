
const int ledRojo=5; 
int miVariable=1;
float miDecimal=10.5;
String miTexto ="Hola. Pregúntame algo.";
char miletra='a';
bool miBoleana= false; 





void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //inicia la comunicación
  pinMode(13, OUTPUT); //num PIN como queremos que actue, led es output
  pinMode (ledRojo,OUTPUT);
  pinMode (8,OUTPUT);
  pinMode (6,OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH); 
  digitalWrite(ledRojo, HIGH); 
  digitalWrite(8, HIGH); 
  digitalWrite(6, HIGH);
  
  delay(1000);

  digitalWrite(6, LOW);

  delay(100);
  digitalWrite(ledRojo, LOW);
    delay(125);
  digitalWrite(8, LOW);
    delay(150);
  digitalWrite(13, LOW);
  delay(175);

  miVariable=miVariable+1;
  Serial.println(miDecimal);
  delay(1000);

 

}

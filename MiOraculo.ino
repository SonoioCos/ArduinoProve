/////MIS VARIABLES/////


int numRandom;
String miPregunta;
String sbueno= "Spettacolare!";
String smalo= "Malissimo. Mi dispiace.";
const int ledrojo= 9; // Respuesta mala 
const int ledverde= 5; // Respuesta buena 

/* este es otro
comentario
de varias
lineas
*/



/////MI SETUP///////

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode (ledverde, OUTPUT);
pinMode (ledrojo, OUTPUT);
if (Serial) {
  Serial.println ("Hola humano. Hazme una pregunta.");
}

}

///////MI LOOP//////
void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available ()>0) {
  miPregunta = Serial.readStringUntil('\n'); //'\n', '\t', '\r' nuova linea/ tabulador/return
  Serial.print ("Tu pregunta es: ");
  Serial.println (miPregunta);
  delay (1000);
  // Tiramos un dado
  numRandom = random (0,2);

  if (numRandom == 0){
 Serial.println (sbueno);
   analogWrite (ledverde, 255); //conectar luz con la respuesta
  }

  
 if (numRandom == 1){
  Serial.println (smalo);
}
 
}




}

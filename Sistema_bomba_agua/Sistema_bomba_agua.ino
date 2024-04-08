void setup() {
  // put your setup code here, to run once:
  // Establecemos el Pin donde se realizara el encendido y apagado del contactor
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  Serial.println("Inicio de Sistema de Bomba de agua");
}

void loop() {
  // put your main code here, to run repeatedly:
  //Encendemos el motor
  encender_motor();
  //Apagamod el motor
  apagar_motor();
}
//Metodos de funcionamiento del sistema
//Metodo de encendido del motor
void encender_motor(){
  //Encendemos el motor
  digitalWrite(13,HIGH); 
  //Mostramos un mensaje de encendido del motor
  Serial.println("Motor ha sido encendido con exito!!");
  //Establecemos un tiempo de espera
  delay(3600000);
}
//Metodo de apagado del motor
void apagar_motor(){
  //Apagamos el motor
  digitalWrite(13,LOW);
  //Mostramos un mensaje de apagado del motor
  Serial.println("Motor ha sido apagado con exito!!");
  //Establecemos el tiempo de espera
  delay(82800000); 
}
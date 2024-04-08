//Variables globales 

//Establecemos la constante para el uso de un pin para bomba de agua
const int bomba_de_agua = 14;

//Establecemos las constante de tiempo 
//Tiempo de encendido
const int tiempo_encendido = 3600000;
//Tiempo de apagado
const int tiempo_apagado = 82800000;

void setup() {
  // put your setup code here, to run once:
  // Establecemos el Pin donde se realizara el encendido y apagado del contactor
  pinMode(bomba_de_agua,OUTPUT);
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
  digitalWrite(bomba_de_agua,HIGH); 
  //Mostramos un mensaje de encendido del motor
  Serial.println("Motor ha sido encendido con exito!!");
  //Establecemos un tiempo de espera
  delay(tiempo_encendido);
}
//Metodo de apagado del motor
void apagar_motor(){
  //Apagamos el motor
  digitalWrite(bomba_de_agua,LOW);
  //Mostramos un mensaje de apagado del motor
  Serial.println("Motor ha sido apagado con exito!!");
  //Establecemos el tiempo de espera
  delay(tiempo_apagado); 
}

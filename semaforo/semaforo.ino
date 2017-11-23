int  rojo = 2; //definimos el valor del pin para el led rojo
int amarillo = 4; //definimos el valor del pin para el led rojo
int verde = 7 ; //definimos el valor del pin para el led rojo

void setup() {
  pinMode(rojo, OUTPUT); // declaramos el pin rojo como salida
  pinMode(amarillo, OUTPUT); // declaramos el pin amarillo como salida
  pinMode(verde, OUTPUT); // declaramos el pin verde como salida

}

void loop() {
  digitalWrite(verde,HIGH);// encendemos el led verde
  delay(2000); //esperamos 2 segundos
  digitalWrite(verde,LOW);// apagamos el led verde
  delay(2000); //esperamos 2 segundos
  
  digitalWrite(amarillo,HIGH); //encendemos el led amarillo
  delay(2000);                 //esperamos 2 segundos
  digitalWrite(amarillo,LOW);  //apagamos el led amarillo
  delay(500);                  //esperamos medio segundo
 
  digitalWrite(rojo,HIGH); //encendemos el led rojo
  delay(2000);             //esperamos 2 segundos
  digitalWrite(rojo,LOW);  //apagamos el led rojo
  delay(500);              //esperamos medio segundo
  
}

/*
Autor: Daniel García Regueira
Data: 10/11/2026
Resumo da funcionalidade: acender LEDs conectados
nos pins do 7 ao 12 en función dunha variable textual 
de tipo String.
*/

/*

String cor = "Amarelo"; //Declaramos a variable coa cor que queremos

int pinBranco = 7;	//Gardamos os pins de cada LED en variables para facilitar o seu uso
int pinVermello = 8;
int pinAzul = 9;
int pinLaranxa = 10;
int pinAmarelo = 11;
int pinVerde = 12;

void setup() 
{
  pinMode(pinBranco, OUTPUT); //Asignase o pin do LED branco como saída
  pinMode(pinVermello, OUTPUT); //Asignase o pin do LED vermello como saída
  pinMode(pinAzul, OUTPUT); //Asignase o pin do LED azul como saída
  pinMode(pinLaranxa, OUTPUT); //Asignase o pin do LED laranxa como saída
  pinMode(pinAmarelo, OUTPUT); //Asignase o pin do LED amarelo como saída
  pinMode(pinVerde, OUTPUT); //Asignase o pin do LED verde como saída
}

void loop()
{
  if (cor == "Branco"){	//En cada if, compróbase se hai unha cor válida
    digitalWrite(pinBranco, HIGH);	//En caso de haber unha cor válida, acende e apaga o LED
    delay(500);
    digitalWrite(pinBranco, LOW);
    delay(500);
  }
  else if (cor == "Vermello"){	//Co else if podemos comprobar varias cores distintas
    digitalWrite(pinVermello, HIGH);
    delay(500);
    digitalWrite(pinVermello, LOW);
    delay(500);
  }
  else if (cor == "Azul"){
    digitalWrite(pinAzul, HIGH);
    delay(500);
    digitalWrite(pinAzul, LOW);
    delay(500);
  }
  else if (cor == "Laranxa"){
    digitalWrite(pinLaranxa, HIGH);
    delay(500);
    digitalWrite(pinLaranxa, LOW);
    delay(500);
  }
  else if (cor == "Amarelo"){
    digitalWrite(pinAmarelo, HIGH);
    delay(500);
    digitalWrite(pinAmarelo, LOW);
    delay(500);
  }
  else if (cor == "Verde"){
    digitalWrite(pinVerde, HIGH);
    delay(500);
    digitalWrite(pinVerde, LOW);
    delay(500);
  }
}
*/

String cor = "";	//Declaramos a variable coa cor que queremos

int pinBranco = 7;	//Gardamos os pins de cada LED en variables para facilitar o seu uso
int pinVermello = 8;
int pinAzul = 9;
int pinLaranxa = 10;
int pinAmarelo = 11;
int pinVerde = 12;

void setup() 
{
  pinMode(pinBranco, OUTPUT); //Asignase o pin do LED branco como saída
  pinMode(pinVermello, OUTPUT); //Asignase o pin do LED vermello como saída
  pinMode(pinAzul, OUTPUT); //Asignase o pin do LED azul como saída
  pinMode(pinLaranxa, OUTPUT); //Asignase o pin do LED laranxa como saída
  pinMode(pinAmarelo, OUTPUT); //Asignase o pin do LED amarelo como saída
  pinMode(pinVerde, OUTPUT); //Asignase o pin do LED verde como saída
  Serial.begin(9600);	//Comezamos Serial cunha velocidade de 9600
}

void loop()
{
  if (Serial.available()){	//Solo cando Serial esté dispoñible; cando o usuario pulse enter...
  	cor = Serial.readString();	//gárdase a cor introducida na variable
  }
  if (cor == "Branco"){	//En cada if, compróbase se hai unha cor válida
    Serial.println("Cor escollida Branco");	//En caso de haber unha cor válida, acende e apaga o LED
    digitalWrite(pinBranco, HIGH);	//e acende apaga o LED
    delay(500);
    digitalWrite(pinBranco, LOW);
    delay(500);
  }
  else if (cor == "Vermello"){
    Serial.println("Cor escollida: Vermello");
    digitalWrite(pinVermello, HIGH);
    delay(500);
    digitalWrite(pinVermello, LOW);
    delay(500);
  }
  else if (cor == "Azul"){
    Serial.println("Cor escollida: Azul");
    digitalWrite(pinAzul, HIGH);
    delay(500);
    digitalWrite(pinAzul, LOW);
    delay(500);
  }
  else if (cor == "Laranxa"){
    Serial.println("Color escollida: Laranxa");
    digitalWrite(pinLaranxa, HIGH);
    delay(500);
    digitalWrite(pinLaranxa, LOW);
    delay(500);
  }
  else if (cor == "Amarelo"){
    Serial.println("Cor escollida: Amarelo");
    digitalWrite(pinAmarelo, HIGH);
    delay(500);
    digitalWrite(pinAmarelo, LOW);
    delay(500);
  }
  else if (cor == "Verde"){
    Serial.println("Cor escollida: Verde");
    digitalWrite(pinVerde, HIGH);
    delay(500);
    digitalWrite(pinVerde, LOW);
    delay(500);
  }
  else {	//En caso de non haber unha cor válida, comunicao polo monitor serie
    Serial.println("Non se escolleu ningunha cor valida");
    delay(500);
  }
}
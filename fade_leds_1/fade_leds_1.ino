
const int led0 = 3;
const int led1 = 4;
const int led2 = 5;
const int led3 = 6;
const int led4 = 7;
const int led5 = 8;
const int led6 = 9;
const int led7 = 10;
int vel = 500; 

void setup() {
  pinMode(led0, OUTPUT);     // definir el pin 3 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(led6, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led7, OUTPUT);     // definir el pin 10 com una sortida

  

}

void loop()
{
analogWrite(led0, 60);
analogWrite(led1, 60);
analogWrite(led2, 60);
analogWrite(led3, 60);
analogWrite(led4, 60);
analogWrite(led5, 60);
analogWrite(led6, 60);
analogWrite(led7, 60);

delay(vel); 

analogWrite(led0, 125);
analogWrite(led1, 125);
analogWrite(led2, 125);
analogWrite(led3, 125);
analogWrite(led4, 125);
analogWrite(led5, 125);
analogWrite(led6, 125);
analogWrite(led7, 125);

delay(vel); 

analogWrite(led0, 255);
analogWrite(led1, 255);
analogWrite(led2, 255);
analogWrite(led3, 255);
analogWrite(led4, 255);
analogWrite(led5, 255);
analogWrite(led6, 255);
analogWrite(led7, 255);

delay(vel); 

analogWrite(led0, 125);
analogWrite(led1, 125);
analogWrite(led2, 125);
analogWrite(led3, 125);
analogWrite(led4, 125);
analogWrite(led5, 125);
analogWrite(led6, 125);
analogWrite(led7, 125);

delay(vel); 

analogWrite(led0, 60);
analogWrite(led1, 60);
analogWrite(led2, 60);
analogWrite(led3, 60);
analogWrite(led4, 60);
analogWrite(led5, 60);
analogWrite(led6, 60);
analogWrite(led7, 60);

delay(vel); 







}

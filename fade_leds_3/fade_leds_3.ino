const int led0 = 3;
const int led1 = 4;
const int led2 = 5;
const int led3 = 6;
const int led4 = 7;
const int led5 = 8;
const int led6 = 9;
const int led7 = 10;
int vel = 500; 
int button = 2 ;

void setup()
{
Serial.begin(9600);
  pinMode(led0, OUTPUT);     // definir el pin 3 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(led6, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led7, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(button, INPUT); 
}

void loop()
{
 int buttonState = digitalRead(button);
 Serial.println(buttonState);
if(buttonState==0)
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
else
{


analogWrite(led0, 0);
analogWrite(led1, 0);
analogWrite(led2, 0);
analogWrite(led3, 0);
analogWrite(led4, 0);
analogWrite(led5, 0);
analogWrite(led6, 0);
analogWrite(led7, 0);

delay(vel); 

analogWrite(led0, 3);
analogWrite(led1, 0);
analogWrite(led2, 0);
analogWrite(led3, 0);
analogWrite(led4, 0);
analogWrite(led5, 0);
analogWrite(led6, 0);
analogWrite(led7, 0);

delay(vel); 

analogWrite(led0, 10);
analogWrite(led1, 3);
analogWrite(led2, 0);
analogWrite(led3, 0);
analogWrite(led4, 0);
analogWrite(led5, 0);
analogWrite(led6, 0);
analogWrite(led7, 0);

delay(vel); 

analogWrite(led0, 25);
analogWrite(led1, 10);
analogWrite(led2, 3);
analogWrite(led3, 0);
analogWrite(led4, 0);
analogWrite(led5, 0);
analogWrite(led6, 0);
analogWrite(led7, 0);

delay(vel); 

analogWrite(led0, 60);
analogWrite(led1, 25);
analogWrite(led2, 10);
analogWrite(led3, 3);
analogWrite(led4, 0);
analogWrite(led5, 0);
analogWrite(led6, 0);
analogWrite(led7, 0);

delay(vel); 

analogWrite(led0, 255);
analogWrite(led1, 60);
analogWrite(led2, 25);
analogWrite(led3, 10);
analogWrite(led4, 3);
analogWrite(led5, 0);
analogWrite(led6, 0);
analogWrite(led7, 0);

delay(vel); 

analogWrite(led0, 255);
analogWrite(led1, 255);
analogWrite(led2, 60);
analogWrite(led3, 25);
analogWrite(led4, 10);
analogWrite(led5, 3);
analogWrite(led6, 0);
analogWrite(led7, 0);

delay(vel); 

analogWrite(led0, 255);
analogWrite(led1, 255);
analogWrite(led2, 255);
analogWrite(led3, 60);
analogWrite(led4, 25);
analogWrite(led5, 10);
analogWrite(led6, 3);
analogWrite(led7, 0);

delay(vel); 

analogWrite(led0, 255);
analogWrite(led1, 255);
analogWrite(led2, 255);
analogWrite(led3, 255);
analogWrite(led4, 60);
analogWrite(led5, 25);
analogWrite(led6, 10);
analogWrite(led7, 3);

delay(vel); 

analogWrite(led0, 255);
analogWrite(led1, 255);
analogWrite(led2, 255);
analogWrite(led3, 255);
analogWrite(led4, 255);
analogWrite(led5, 60);
analogWrite(led6, 25);
analogWrite(led7, 10);

delay(vel); 

analogWrite(led0, 255);
analogWrite(led1, 255);
analogWrite(led2, 255);
analogWrite(led3, 255);
analogWrite(led4, 255);
analogWrite(led5, 255);
analogWrite(led6, 60);
analogWrite(led7, 25);

delay(vel); 

analogWrite(led0, 255);
analogWrite(led1, 255);
analogWrite(led2, 255);
analogWrite(led3, 255);
analogWrite(led4, 255);
analogWrite(led5, 255);
analogWrite(led6, 255);
analogWrite(led7, 60);

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

delay(vel); 
}



}

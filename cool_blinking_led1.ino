int number = 0; 

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  int number = 0; 

}

void loop()
{
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(12, LOW);
  delay(500);
  digitalWrite(11, HIGH);
  delay(500);
  digitalWrite(11, LOW);
  delay(500);
  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  delay(500);
  number = number + 1;
  
  if (number>5){
  	digitalWrite(9, HIGH);
  	delay(250);
  	digitalWrite(9, LOW);
  	delay(250);
    digitalWrite(9, HIGH);
  	delay(250);
  	digitalWrite(9, LOW);
  	delay(250);
    digitalWrite(9, HIGH);
  	delay(250);
  	digitalWrite(9, LOW);
  	delay(500);
  }
    
}
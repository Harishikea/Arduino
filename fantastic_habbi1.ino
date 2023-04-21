int inputPin = 1;
int outputPin = 13;
int outputPinn = 2;
int number = 0;



bool buttonPress = false;

void setup()
{
  pinMode(inputPin, INPUT);
  pinMode(outputPin, OUTPUT);
  pinMode(outputPinn, OUTPUT);

}

void loop()
{
  buttonPress = digitalRead(inputPin);

  if (buttonPress) {
  	digitalWrite(outputPin, HIGH);
  	delay(500);
  	digitalWrite(outputPin, LOW);
  	delay(500);
    digitalWrite(outputPinn, HIGH);
  	delay(500);
  	digitalWrite(outputPinn, LOW);
  	delay(500);
    digitalWrite(outputPin, HIGH);
  	delay(500);
  	digitalWrite(outputPin, LOW);
  	delay(500);
    number = number + 1; 
    if (number > 3){
   		digitalWrite(outputPin, HIGH);
  		delay(250);
  		digitalWrite(outputPin, LOW);
  		delay(250);
    	digitalWrite(outputPinn, HIGH);
  		delay(250);
  		digitalWrite(outputPinn, LOW);
  		delay(250);
    }
  }
  else {
  	digitalWrite(outputPin,LOW);
  }
}
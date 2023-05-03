int redled = 11;
int blue = 10; 
int other_red = 9;
int number = 1000;

void setup() {
  pinMode(redled, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(other_red, OUTPUT);


}
void loop() {
  digitalWrite(redled, HIGH);   
  delay(number);              
  digitalWrite(redled, LOW);   
  delay(number);
  digitalWrite(blue, HIGH);   
  delay(number);              
  digitalWrite(blue, LOW);   
  delay(number);
  digitalWrite(other_red, HIGH);   
  delay(number);              
  digitalWrite(other_red, LOW);   
  delay(number);
  number = number - 150;
  if (number < 100){
    number = 1000;
  }
    
               
}

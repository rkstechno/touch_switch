int const sensor=2;
int const led=13;
void setup() {
  // put your setup code here, to run once:
pinMode(sensor, INPUT);
pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int value=digitalRead(sensor);
if(value==HIGH)
digitalWrite(led,HIGH);
else 
digitalWrite(led,LOW);
}

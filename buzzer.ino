int button=6;
int buzzer= 3;
int state =0;

void setup() 
{
  pinMode(button,INPUT);
  pinMode(buzzer,OUTPUT);

}

void loop() 
{
  state= digitalRead(button);
  if(state==HIGH)
  {
    digitalWrite(buzzer, HIGH);
  }
  else
  {
    digitalWrite(buzzer, LOW);
  }

}

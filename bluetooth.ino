int pin1=12;
int pin2=11;

void setup() 
{
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  if(Serial.available()>0)
  {
    int val=Serial.read()-48;
    if(val==1)
    {
      digitalWrite(pin1, HIGH);
      Serial.println("BULB IS ON");
    }
    if(val==2)
    {
      digitalWrite(pin2, HIGH);
      Serial.println("FAN IS ON");
    }
    if(val==0)
    {
      digitalWrite(pin1, LOW);
      digitalWrite(pin2, LOW);
      Serial.println("DEVICE OFF");
    }
  }   
}

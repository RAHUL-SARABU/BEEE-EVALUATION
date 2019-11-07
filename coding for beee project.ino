const int ledpin1 = 13;
const int ledpin2 = 12;
const int ldrpin = A0;



void setup()
{
  
  Serial.begin(9600);
  pinMode(ledpin1, OUTPUT);
  pinMode(ledpin2, OUTPUT);
   pinMode(ldrpin, OUTPUT);
  
}

void loop()
{
  int ldrstatus = analogRead(ldrpin);
  if (ldrstatus <=300)
  {
  digitalWrite(ledpin1, HIGH);
  Serial.println("LED is ON");
   digitalWrite(ledpin2,LOW);
  }
  else 
  { 
  digitalWrite(ledpin2, HIGH);
    Serial.println("LED IS OFF");
    digitalWrite(ledpin2,LOW);
  }
}
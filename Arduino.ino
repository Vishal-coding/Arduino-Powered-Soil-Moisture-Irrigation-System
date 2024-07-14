int output_pin= 3;
int sensor_pin=A0;
int output_value;
void setup()
{
  Serial.begin(9600);
  pinMode(output_pin,OUTPUT);
  pinMode(sensor_pin,INPUT);
  Serial.println("Reading from the sensor...");
  delay(2000);
}
void loop()
{
  output_value=analogRead(sensor_pin);
  output_value=map(output_value,550,10,0,100);
  Serial.print("Moisture:");
  Serial.print(output_value);
  Serial.println("%");
  if(output_value<45)
  {
    digitalWrite(output_pin,HIGH);
  }
  else
  {
    digitalWrite(output_pin,LOW);
  }
  delay(1000);
}
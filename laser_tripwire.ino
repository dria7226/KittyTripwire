const int sensorPin = 0;
const int motorPin = 9;

// We'll also set up some global variables for the light level:
int lightLevel; 

void setup()
{
  pinMode(motorPin, OUTPUT);    // Set up the LED pin to be an output.
  Serial.begin(9600);
}

void loop()
{
  lightLevel = analogRead(sensorPin);  // reads the voltage on the sensorPin
  Serial.print(lightLevel);
  Serial.print('\n');
  
  if(lightLevel < 400)
  {
    analogWrite(motorPin, 255); // turn the motor on (full speed)
    delay(3000);                // delay for onTime milliseconds
    analogWrite(motorPin, 0);  // turn the motor off
  }
}


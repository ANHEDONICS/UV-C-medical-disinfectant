const int pingPin = D1; // Trigger Pin of Ultrasonic Sensor
const int echoPin = D2; // Echo Pin of Ultrasonic Sens
#define motor1a D5
#define motor1b D6
#define motor2a D7
#define motor2b D8
//const int buzzer = D4; // Echo Pin of Ultrasonic Sensor

void setup() {
  Serial.begin(9600); // Starting Serial Terminal
  pinMode(pingPin,  OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(motor1a,  OUTPUT);
  pinMode(motor1b,  OUTPUT);
  pinMode(motor2a,  OUTPUT);
  pinMode(motor2b,  OUTPUT);

 // pinMode(buzzer, OUTPUT);


}

void loop() {
  long duration, inches, cm;
  pinMode(pingPin, OUTPUT);
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(pingPin, LOW);
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
  inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeters(duration);
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  delay(100);

  if (cm<30){
    stop();   
    delay(3000);
    back();
    delay(1000);
    left();
    delay(2000);
    front();
      
    }
    else{
      front();
  
      }
  
}

long microsecondsToInches(long microseconds) {
  return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) {
  return microseconds / 29 / 2;
}

void stop(){
  digitalWrite(motor1a, LOW);
  digitalWrite(motor1b, LOW);

  digitalWrite(motor2a, LOW);
  digitalWrite(motor2b, LOW);
  }

void front(){
  digitalWrite(motor1a, HIGH);
  digitalWrite(motor1b, LOW);

  digitalWrite(motor2a, HIGH);
  digitalWrite(motor2b, LOW);
  }

  void back(){
  digitalWrite(motor1a, LOW);
  digitalWrite(motor1b, HIGH);

  digitalWrite(motor2a, LOW);
  digitalWrite(motor2b, HIGH);
  }
    void left(){
  digitalWrite(motor1a, LOW);
  digitalWrite(motor1b, HIGH);

  digitalWrite(motor2a, HIGH);
  digitalWrite(motor2b, LOW);
  }
    void right(){
  digitalWrite(motor1a, HIGH);
  digitalWrite(motor1b, LOW);

  digitalWrite(motor2a, LOW);
  digitalWrite(motor2b, HIGH);
  }

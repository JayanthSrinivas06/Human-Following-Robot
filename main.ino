int motor1pin1 = 2;
int motor1pin2 = 3;

int motor2pin1 = 4;
int   motor2pin2 = 5;

// Ultrasonic sensor pins


#define S1Trig 8


#define S2Trig 9


#define S3Trig 12


#define S1Echo 11


#define S2Echo 6


#define S3Echo 13





#define MAX_DISTANCE 40


#define MIN_DISTANCE_BACK 5



#define MAX_SPEED 120


#define MIN_SPEED 75





void setup() {


  pinMode(S1Trig, OUTPUT);


  pinMode(S2Trig, OUTPUT);


  pinMode(S3Trig, OUTPUT); 

  //Set the Echo pins as input pins


  pinMode(S1Echo, INPUT);


  pinMode(S2Echo, INPUT);


  pinMode(S3Echo, INPUT);


  // Initialize the serial communication for debugging


  Serial.begin(9600);







  // put your setup code here, to run once:
   pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1,   OUTPUT);
  pinMode(motor2pin2, OUTPUT);

  //(Optional)
  pinMode(9,   OUTPUT); 
  pinMode(10, OUTPUT);
  //(Optional)
}

void loop() {


  int frontDistance = sensorOne();


  int leftDistance = sensorTwo();


  int rightDistance = sensorThree();


  Serial.print("Front: ");


  Serial.print(frontDistance);


  Serial.print(" cm, Left: ");


  Serial.print(leftDistance);


  Serial.print(" cm, Right: ");


  Serial.print(rightDistance);


  Serial.println(" cm");


  // Find the sensor with the smallest distance


  if (frontDistance < MIN_DISTANCE_BACK) {


    // moveBackward();


    Serial.println("backward");


  } else if (frontDistance < leftDistance && frontDistance < rightDistance && frontDistance < MAX_DISTANCE) {


    moveForward();


    Serial.println("forward");


  }else if (leftDistance < rightDistance && leftDistance < MAX_DISTANCE) {


    turnLeft();


    Serial.println("left");


  } else if (rightDistance < MAX_DISTANCE) {


    turnRight();


    Serial.println("right");   


   } else {


    stop();


    Serial.println("stop");


  }


  delay(100); // Delay for stability and to avoid excessive readings


}


// Function to measure the distance using an ultrasonic sensor


int sensorOne() {


  //pulse output


  digitalWrite(S1Trig, LOW);


  delayMicroseconds(2);


  digitalWrite(S1Trig, HIGH);


  delayMicroseconds(10);


  digitalWrite(S1Trig, LOW);


  long t = pulseIn(S1Echo, HIGH);//Get the pulse


  int cm = t / 29 / 2; //Convert time to the distance


  return cm; // Return the values from the sensor


}


//Get the sensor values


int sensorTwo() {


  //pulse output


  digitalWrite(S2Trig, LOW);


  delayMicroseconds(2);


  digitalWrite(S2Trig, HIGH);


  delayMicroseconds(10);


  digitalWrite(S2Trig, LOW);


  long t = pulseIn(S2Echo, HIGH);//Get the pulse


  int cm = t / 29 / 2; //Convert time to the distance


  return cm; // Return the values from the sensor


}


//Get the sensor values


int sensorThree() {


  //pulse output


  digitalWrite(S3Trig, LOW);


  delayMicroseconds(2);


  digitalWrite(S3Trig, HIGH);


  delayMicroseconds(10);


  digitalWrite(S3Trig, LOW);


  long t = pulseIn(S3Echo, HIGH);//Get the pulse


  int cm = t / 29 / 2; //Convert time to the distance


  return cm; // Return the values from the sensor


}



  void moveForward(){
  digitalWrite(motor1pin1,   HIGH);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, HIGH);}
//RIGHT
void turnRight(){
  digitalWrite(motor1pin1,   HIGH);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);
  }
  void moveBackward(){
  digitalWrite(motor1pin1,   LOW);
  digitalWrite(motor1pin2, HIGH);
  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);}
//LEFT
void turnLeft(){
  digitalWrite(motor1pin1,   LOW);
  digitalWrite(motor1pin2, HIGH);
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, HIGH);



}
void stop(){
  digitalWrite(motor1pin1,   LOW);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, LOW);



}

const int motor1_input1 = 2;
const int motor1_input2 = 3;
const int motor2_input1 = 4;
const int motor2_input2 = 5;

void setup() {
  Serial.begin(9600);  
  // Set all motor pins as OUTPUT
  pinMode(motor1_input1, OUTPUT);
  pinMode(motor1_input2, OUTPUT);
  pinMode(motor2_input1, OUTPUT);
  pinMode(motor2_input2, OUTPUT);

  
  digitalWrite(motor1_input1, HIGH);
  digitalWrite(motor1_input2, HIGH);
  digitalWrite(motor2_input1, HIGH);
  digitalWrite(motor2_input2, HIGH);
}

void loop() {
  // Set motor 1 to run in clockwise direction
  digitalWrite(motor1_input1, LOW);  // motor1_input1 LOW
  digitalWrite(motor1_input2, HIGH); // motor1_input2 HIGH
  
  // Set motor 2 to run in clockwise direction
  digitalWrite(motor2_input1, LOW);  // motor2_input1 LOW
  digitalWrite(motor2_input2, HIGH); // motor2_input2 HIGH
  
  delay(3000);  // Run motors in clockwise direction for 3 seconds
  
  // Now set both motors to run in anticlockwise direction
  digitalWrite(motor1_input1, HIGH); // motor1_input1 HIGH
  digitalWrite(motor1_input2, LOW);  // motor1_input2 LOW
  
  digitalWrite(motor2_input1, HIGH); // motor2_input1 HIGH
  digitalWrite(motor2_input2, LOW);  // motor2_input2 LOW
  
  delay(3000);  // Run motors in anticlockwise direction for 3 seconds
}
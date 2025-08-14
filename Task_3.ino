String command;
int lightPin = 8;
int fanPin = 7;

void setup() {
  Serial.begin(9600);
  pinMode(lightPin, OUTPUT);
  pinMode(fanPin, OUTPUT);
  Serial.println("Enter command: Light On, Light Off, Fan On, Fan Off");
}

void loop() {
  if (Serial.available()) {
    command = Serial.readStringUntil('\n');
    command.trim();

    if (command.equalsIgnoreCase("Light On")) {
      digitalWrite(lightPin, HIGH);
      Serial.println("Light turned ON");
    } 
    else if (command.equalsIgnoreCase("Light Off")) {
      digitalWrite(lightPin, LOW);
      Serial.println("Light turned OFF");
    } 
    else if (command.equalsIgnoreCase("Fan On")) {
      digitalWrite(fanPin, HIGH);
      Serial.println("Fan turned ON");
    } 
    else if (command.equalsIgnoreCase("Fan Off")) {
      digitalWrite(fanPin, LOW);
      Serial.println("Fan turned OFF");
    } 
    else {
      Serial.println("Unknown command.");
    }
  }
}

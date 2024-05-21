
const int buttonPin = 2;
int buttonState = 0;
int lastButtonState = 0;
int pressCount = 0;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  
  if (buttonState == LOW && lastButtonState == HIGH) {
    pressCount++;
    Serial.print("Button pressed! Press count: ");
    Serial.println(pressCount);
  }
  
  lastButtonState = buttonState;
}

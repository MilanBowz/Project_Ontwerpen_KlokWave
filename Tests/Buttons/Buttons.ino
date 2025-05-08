// Pin definitions (PD5, PD6, PD7)
const int button1Pin = 5;  // PD5
const int button2Pin = 6;  // PD6
const int button3Pin = 7;  // PD7

void setup() {
  // Use internal pull-up resistors (external connected via Ground)
  pinMode(button1Pin, INPUT_PULLUP);
  pinMode(button2Pin, INPUT_PULLUP);
  pinMode(button3Pin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // Read button states (LOW = pressed, HIGH = not pressed)
  bool btn1 = digitalRead(button1Pin) == LOW;
  bool btn2 = digitalRead(button2Pin) == LOW;
  bool btn3 = digitalRead(button3Pin) == LOW;

  // Print to Serial Monitor
  Serial.print("BTN1: ");
  Serial.print(btn1);
  Serial.print(" | BTN2: ");
  Serial.print(btn2);
  Serial.print(" | BTN3: ");
  Serial.println(btn3);

  delay(200); // Delay for readability
}

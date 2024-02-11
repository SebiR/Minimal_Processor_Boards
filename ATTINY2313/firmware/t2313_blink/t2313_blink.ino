#define LED_RED 0
#define LED_YEL 1
#define LED_GRN 4

void setup() {

  pinMode(LED_RED, OUTPUT);
  pinMode(LED_YEL, OUTPUT);
  pinMode(LED_GRN, OUTPUT);
}

void loop() {
  digitalWrite(LED_GRN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(LED_GRN, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
}

#define LED_RED 0
#define LED_YEL 1
#define LED_GRN 4

void setup() {

  pinMode(LED_RED, OUTPUT);
  pinMode(LED_YEL, OUTPUT);
  pinMode(LED_GRN, OUTPUT);
}

void loop() {
  digitalWrite(LED_YEL, LOW);
  digitalWrite(LED_RED, LOW);    
  digitalWrite(LED_GRN, HIGH);
  delay(10000);

  digitalWrite(LED_GRN, LOW);
  digitalWrite(LED_YEL, HIGH);
  delay(1500);

  digitalWrite(LED_YEL, LOW);
  digitalWrite(LED_RED, HIGH);
  delay(5000);

  digitalWrite(LED_YEL, HIGH);  
  delay(1500);  
}

#define PIN_LED 7
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while(!Serial){
    ;
  }
  Serial.println("Hello World!");
  count = 0;
  toggle = 1;
  digitalWrite(PIN_LED, 0);
}

void loop() {
  Serial.println(++count);
  digitalWrite(PIN_LED, 1);
  delay(1000);
  for(int i = 0; i<10; i++){
    digitalWrite(PIN_LED, toggle);
    delay(100);
    toggle = toggle_state(toggle);
  }
  digitalWrite(PIN_LED, 0);
  while(1){
    ;
  }
}

int toggle_state(int toggle){
  int answer = (toggle == 0) ? 1 : 0;
  return answer;
  }

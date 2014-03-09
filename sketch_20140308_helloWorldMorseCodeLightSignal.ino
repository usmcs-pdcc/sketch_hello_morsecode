/*
  Hello World with Morse Code
  
  hadrihl hadrihilmi@gmail.com
  pdccteam
  */
  
// assign pin 13
int led = 13;
  
void setup() {
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, LOW);            // by default turn the light off at the beginning
  pause_signal();
  dits(); dits(); dits(); dits();    // H
  pause_signal();
  dits();                            // E
  pause_signal();
  dits(); dahs(); dits(); dits();    // L
  pause_signal(); 
  dits(); dahs(); dits(); dits();    // L
  pause_signal(); 
  dahs(); dahs(); dahs();            // O
  
  pause_signal(); pause_signal();
  
  dits(); dahs(); dahs(); dahs();    // W
  pause_signal(); 
  dahs(); dahs(); dahs();            // O
  pause_signal();
  dits(); dahs(); dits();            // R
  pause_signal();
  dits(); dahs(); dits(); dits();    // L
  pause_signal();
  dahs(); dits(); dits();            // D
}

// pause for 1 second.
void pause_signal() {
  delay(1000);
}

// short signal, dots/dits
void dits() {
  digitalWrite(led, HIGH);
  delay(200);
  digitalWrite(led, LOW);
  delay(200);
}

// long signal, dashes/dahs
void dahs() {
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
}

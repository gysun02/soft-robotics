//Pins that connects to corresponding MOSFETs

const int f2 = 2;  //curl f2
const int f3 = 3;  //curl f3
const int f4 = 4;  //curl f4
const int f5 = 5;  //curl f5

const int thumb_wave = 6;  //wave thumb
const int thumb_curl = 7;  //curl thumb

const int gas_control = 8;  //gas IO

void setup() {
  //define pin IO
  pinMode(gas_control, OUTPUT);

  pinMode(thumb_wave, OUTPUT);
  pinMode(thumb_curl, OUTPUT);

  pinMode(f2, OUTPUT);
  pinMode(f3, OUTPUT);
  pinMode(f4, OUTPUT);
  pinMode(f5, OUTPUT);
}
void loop() {
  //test: inflate f2 for 10s and hold 10s and release
  while (1 == 1){
  digitalWrite(f2, HIGH);
  delay(10000);
  digitalWrite(f2, LOW);
  delay(10000);}
}
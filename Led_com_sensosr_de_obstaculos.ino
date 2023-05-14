const int SensorOb = 2; // o numero do pino do sensor
const int ledPin = 13; // o numero do pino do LED
int SensorState = 0; // variavel para ler o estado do botao
void setup() {
// inicializa o pino do LED como saida:
pinMode(ledPin, OUTPUT);
// inicializa o pino do botao como entrada:
pinMode(SensorOb, INPUT);
}
void loop(){
// faz a leitura do valor do botao:
SensorState = digitalRead(SensorOb);
// verifica se o sensor detectou algum objeto.
// em caso positivo,SensorState e HIGH:
if (SensorState == HIGH) {
// liga o LED:
digitalWrite(ledPin, HIGH);
} else {
// desliga o LED:
digitalWrite(ledPin, LOW);
}
}

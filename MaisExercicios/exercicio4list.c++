// Define o pino da chave tátil
int botao = 2;

void setup() {
  // Define o pino da chave tátil como entrada
  pinMode(botao, INPUT);

  // Inicia a comunicação serial
  Serial.begin(9600);
}

void loop() {
  // Lê o estado da chave tátil (0 ou 1)
  int estadoBotao = digitalRead(botao);

  // Imprime o estado da chave tátil no Serial Monitor
  Serial.println(estadoBotao);
}

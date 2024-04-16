// Define o pino do LED vermelho
int ledVermelho = 9;

// Define o tempo de espera entre cada alteração de brilho (em milissegundos)
int esperaBrilho = 50;

// Valor do brilho do LED vermelho (0-255)
int brilhoLed = 0;

void setup() {
  // Define o pino do LED vermelho como saída
  pinMode(ledVermelho, OUTPUT);
}

void loop() {
  // Loop infinito para alterar progressivamente o brilho do LED vermelho

  // Aumenta gradualmente o brilho até o máximo (255)
  while (brilhoLed < 255) {
    // Define o brilho do LED vermelho
    analogWrite(ledVermelho, brilhoLed);

    // Espera o tempo definido
    delay(esperaBrilho);

    // Incrementa o brilho
    brilhoLed++;
  }

  // Diminui gradualmente o brilho até o mínimo (0)
  while (brilhoLed > 0) {
    // Define o brilho do LED vermelho
    analogWrite(ledVermelho, brilhoLed);

    // Espera o tempo definido
    delay(esperaBrilho);

    // Decrementa o brilho
    brilhoLed--;
  }
}

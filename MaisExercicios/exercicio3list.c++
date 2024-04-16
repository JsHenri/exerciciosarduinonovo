// Define os pinos dos LEDs
int ledVermelho = 9;
int ledVerde = 10;
int ledAmarelo = 11;

void setup() {
  // Define os pinos dos LEDs como saída
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);

  // Inicia a comunicação serial
  Serial.begin(9600);
}

void loop() {
  // Verifica se há dados disponíveis na comunicação serial
  if (Serial.available()) {
    // Lê o caractere enviado
    String comandoAtivacao = Serial.readString();

    // Altera o estado dos LEDs de acordo com o caractere recebido
    if(comandoAtivacao == "R"){
        analogWrite(ledVermelho, 255);
        analogWrite(ledVerde, 0);
        analogWrite(ledAmarelo, 0);
      	return;
    }
    else if(comandoAtivacao == "G"){
        analogWrite(ledVermelho, 0);
        analogWrite(ledVerde, 255);
        analogWrite(ledAmarelo, 0);
      	return;
    }
    else if(comandoAtivacao == "Y"){
        analogWrite(ledVermelho, 0);
        analogWrite(ledVerde, 0);
        analogWrite(ledAmarelo, 255);
      	return;
    }
    else{
        analogWrite(ledVermelho, 0);
        analogWrite(ledVerde, 0);
        analogWrite(ledAmarelo, 0);
      	return;
    }
  }
}

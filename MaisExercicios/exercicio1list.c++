int ledVermelho = 13;

void setup()
{
 pinMode(ledVermelho, OUTPUT); //Define o pino 13(LED) como saída
}
void loop()
{
 digitalWrite(ledVermelho, HIGH); //Liga o LED
 delay(1000); //Aguarda 1 segundo
 digitalWrite(ledVermelho, LOW); //Apaga o LED
 delay(1000); //Aguarda 1 segundo
}
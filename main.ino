int ValorLDR;        // Variável para armazenar o valor lido pelo sensor LDR
int IntensidadeLuz;  // Variável para armazenar a intensidade da luz calculada
int pinoLDR = A0;    // Pino analógico ao qual o sensor LDR está conectado
int ledVerde = 9;    // Pino digital ao qual o LED verde está conectado
int ledVerm = 11;    // Pino digital ao qual o LED vermelho está conectado
int ledAma = 10;     // Pino digital ao qual o LED amarelo está conectado
int buzina = 3;      // Pino digital ao qual a buzina está conectada

void setup(){
  Serial.begin(9600);        // Inicializa a comunicação serial com uma taxa de 9600 bps
  pinMode(pinoLDR, INPUT);    // Configura o pino do sensor LDR como entrada
  pinMode(ledVerm, OUTPUT);   // Configura o pino do LED vermelho como saída
  pinMode(ledAma, OUTPUT);    // Configura o pino do LED amarelo como saída
  pinMode(ledVerde, OUTPUT);  // Configura o pino do LED verde como saída
  pinMode(buzina, OUTPUT);    // Configura o pino da buzina como saída
}

void loop(){
  ValorLDR = analogRead(pinoLDR);                // Lê o valor do sensor LDR
  IntensidadeLuz = map(ValorLDR, 0, 1023, 101, 0); // Mapeia o valor lido para o intervalo de 0 a 100
  Serial.print("Intensidade de Luz = ");         // Imprime um texto indicando a intensidade da luz
  Serial.println(IntensidadeLuz);                // Imprime a intensidade da luz
  delay(300);                                     // Aguarda 300 milissegundos

  if (IntensidadeLuz >= 60) {  // Se a intensidade da luz for maior ou igual a 60:
    digitalWrite(ledVerm, HIGH);    // Acende o LED vermelho
    digitalWrite(ledVerde, LOW);    // Apaga o LED verde
    digitalWrite(ledAma, LOW);      // Apaga o LED amarelo
    tone(buzina, 1000);             // Ativa a buzina com tom de 1000 Hz
    delay(1000);                     // Aguarda 1 segundo
    noTone(buzina);                  // Desativa a buzina
    delay(1000);                     // Aguarda 1 segundo
  } else if (IntensidadeLuz > 30) {   // Se a intensidade da luz for maior que 30:
    digitalWrite(ledAma, HIGH);      // Acende o LED amarelo
    digitalWrite(ledVerde, LOW);     // Apaga o LED verde
    digitalWrite(ledVerm, LOW);      // Apaga o LED vermelho
    tone(buzina, 450);               // Ativa a buzina com tom de 450 Hz
    delay(1000);                     // Aguarda 1 segundo
    noTone(buzina);                  // Desativa a buzina
    delay(1000);                     // Aguarda 1 segundo
  } else{ // Se a intensidade da luz estiver abaixo de 29:
    digitalWrite(ledVerde, HIGH);    // Acende o LED verde
    digitalWrite(ledVerm, LOW);      // Apaga o LED vermelho
    digitalWrite(ledAma, LOW);       // Apaga o LED amarelo
  }
}

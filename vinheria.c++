// Define as portas e as variáveis
int ledG = 13;
int ledY = 8;
int ledR = 2;

int ldr = A0;
int vldr = 0;

int buzzer = 12;


void setup(){ // Define o modo do pin como entrada(INPUT) ou saída(OUTPUT)
  pinMode(ledG, OUTPUT);
  pinMode(ledY, OUTPUT);
  pinMode(ledR, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(ldr, INPUT);
  
  Serial.begin(9600);//Inicialização da Serial
}

void loop(){ 
  vldr = analogRead(ldr);// Lê o valor do sensor ldr e armazena na variável vldr
  Serial.println(vldr);// exibe o valor no monitor Serial
  if(vldr < 600){ // Se a luminosidade estiver abaixo de 600	
    // Condições OK: liga o LED verde
    digitalWrite(ledG, HIGH);
    digitalWrite(ledY, LOW);
    digitalWrite(ledR, LOW);
  }else if(vldr > 900){// Se a luminosidade estiver a cima de 900
    //Condições CRÍTICAS: acende LED vermelho e aciona o buzzer
    digitalWrite(ledG, LOW);
    digitalWrite(ledY, LOW);
    digitalWrite(ledR, HIGH);
  }else{
    //Condições em nível de ALERTA: acende led amarelo
 	digitalWrite(ledG, LOW);
    digitalWrite(ledY, HIGH);
    digitalWrite(ledR, LOW);
    tone(buzzer, 800, 2000);// Toca a buzina por 3 seg
    delay(3000);
  
  }
      
}
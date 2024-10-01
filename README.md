<h1 align="center">CP1 - O Caso da Vinheria Agnello🍷</h1>


## Objetivo
Desenvolver um sistema de monitoramento e alarme a ser instalado no local onde os vinhos serão armazenados que será capaz de capturar as informações de luminosidade do ambiente para o controle de qualidade dos vinhos.
 Serão implementados 3 leds, 1 verde, 1 amarelo e 1 vermelho respectivamente. O led verde estará indicando que os níveis de luminosidade estão dentro do padrão aceitável, o amarelo para quando ele estiver em nível de alerta, nesse momento o buzzer(buzina servindo de alarme) será ativado por 3 segundos, a luz vermelha indicará que existe um problema.


## Estrutura
[imagem]


## Itens necessários 
 - 1 Arduíno UNO
 - 3 Leds(1 vermelho, 1 verde e 1 amarelo)
 - 3 Resistores (220 Ω)
 - 9 Jumpers 
 - 1 LDR
 - 1 Buzzer


## Código
Definimos as portas e as variáveis, em seguida definimos os inputs e outputs e iniciamos a Serial. Foi definido que se a luminosidade estiver abaixo de 600 o led verde ficará ligado demonstrando que esta em níveis adequados, se estiver maior que 900 o led vermelho será ativado indicando um problema sério. Mas se não, o led amarelo acenderá ativando o buzzer(alarme) por 3 segundos.

## Autores
 - Rafaela Heer
 - Julia Hadja
 - Julia Sayuri
 - Gabriela Queiroga
 - Maria Eduarda Ferrés

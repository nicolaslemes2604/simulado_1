1. Manoel convidou seus amigos para uma confraternização. Ao receber a conta ele resolveu desenvolver um programa para calcular o valor que ele e cada um de seus amigos irá pagar pela festa. Para isso ele precisa da sua ajuda. Inicialmente, o programa deverá ler o valor total da conta e a quantidade de amigos do Manoel que participaram da festa. Após, o programa deverá calcular e escrever o valor que o Manoel irá pagar pela conta e o valor pago pelos seus amigos, seguindo as seguintes regras:

Se o valor total da conta ficar abaixo de R$ 300,00, Manoel paga 80% da conta e divide o restante igualmente por seus amigos.
Se o valor ficar entre R$ 300,00 e R$ 600,00, Manoel paga a metade e divide o restante igualmente por seus amigos.
Se o valor ficar acima de R$ 600,00 a conta é dividida igualmente entre Manoel e seus amigos.

Exemplos de Entrada e Saída
Entrada
Saída
200
4
Manoel = R$ 160.00
Amigos = R$ 10.00
400
2
Manoel = R$ 200.00
Amigos = R$ 100.00
800
3
Manoel = R$ 200.00 
Amigos = R$ 200.00
938
5
Manoel = R$ 156.33 
Amigos = R$ 156.33


2. O cálculo de Índice de Massa Corpórea (IMC) serve para avaliar o peso do indivíduo em relação à sua altura e assim indicar se está dentro do peso ideal, acima ou abaixo do peso desejado. O cálculo do IMC é feito usando a seguinte fórmula matemática:

IMC = peso/ (altura * altura) 

Sabendo destas informações, elabore um programa onde o usuário informa o peso e a altura para executar o cálculo de IMC. Com o resultado do IMC o programa deve exibir na tela o resultado considerando as seguintes regras:
Se IMC for menor que 18.5 escrever na tela “Abaixo do peso ideal”;
Se IMC estiver entre 18.5 e 24.9, escrever na tela “Peso ideal”;
Se IMC estiver entre 25 e 30, escrever na tela “Acima do peso ideal”;
Se IMC for maior que 30, escrever na tela “Obesidade”.

Entrada
Saída
60.0 1.68
Seu IMC é: 21.26
Classificação: Peso ideal
100.0 1.80
Seu IMC é: 30.86
Classificação: Obesidade
50.5 1.68
Seu IMC é: 17.89
Classificação: Abaixo do peso ideal

3. Sabemos que ao comparar preços em estabelecimentos podemos economizar muito dinheiro. Pensando nisso, escreva um programa que pede para o usuário informar o preço de um determinado produto em diversos estabelecimentos comerciais. Quando o usuário digitar 0 para um preço, o programa deverá parar de solicitar valores e mostrar na tela:
O maior preço e o menor preço do produto.
A diferença de valor entre o maior e o menor preço do produto.

Exemplos de Entrada e Saída
Entrada
Saída
41 45 41 52 38 39 43 42 0

Maior preço: R$ 52.00
Menor preço: R$ 38.00
Diferença: R$ 14.00	
125 131 134 129 122 114 108 131 130 128 125 0

Maior preço: R$ 134.00
Menor preço: R$ 108.00
Diferença: R$ 26.00
25 30 45 22 33 28 0


Maior preço: R$ 45.00
Menor preço: R$ 22.00
Diferença: R$ 23.00

4. Anualmente, o IFSul Câmpus Charqueadas realiza a rústica de aniversário. Nesse evento, a equipe organizadora contabiliza o tempo que cada competidor levou para completar o percurso de 4 Km. Como forma de ajudar os organizadores, precisamos criar um programa escrito em Linguagem C que, inicialmente, solicita o número de competidores. Após, o programa solicita a idade, o gênero (‘f’ para feminino e ‘m’ para masculino) e o tempo que levou para completar o percurso (os minutos e os segundos separadamente) de cada competidor. Ao final, o programa deve imprimir na tela a idade e o tempo do competidor do gênero masculino que teve o pior tempo, bem como idade e o tempo da competidora do gênero feminino que teve o melhor tempo. AJUDA: utilizando a primeira linha de dados de competidor, no primeiro exemplo entrada, temos o seguinte:

23 ‘m’ 14 37

O 23 indica que o competidor tem 23 anos. O caractere ‘m’ indica que o competidor é do gênero masculino. O número 14 e 37 indicam, respectivamente, que o competidor completou a prova em 14 minutos e 37 segundos.

Exemplos de Entrada e Saída
Entrada
Saída
8
23 ‘m’ 14 37
41 ‘f’ 21 05
19 ‘f’ 13 29
18 ‘m’ 12 52
22 ‘f’ 14 12
45 ‘m’ 18 15
28 ‘f’ 12 57
39 ‘m’ 20 27
Masculino
Pior tempo: 20:27 - Idade: 39 anos
Feminino
Melhor tempo: 12:57 - Idade: 28 anos
4
17 ‘m’ 12 31
28 ‘f’ 21 05
31 ‘f’ 13 29
22 ‘m’ 11 52
Masculino
Pior tempo: 12:31 - Idade: 17 anos
Feminino
Melhor tempo: 13:29 - Idade: 31 anos





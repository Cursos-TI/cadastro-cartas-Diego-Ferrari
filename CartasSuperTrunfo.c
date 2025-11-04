#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado, estado2;
  char codigodacarta[10],codigodacarta2[10];
  char cidade[50], cidade2[50];
  int populacao,populacao2;
  float area,area2;
  float pib, pib2;
  int pontosturisticos, pontosturisticos2;
  float densidadepop, densidadepop2;
  float pibpercapita, pibpercapita2;

  
  //Carta 01

// Área para entrada de dados

    printf("Carta 01 \n");

    printf("Digite o estado da cidade[A a H]: ");
    scanf(" %c", &estado);

    printf("Digite o código da carta[Estado + (01 a 04)Ex: A02]: ");
    scanf(" %s", codigodacarta);
    
    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade);

    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf(" %f", &area);

    printf("Digite o PIB da cidade (em bilhões R$): ");
    scanf(" %f", &pib);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf(" %d", &pontosturisticos);

    // Calcular a Densidade Populacional e PIB percapita depois do input dos dados
    densidadepop =  populacao / area;
    pibpercapita = pib / populacao;

  // Área para exibição dos dados da cidade

    printf("\n--- Carta da Cidade ---\n");

    printf("Estado: %c\n", estado);

    printf("Código da Carta: %s\n", codigodacarta);

    printf("Cidade: %s\n", cidade);

    printf("População: %d habitantes\n", populacao);

    
    printf("Área: %.2f km²\n", area);

    printf("PIB: R$ %.2f bilhões\n", pib);
    
    printf("Pontos Turísticos: %d\n", pontosturisticos);

    printf("Densidade Populacional: %.2f \n", densidadepop);

    printf("PIB per capita: %.2f \n", pibpercapita );


    // Carta 02

// Área para entrada de dados


    printf("Carta 02\n");

    printf("Digite o estado da cidade[A a H]: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta[Estado + (01 a 04)Ex: A02]: ");
    scanf(" %s", codigodacarta2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade2);

    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade (em bilhões R$): ");
    scanf(" %f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf(" %d", &pontosturisticos2);

    // Calcular a Densidade Populacional e PIB percapita depois do input dos dados
    densidadepop2 =  populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    // Área para exibição dos dados da cidade

    printf("\n--- Carta da Cidade ---\n");

    printf("Estado: %c\n", estado2);

    printf("Código da Carta: %s\n", codigodacarta2);

    printf("Cidade: %s\n", cidade2);

    printf("População: %d habitantes\n", populacao2);

    
    printf("Área: %.2f km²\n", area2);

    printf("PIB: R$ %.2f bilhões\n", pib2);
    
    printf("Pontos Turísticos: %d\n", pontosturisticos2);

    printf("Densidade Populacional: %.2f \n", densidadepop2);

    printf("PIB per capita: %.2f \n", pibpercapita2);



    // Comparando atributos das cartas

    printf("Vamos aos resultados do Jogo\n \n \n \n");
    printf("TAMBORES TOCANDO \n \n \n \n");

    // População
    if (populacao > populacao2) {
      printf("População: %s ganhou \n", cidade);
    }
    else {
      printf("População:  %s Ganhou \n", cidade2);
    }

      // Área
    if (area > area2) {
      printf("Área: %s ganhou \n", cidade);
    }
    else {
      printf("Área: %s Ganhou \n", cidade2);
    }

      // PIB
    if (pib > pib2) {
      printf("PIB: %s ganhou \n", cidade);
    }
    else {
      printf("PIB: %s Ganhou \n", cidade2);
    }

      // Pontos Turísticos
    if (pontosturisticos > pontosturisticos2) {
      printf("Pontos Turísticos: %s ganhou \n", cidade);
    }
    else {
      printf("Pontos %s Ganhou \n", cidade2);
    }

      // Densidade
    if (densidadepop > densidadepop2) {
      printf("Densidade: %s ganhou \n", cidade2);
    }
    else {
      printf("Densidade: %s Ganhou \n", cidade);
    }

    // PIB Per Capita
    if (pibpercapita > pibpercapita2) {
      printf("PIB Per Capita: %s ganhou \n", cidade);
    }
    else {
      printf("PIB Per Capita: %s Ganhou \n", cidade2);
    }
    
      /* code */
    
    

    

return 0;
} 

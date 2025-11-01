#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado;
  char codigodacarta[10];
  char cidade[50];
  int populacao;
  float area;
  float pib;
  int pontosturisticos;
  float densidadepop;
  float pibpercapita;

  // Área para entrada de dados

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
    

return 0;
} 

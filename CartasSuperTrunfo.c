#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

   // --- Dados da Carta 1 ---
    char estado1;
    char codigo1[4]; // Tamanho suficiente para A01 e o caractere nulo '\0'
    char nome_cidade1[50]; // Tamanho suficiente para o nome da cidade
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // --- Dados da Carta 2 ---
    char estado2;
    char codigo2[4];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

  // Área para entrada de dados

  // --------------------------------------------------------
    // Entrada de dados para a Carta 1
    // --------------------------------------------------------

    printf("--- Cadastro da Carta 1 ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1); // O espaço antes de %c ajuda a ignorar quebras de linha anteriores

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1); // Para strings, não é necessário o '&'

    printf("Nome da Cidade: ");
    // Limpa o buffer de entrada antes de ler a string com espaços
    while (getchar() != '\n'); 
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin); // Permite ler nomes com espaços

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // --------------------------------------------------------
    // Entrada de dados para a Carta 2
    // --------------------------------------------------------

    printf("\n--- Cadastro da Carta 2 ---\n");

    printf("Estado (A-H): ");
    // Limpa o buffer de entrada antes de ler o próximo char
    while (getchar() != '\n'); 
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    // Limpa o buffer de entrada antes de ler a string com espaços
    while (getchar() != '\n'); 
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

  // Área para exibição dos dados da cidade

  // --------------------------------------------------------
    // Exibição dos dados
    // --------------------------------------------------------

    printf("\n============================================\n");
    printf("        Informacoes Cadastradas         \n");
    printf("============================================\n");

    printf("--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s", nome_cidade1); // fgets inclui a quebra de linha
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1); // Formata float para 2 casas decimais
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s", nome_cidade2); // fgets inclui a quebra de linha
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);

    printf("============================================\n");

return 0;
} 

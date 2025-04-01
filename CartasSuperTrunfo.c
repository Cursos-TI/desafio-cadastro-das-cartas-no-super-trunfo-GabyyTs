#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
   
    //VARIÁVEIS
    char estado1, estado2;
    char codigo1 [20];
    char codigo2 [20];
    char nome1 [20];
    char nome2 [20];
    int populacao1, populacao2, pontost1, pontost2;
    float area1, area2, pib1, pib2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //CARTA 1
    printf("Cadastro da carta 1\n");
    printf("Digite a letra inicial de um estado (de 'A' a 'H'): \n");
    scanf(" %c", &estado1);

    printf("Digite a letra inicial do estado escolhido mais um número de 01 a 04 (ex: G04, E02): \n");
    scanf("%s", codigo1);

    printf("Digite o nome de uma cidade localizada no estado escolhido: \n");
    scanf("%s", nome1);

    printf("Digite a área da cidade:\n");
    scanf("%f", &area1);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite o PIB (Produto Interno Bruto) da cidade: \n");
    scanf(" %f", &pib1);

    printf("Digite a quatidade de pontos turísticos existentes na cidade: \n");
    scanf(" %d", &pontost1);

    //CARTA 1
    printf("CARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área (em km²): %f km²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontost1);

    //CARTA 2
    printf("Cadastro da carta 2\n");
    printf("Digite a letra inicial de um estado (de 'A' a 'H'): \n");
    scanf(" %c", &estado2);

    printf("Digite a letra do estado mais um número de 01 a 04 (ex: G04, E02): \n");
    scanf("%s", codigo2);

    printf("Digite o nome de uma cidade localizada no estado escolhido: \n");
    scanf("%s", nome2);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB (Produto Interno Bruto) da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quatidade de pontos turísticos que existentes na cidade: \n");
    scanf("%d", &pontost2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    //CARTA 2
    printf("CARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área (em km²): %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontost2);

    return 0;
}
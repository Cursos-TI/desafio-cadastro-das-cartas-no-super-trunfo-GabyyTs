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
    unsigned long int populacao1, populacao2; //Mudança: a variável era int, agora vai ser unsigned long int
    int pontost1, pontost2;
    float area1, area2, pib1, pib2;
    float dp1, dp2, ppc1, ppc2, a = 1;
    float superpoder1, superpoder2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //CADASTRO DAS CARTAS
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
    scanf("%lu", &populacao1);

    printf("Digite o PIB (Produto Interno Bruto) da cidade: \n");
    scanf(" %f", &pib1);

    printf("Digite a quatidade de pontos turísticos existentes na cidade: \n");
    scanf(" %d", &pontost1);

    //CARTA 2
    printf("\nCadastro da carta 2\n");

    printf("Digite a letra inicial de um estado (de 'A' a 'H'): \n");
    scanf(" %c", &estado2);

    printf("Digite a letra do estado mais um número de 01 a 04 (ex: G04, E02): \n");
    scanf("%s", codigo2);

    printf("Digite o nome de uma cidade localizada no estado escolhido: \n");
    scanf("%s", nome2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%lu", &populacao2);

    printf("Digite o PIB (Produto Interno Bruto) da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quatidade de pontos turísticos que existentes na cidade: \n");
    scanf("%d", &pontost2);

    //CÁLCULOS
    //Cálculos da Carta 1: densidade populacional e PIB per capita
    dp1 = (float) populacao1 / area1;
    ppc1 = (float) pib1 / populacao1;

    //Cálculos da Carta 2: densidade populacional e PIB per capita
    dp2 = (float) populacao2 / area2;
    ppc2 = (float) pib2 / populacao2;

    //Cálculos do Super Poder da Carta 1 (somatória de todos os atributos, sendo o inverso da densidade populacional)
    superpoder1 = (float) populacao1 + area1 + pib1 + pontost1 + ppc1 + (a / dp1);

    //Cálculos do Super Poder da Carta 2 (somatória de todos os atributos, sendo o inverso da densidade populacional)
    superpoder2 = (float) populacao2 + area2 + pib2 + pontost2 + ppc2 + (a / dp2);
    
    //COMPARAÇÃO DAS CARTAS

    //Exibição da carta 1
    //CARTA 1
    printf("\nCARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área (em km²): %f km²\n", area1);
    printf("PIB: %f milhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontost1);
    printf("Densidade populacional: %f hab/km²\n", dp1);
    printf("PIB per capita: %f reais\n", ppc1);
    printf("Super Poder: %f\n", superpoder1);

    //Exibição da carta 2
    //CARTA 2
    printf("\nCARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área (em km²): %f km²\n", area2);
    printf("PIB: %f milhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontost2);
    printf("Densidade populacional: %f hab/km²\n", dp2);
    printf("PIB per capita: %f reais\n", ppc2);
    printf("Super Poder: %f\n", superpoder2);

    return 0;
}
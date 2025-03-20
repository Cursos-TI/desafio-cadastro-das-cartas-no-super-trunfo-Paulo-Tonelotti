#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Inicializacao de variaveis
    char estado1;
    char codigo1[3] = "";
    char nome_cidade1[20] = "";
    int populacao1 = 0;
    float area1 = 0;
    float pib1 = 0;
    int num_pontos_turisticos1 = 0;

    char estado2;
    char codigo2[3] = "";
    char nome_cidade2[20] = "";
    int populacao2 = 0;
    float area2 = 0;
    float pib2 = 0;
    int num_pontos_turisticos2 = 0;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite o estado: ");
    scanf(" %c", &estado1);

    printf("Digite o codigo: ");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade1);

    printf("Digite a populacao total 1: ");
    scanf("%d", &populacao1);

    printf("Digite a area total 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB 1: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos 1: ");
    scanf("%d", &num_pontos_turisticos1);

    //  Calculando densidade populacional e PIB per capita da carta 1
    float densidade_populacional_1 = (float) populacao1 / area1;
    float pib_per_capita_1 = (float) pib1 / populacao1;
    

    printf("Digite o estado: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo: ");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade2);

    printf("Digite a populacao total 2: ");
    scanf("%d", &populacao2);

    printf("Digite a area total 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB 2: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos 2: ");
    scanf("%d", &num_pontos_turisticos2);

    float densidade_populacional_2 = (float) populacao2 / area2;
    float pib_per_capita_2 = (float) pib2 / populacao2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("===========CARTA 1=============\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de pontos turisticos: %d\n", num_pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional_1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita_1);
    printf("===============================\n");

    printf("===========CARTA 2=============\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", num_pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional_2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita_2);
    printf("===============================\n");

    return 0;
}

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
    int populacao1 = 0;
    float area1 = 0;
    float pib1 = 0;
    int num_pontos_turisticos1 = 0;

    int populacao2 = 0;
    float area2 = 0;
    float pib2 = 0;
    int num_pontos_turisticos2 = 0;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite a populacao total 1: ");
    scanf("%d", &populacao1);

    printf("Digite a area total 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB 1: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos 1: ");
    scanf("%d", &num_pontos_turisticos1);
    

    printf("Digite a populacao total 2: ");
    scanf("%d", &populacao2);

    printf("Digite a area total 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB 2: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos 2: ");
    scanf("%d", &num_pontos_turisticos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("===========CARTA 1=============\n");
    printf("Populacao: %d\n", populacao1);
    printf("Area: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", &num_pontos_turisticos1);

    printf("===========CARTA 2=============\n");
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", num_pontos_turisticos2);

    return 0;
}

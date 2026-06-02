#include <stdio.h>

int main()  {
    // Desafio Super Trunfo - Países
    // Tema 1 - Cadastro das cartas	
    // Variáveis
    // Carta 1 

    char estado1;
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    /* Carta 2 */

    char estado2;
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    /* Input informações - Carta 1 */
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta:  ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: "); // [^\n] para ler string com espaços
    scanf(" %[^\n]", cidade1);

    printf("Digite a populacao: ");
    scanf(" %d", &populacao1);

    printf("Digite a area em km²: ");
    scanf(" %f", &area1);

    printf("Digite o PIB: ");
    scanf(" %f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &pontosTuristicos1);

    /* Input informações - Carta 2 */

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a populacao: ");
    scanf(" %d", &populacao2);

    printf("Digite a area em km²: ");
    scanf(" %f", &area2);

    printf("Digite o PIB: ");
    scanf(" %f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &pontosTuristicos2);

   // Exibir as informações das cartas

    printf("\n=== Carta 1 ===\n");

    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n=== Carta 2 ===\n");

    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}

    
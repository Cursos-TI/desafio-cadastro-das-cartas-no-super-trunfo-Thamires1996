#include <stdio.h>

int main() {
    // Variáveis para a primeira carta
    char estado1 ;
    char codigo1[4]; 
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int turisticos1;

    // Variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int turisticos2;

    // Lendo os dados da primeira carta
    printf("=== CARTA 1 ===\n");
    printf("Digite o estado da carta 1 (A-H):\n");
    scanf(" %s", &estado1);
    while(getchar() != '\n'); // Limpa o buffer do teclado

    printf("\nDigite o codigo da carta 1 (ex: A01):\n");
    scanf("%3s", codigo1);
    while(getchar() != '\n');

    printf("\nDigite o nome da cidade 1:\n");
    scanf(" %49[^\n]", cidade1);
    while(getchar() != '\n');

    printf("\nDigite a população da cidade 1:\n");
    scanf("%d", &populacao1);
    while(getchar() != '\n');

    printf("\nDigite a área da cidade 1 em km²:\n");
    scanf("%f", &area1);
    while(getchar() != '\n');

    printf("\nDigite o PIB da cidade 1 em bilhões:\n");
    scanf("%f", &pib1);
    while(getchar() != '\n');

    printf("\nDigite o número de pontos turísticos da cidade 1:\n");
    scanf("%d", &turisticos1);
    while(getchar() != '\n');

    // Lendo os dados da segunda carta
    printf("\n=== CARTA 2 ===\n");
    printf("Digite o estado da carta 2 (A-H):\n");
    scanf(" %s", &estado2);
    while(getchar() != '\n');

    printf("\nDigite o codigo da carta 2 (ex: B02):\n");
    scanf("%3s", codigo2);
    while(getchar() != '\n');

    printf("\nDigite o nome da cidade 2:\n");
    scanf(" %49[^\n]", cidade2);
    while(getchar() != '\n');

    printf("\nDigite a população da cidade 2:\n");
    scanf("%d", &populacao2);
    while(getchar() != '\n');

    printf("\nDigite a área da cidade 2 em km²:\n");
    scanf("%f", &area2);
    while(getchar() != '\n');

    printf("\nDigite o PIB da cidade 2 em bilhões:\n");
    scanf("%f", &pib2);
    while(getchar() != '\n');

    printf("\nDigite o número de pontos turísticos da cidade 2:\n");
    scanf("%d", &turisticos2);
    while(getchar() != '\n');

    // Mostrando os dados da primeira carta
    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", turisticos1);

    // Mostrando os dados da segunda carta
    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", turisticos2);

    printf("\nFim do programa. Pressione Enter para sair...");
    while(getchar() != '\n'); // Espera o usuário pressionar Enter
    return 0;
}

#include <stdio.h>

int main() {
    // Variáveis para a primeira carta
    char estado1;
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
    printf("Digite o estado da carta 1 (A-H): ");
    scanf(" %c", &estado1); // Use %c para ler um único caractere
    printf("\n"); // Adiciona uma nova linha

    printf("Digite o codigo da carta 1 (ex: A01): ");
    scanf("%s", codigo1); // Lê o código da carta
    printf("\n"); // Adiciona uma nova linha

    printf("Digite o nome da cidade 1: ");
    scanf(" %[^\n]", cidade1); // Lê o nome da cidade, incluindo espaços
    printf("\n"); // Adiciona uma nova linha

    printf("Digite o numero da populacao da cidade 1: ");
    scanf("%d", &populacao1); // Lê a população
    printf("\n"); // Adiciona uma nova linha

    printf("Digite a area da cidade 1 em km²: ");
    scanf("%f", &area1); // Lê a área
    printf("\n"); // Adiciona uma nova linha

    printf("Digite o PIB da cidade 1 em bilhões: ");
    scanf("%f", &pib1); // Lê o PIB
    printf("\n"); // Adiciona uma nova linha

    printf("Digite o numero de pontos turisticos da cidade 1: ");
    scanf("%d", &turisticos1); // Lê o número de pontos turísticos
    printf("\n"); // Adiciona uma nova linha

    // Lendo os dados da segunda carta
    printf("\n=== CARTA 2 ===\n");
    printf("Digite o estado da carta 2 (A-H): ");
    scanf(" %c", &estado2); // Use %c para ler um único caractere
    printf("\n"); // Adiciona uma nova linha

    printf("Digite o codigo da carta 2 (ex: B02): ");
    scanf("%s", codigo2); // Lê o código da carta
    printf("\n"); // Adiciona uma nova linha

    printf("Digite o nome da cidade 2: ");
    scanf(" %[^\n]", cidade2); // Lê o nome da cidade, incluindo espaços
    printf("\n"); // Adiciona uma nova linha

    printf("Digite o numero da populacao da cidade 2: ");
    scanf("%d", &populacao2); // Lê a população
    printf("\n"); // Adiciona uma nova linha

    printf("Digite a area da cidade 2 em km²: ");
    scanf("%f", &area2); // Lê a área
    printf("\n"); // Adiciona uma nova linha

    printf("Digite o PIB da cidade 2 em bilhões: ");
    scanf("%f", &pib2); // Lê o PIB
    printf("\n"); // Adiciona uma nova linha

    printf("Digite o numero de pontos turisticos da cidade 2: ");
    scanf("%d", &turisticos2); // Lê o número de pontos turísticos
    printf("\n"); // Adiciona uma nova linha

    // Mostrando os dados da primeira carta
    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turisticos: %d\n", turisticos1);

    // Mostrando os dados da segunda carta
    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turisticos: %d\n", turisticos2);

    return 0; // Indica que o programa terminou com sucesso
}

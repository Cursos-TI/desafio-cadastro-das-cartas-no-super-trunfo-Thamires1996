#include <stdio.h>

int main() {
    // Carta 1 - Amazonas
    char nome_do_estado_1[] = "Amazonas";
    char codigo_da_carta_1[] = "A01";
    char nome_da_cidade_1[] = "Manaus";
    int populacao_1 = 2279686; 
    float area_1 = 11401.00;
    float pib_1 = 457.82;
    int pontos_turisticos_1 = 58;

    // Carta 2 - Pernambuco
    char nome_do_estado_2[] = "Pernambuco";
    char codigo_da_carta_2[] = "B02";
    char nome_da_cidade_2[] = "Recife";
    int populacao_2 = 1587707;
    float area_2 = 218.84;
    float pib_2 = 330.94;
    int pontos_turisticos_2 = 30;

    // Mostrar os dados da primeira carta
    printf("\n--- Primeira Carta ---\n");
    printf("Estado: %s\n", nome_do_estado_1);
    printf("Codigo da Carta: %s\n", codigo_da_carta_1);
    printf("Nome da Cidade: %s\n", nome_da_cidade_1);
    printf("Populacao: %d \n", populacao_1);
    printf("Area: %.2f km²\n", area_1);
    printf("PIB: %.2f Bilhoes\n", pib_1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos_1);

    // Mostrar os dados da segunda carta
    printf("\n--- Segunda Carta ---\n");
    printf("Estado: %s\n", nome_do_estado_2);
    printf("Codigo da Carta: %s\n", codigo_da_carta_2);
    printf("Nome da Cidade: %s\n", nome_da_cidade_2);
    printf("Populacao: %d \n", populacao_2);
    printf("Area: %.2f km²\n", area_2);
    printf("PIB: %.2f Bilhoes\n", pib_2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos_2);

    return 0;
}

#include <stdio.h>  // Biblioteca padrão para entrada/saída

int main() {  // Função principal do programa
    
    // ========= VARIÁVEIS DA CARTA 1 =========
    char estado1[50];            // Armazena o nome completo do estado (ex: "São Paulo")
    char codigo1[4];             // Armazena o código da carta (ex: "A01") 
    char cidade1[50];            // Armazena o nome da cidade
    unsigned long int populacao1; // Armazena a população (número inteiro sem sinal)
    double area1;                // Armazena a área em km² (número decimal)
    double pib1;                 // Armazena o PIB em bilhões (número decimal)
    unsigned long int turisticos1; // Armazena número de pontos turísticos (inteiro sem sinal)

    // ========= VARIÁVEIS DA CARTA 2 =========
    char estado2[50];            // Armazena o nome completo do estado  
    char codigo2[4];             // Armazena o código da carta
    char cidade2[50];            // Armazena o nome da cidade
    unsigned long int populacao2; // Armazena a população
    double area2;                // Armazena a área em km²
    double pib2;                 // Armazena o PIB em bilhões
    unsigned long int turisticos2; // Armazena número de pontos turísticos

    // ========= LEITURA DOS DADOS - CARTA 1 =========
    printf("=== CARTA 1 ===\n");  // Título da seção
    
    // Estado - Lê nome completo com espaços
    printf("Digite o estado da carta 1 (ex: São Paulo):\n");  // Instrução
    scanf(" %49[^\n]", estado1);  // Lê até 49 caracteres (incluindo espaços)
    while(getchar() != '\n');     // Limpa o buffer do teclado
    
    // Código - Lê exatamente 3 caracteres (ex: A01)
    printf("\nDigite o codigo da carta 1 (ex: A01):\n");  // \n pula linha antes
    scanf("%3s", codigo1);        // Lê no máximo 3 caracteres
    while(getchar() != '\n');     // Limpa buffer
    
    // Cidade - Lê nome completo com espaços 
    printf("\nDigite o nome da cidade 1:\n");
    scanf(" %49[^\n]", cidade1);  // Lê até 49 caracteres (incluindo espaços)
    while(getchar() != '\n');
    
    // Demais dados numéricos
    printf("\nDigite a população da cidade 1:\n");
    scanf("%lu", &populacao1);     // Lê número inteiro sem sinal
    while(getchar() != '\n');
    
    printf("\nDigite a área da cidade 1 em km²:\n"); 
    scanf("%lf", &area1);          // Lê número decimal
    while(getchar() != '\n');
    
    printf("\nDigite o PIB da cidade 1 em bilhões:\n");
    scanf("%lf", &pib1);           // Lê número decimal
    while(getchar() != '\n');
    
    printf("\nDigite o número de pontos turísticos da cidade 1:\n");
    scanf("%lu", &turisticos1);    // Lê número inteiro sem sinal
    while(getchar() != '\n');

    // ========= LEITURA DOS DADOS - CARTA 2 =========
    printf("\n=== CARTA 2 ===\n");  // Título da seção
    
    // Mesma lógica da Carta 1 para todos os campos
    printf("Digite o estado da carta 2 (ex: Rio de Janeiro):\n");
    scanf(" %49[^\n]", estado2);  // Lê até 49 caracteres (incluindo espaços)
    while(getchar() != '\n');
    
    printf("\nDigite o codigo da carta 2 (ex: B02):\n");
    scanf("%3s", codigo2);        // Lê no máximo 3 caracteres
    while(getchar() != '\n');
    
    printf("\nDigite o nome da cidade 2:\n");
    scanf(" %49[^\n]", cidade2);  // Lê até 49 caracteres (incluindo espaços)
    while(getchar() != '\n');
    
    printf("\nDigite a população da cidade 2:\n");
    scanf("%lu", &populacao2);     // Lê número inteiro sem sinal
    while(getchar() != '\n');
    
    printf("\nDigite a área da cidade 2 em km²:\n"); 
    scanf("%lf", &area2);          // Lê número decimal
    while(getchar() != '\n');
    
    printf("\nDigite o PIB da cidade 2 em bilhões:\n");
    scanf("%lf", &pib2);           // Lê número decimal
    while(getchar() != '\n');
    
    printf("\nDigite o número de pontos turísticos da cidade 2:\n");
    scanf("%lu", &turisticos2);    // Lê número inteiro sem sinal
    while(getchar() != '\n');

    // ========= EXIBIÇÃO DOS RESULTADOS =========
    
    // Carta 1 - Mostra todos os dados formatados
    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %s\n", estado1);           // %s para string completa
    printf("Código: %s\n", codigo1);          
    printf("Cidade: %s\n", cidade1);          
    printf("População: %lu\n", populacao1);     // %lu para inteiro sem sinal
    printf("Área: %.2lf km²\n", area1);         // %.2lf para 2 casas decimais
    printf("PIB: %.2lf bilhões\n", pib1);       // %.2lf para 2 casas decimais
    printf("Pontos Turísticos: %lu\n", turisticos1); // %lu para inteiro sem sinal
    
    // Carta 2 - Mesmo formato da Carta 1
    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);     // %lu para inteiro sem sinal
    printf("Área: %.2lf km²\n", area2);         // %.2lf para 2 casas decimais
    printf("PIB: %.2lf bilhões\n", pib2);       // %.2lf para 2 casas decimais
    printf("Pontos Turísticos: %lu\n", turisticos2); // %lu para inteiro sem sinal

    // Finalização do programa
    printf("\nFim do programa. Pressione Enter para sair...");
    while(getchar() != '\n');  // Pausa antes de fechar
    return 0;  // Retorna 0 indicando sucesso
}

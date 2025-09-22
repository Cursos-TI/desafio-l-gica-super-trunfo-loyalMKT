#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main(){

    char estado1, estado2, codigo1[10] = "S01", codigo2[10] = "R02", cidade1[20] = "SãoPaulo", cidade2[20] = "RioDeJaneiro"; // Todas as variaveis do tipo char
    unsigned long int habitantes1, habitantes2; // Variaveis do tipo unsigned long int (habitantes)
    int pontosTuristicos1, pontosTuristicos2, escolha; // Todas as variaveis do tipo int
    float area1, area2, pib1, pib2, densidade1, densidade2, perCapta1, perCapta2, superPoder1, superPoder2; // Todas as variaveis do tipo float

    // Usarei cartas pré-cadastradas, como recomendado pelas "Simplificações para o nível intermediário"
    
    //CARTA 1
    estado1 = 'S', habitantes1 = 12300000, pontosTuristicos1 = 50, area1 = 1521.11, pib1 = 699.28;
    perCapta1 = pib1 * 1000000000.0 / (float) habitantes1; // Calculando o PIB per Capita da cidade 1 (o PIB foi multiplicado por 1 bilhão para conversão)
    densidade1 = (float) habitantes1 / area1; // Calculando densidade populacional da cidade 1
    superPoder1 = (float) habitantes1 + (float) pontosTuristicos1 + area1 + (pib1 * 1000000000.0) + perCapta1 - densidade1; // Cálculo do Super-Poder 1, como a densidade deve ser invesa, subtraímos
    
    //CARTA 2
    estado2 = 'R', habitantes2 = 6748000, pontosTuristicos2 = 30, area2 = 1200.25, pib2 = 300.50;
    densidade2 = (float) habitantes2 / area2; // Calculando densidade populacional da cidade 2
    perCapta2 = pib2 * 1000000000.0 / (float) habitantes2; // Calculando o PIB per Capita da cidade 2 (o PIB foi multiplicado por 1 bilhão para conversão)
    superPoder2 = (float) habitantes2 + (float) pontosTuristicos2 + area2 + (pib2 * 1000000000.0) + perCapta2 - densidade2; // Cálculo do Super-Poder 2, como a densidade deve ser invesa, subtraímos

    // Exibição da primeira carta
    printf("\n\n-=-=-=-=- CARTA 1 -=-=-=-=-\n\n"); // Titulo
    printf("Estado: %c\n", estado1); // Estado 
    printf("Código: %s\n", codigo1); // Código 
    printf("Nome da Cidade: %s\n", cidade1); // Nome da cidade 
    printf("População: %lu\n", habitantes1); // População 
    printf("Área: %.2f km²\n", area1); // Área
    printf("PIB: %.2f bilhões de reais\n", pib1); // PIB 
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1); // Pontos turísticos 
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1); // Densidade populacional
    printf("PIB per Capita: %.2f reais\n", perCapta1); // PIB per Capita

    // Exibição da segunda carta
    printf("\n\n-=-=-=-=- CARTA 2 -=-=-=-=-\n\n"); // Titulo
    printf("Estado: %c\n", estado2); // Estado
    printf("Código: %s\n", codigo2); // Código
    printf("Nome da Cidade: %s\n", cidade2); // Nome da cidade
    printf("População: %lu\n", habitantes2); // População
    printf("Área: %.2f km²\n", area2); // Área
    printf("PIB: %.2f bilhões de reais\n", pib2); // PIB
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2); // Pontos turísticos
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2); // Densidade populacional
    printf("PIB per Capita: %.2f reais\n\n\n", perCapta2); // PIB per Capita

    // Menu de atributos
    printf("Escolha o atributo de comparação para saber a carta vencedora!\n"); // Pedindo pro usuário escolher um atributo
    printf("1. População\n"); // Atributo 1 (População)
    printf("2. Área\n"); // Atributo 2 (Área)
    printf("3. PIB\n"); // Atributo 3 (PIB)
    printf("4. Pontos turísticos\n"); // Atributo 4 (Pontos turísticos)
    printf("5. Densidade populacional\n"); // Atributo 5 (Densidade populacional)
    printf("6. PIB per Capita\n"); // Atributo 6 (PIB per Capita)
    scanf("%d", &escolha); // Captar a escolha do usuário

    switch (escolha) // Switch para diferentes escolhas
    {
    case 1: 
        if (habitantes1 > habitantes2){ 
            printf("-=-=-= COMPARAÇÃO =-=-=-\n");
            printf("Atributo usado: População\n");
            printf("População da Carta 1 = %lu\nPopulação da Carta 2 = %lu\n", habitantes1, habitantes2);
            printf("Vencedor: Carta 1\n");
        } else if (habitantes1 < habitantes2) {
            printf("-=-=-= COMPARAÇÃO =-=-=-\n");
            printf("Atributo usado: População\n");
            printf("População da Carta 1 = %lu\nPopulação da Carta 2 = %lu\n", habitantes1, habitantes2);
            printf("Vencedor: Carta 2\n");            
        } else {
            printf("-=-=-= COMPARAÇÃO =-=-=-\n");
            printf("Atributo usado: População\n");
            printf("População da Carta 1 = %lu\nPopulação da Carta 2 = %lu\n", habitantes1, habitantes2);
            printf("Empate!\n");            
        }
        break;
    case 2:
        if (area1 > area2){
            printf("-=-=-= COMPARAÇÃO =-=-=-\n");
            printf("Atributo usado: Área\n");
            printf("Área da Carta 1 = %.2f km²\nÁrea da Carta 2 = %.2f km²\n", area1, area2);
            printf("Vencedor: Carta 1\n");
        } else if (area1 < area2) {
            printf("-=-=-= COMPARAÇÃO =-=-=-\n");
            printf("Atributo usado: Área\n");
            printf("Área da Carta 1 = %.2f km²\nÁrea da Carta 2 = %.2f km²\n", area1, area2);
            printf("Vencedor: Carta 2\n");         
        } else {
            printf("-=-=-= COMPARAÇÃO =-=-=-\n");
            printf("Atributo usado: Área\n");
            printf("Área da Carta 1 = %.2f km²\nÁrea da Carta 2 = %.2f km²\n", area1, area2);
            printf("Empate!\n");            
        }
        break;
    case 3:
        if (pib1 > pib2){
            printf("-=-=-= COMPARAÇÃO =-=-=-\n");
            printf("Atributo usado: PIB\n");
            printf("PIB da Carta 1 = %.2f bilhões de reais\nPIB da Carta 2 = %.2f bilhões de reais\n", pib1, pib2);
            printf("Vencedor: Carta 1\n");
        } else if (pib1 < pib2) {
            printf("-=-=-= COMPARAÇÃO =-=-=-\n");
            printf("Atributo usado: PIB\n");
            printf("PIB da Carta 1 = %.2f bilhões de reais\nPIB da Carta 2 = %.2f bilhões de reais\n", pib1, pib2);
            printf("Vencedor: Carta 2\n");   
        } else {
            printf("-=-=-= COMPARAÇÃO =-=-=-\n");
            printf("Atributo usado: PIB\n");
            printf("PIB da Carta 1 = %.2f bilhões de reais\nPIB da Carta 2 = %.2f bilhões de reais\n", pib1, pib2);
            printf("Empate!\n");          
        }
        break;
    case 4:
        if (pontosTuristicos1 > pontosTuristicos2){
            printf("-=-=-= COMPARAÇÃO =-=-=-\n");
            printf("Atributo usado: Pontos turísticos\n");
            printf("Pontos turísticos da Carta 1 = %d\nPontos turísticos da Carta 2 = %d\n", pontosTuristicos1, pontosTuristicos2);
            printf("Vencedor: Carta 1\n");
        } else if (pontosTuristicos1 < pontosTuristicos2) {
            printf("-=-=-= COMPARAÇÃO =-=-=-\n");
            printf("Atributo usado: Pontos turísticos\n");
            printf("Pontos turísticos da Carta 1 = %d\nPontos turísticos da Carta 2 = %d\n", pontosTuristicos1, pontosTuristicos2);
            printf("Vencedor: Carta 2\n");   
        } else {
            printf("-=-=-= COMPARAÇÃO =-=-=-\n");
            printf("Atributo usado: Pontos turísticos\n");
            printf("Pontos turísticos da Carta 1 = %d\nPontos turísticos da Carta 2 = %d\n", pontosTuristicos1, pontosTuristicos2);
            printf("Empate!\n");          
        }
        break;
    case 5:
        if (densidade1 < densidade2){
            printf("-=-=-= COMPARAÇÃO =-=-=-\n");
            printf("Atributo usado: Densidade populacional\n");
            printf("Densidade populacional da Carta 1 = %.2f hab/km²\nDensidade populacional da Carta 2 = %.2f hab/km²\n", densidade1, densidade2);
            printf("Vencedor: Carta 1\n");
        } else if (densidade1 > densidade2) {
            printf("-=-=-= COMPARAÇÃO =-=-=-\n");
            printf("Atributo usado: Densidade populacional\n");
            printf("Densidade populacional da Carta 1 = %.2f hab/km²\nDensidade populacional da Carta 2 = %.2f hab/km²\n", densidade1, densidade2);
            printf("Vencedor: Carta 2\n");   
        } else {
            printf("-=-=-= COMPARAÇÃO =-=-=-\n");
            printf("Atributo usado: Densidade populacional\n");
            printf("Densidade populacional da Carta 1 = %.2f hab/km²\nDensidade populacional da Carta 2 = %.2f hab/km²\n", densidade1, densidade2);
            printf("Empate!\n");          
        }
        break;
    case 6:
        if (perCapta1 > perCapta2){
            printf("-=-=-= COMPARAÇÃO =-=-=-\n");
            printf("Atributo usado: PIB per Capita\n");
            printf("PIB per Capita da Carta 1 = %.2f reais\nPIB per Capita da Carta 2 = %.2f reais\n", perCapta1, perCapta2);
            printf("Vencedor: Carta 1\n");
        } else if (perCapta1 < perCapta2) {
            printf("-=-=-= COMPARAÇÃO =-=-=-\n");
            printf("Atributo usado: PIB per Capita\n");
            printf("PIB per Capita da Carta 1 = %.2f reais\nPIB per Capita da Carta 2 = %.2f reais\n", perCapta1, perCapta2);
            printf("Vencedor: Carta 2\n");   
        } else {
            printf("-=-=-= COMPARAÇÃO =-=-=-\n");
            printf("Atributo usado: PIB per Capita\n");
            printf("PIB per Capita da Carta 1 = %.2f reais\nPIB per Capita da Carta 2 = %.2f reais\n", perCapta1, perCapta2);
            printf("Empate!\n");          
        }
        break;
    default:
        printf("Opção inválida!");
        break;
    }    
    
    return 0;

}

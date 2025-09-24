#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main(){

    char estado1, estado2, codigo1[10] = "S01", codigo2[10] = "R02", cidade1[20] = "SãoPaulo", cidade2[20] = "RioDeJaneiro"; // Todas as variaveis do tipo char
    unsigned long int habitantes1, habitantes2, resultado; // Variaveis do tipo unsigned long int (habitantes)
    int pontosTuristicos1, pontosTuristicos2, escolha, escolha2; // Todas as variaveis do tipo int
    float area1, area2, pib1, pib2, densidade1, densidade2, perCapta1, perCapta2, superPoder1, superPoder2; // Todas as variaveis do tipo float
    long double pibBi1 = (pib1 * 1000000000.0), pibBi2 = (pib2 * 1000000000.0);

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
    printf("Escolha o primeiro atributo de comparação!\n"); // Pedindo pro usuário escolher o primeiro atributo
    printf("1. População\n"); // Atributo 1 (População)
    printf("2. Área\n"); // Atributo 2 (Área)
    printf("3. PIB\n"); // Atributo 3 (PIB)
    printf("4. Pontos turísticos\n"); // Atributo 4 (Pontos turísticos)
    printf("5. Densidade populacional\n"); // Atributo 5 (Densidade populacional)
    printf("6. PIB per Capita\n"); // Atributo 6 (PIB per Capita)
    scanf("%d", &escolha); // Captar a escolha do usuário

    switch (escolha)
    {
    case 1:
        printf("Escolha o segundo atributo de comparação!\n"); // Pedindo pro usuário escolher o segundo atributo
        printf("1. Área\n"); 
        printf("2. PIB\n"); 
        printf("3. Pontos turísticos\n");
        printf("4. Densidade populacional\n"); 
        printf("5. PIB per Capita\n"); 
        scanf("%d", &escolha2); 
            switch (escolha2)
            {
            case 1:
                resultado = (((float) habitantes1 + area1) > ((float) habitantes2 + area2)) ? 1 : 0;
                if (resultado == 1){
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: População e Área\n");
                    printf("Populações: %lu e %lu\n", habitantes1, habitantes2);
                    printf("Áreas: %.2f e %.2f\n", area1, area2);
                    printf("Pontos da Carta 1: %.2f\n", ((float) habitantes1 + area1));
                    printf("Pontos da Carta 2: %.2f\n", ((float) habitantes2 + area2));
                    printf("### CARTA 1 VENCEU! ###");  
                } else if (((float) habitantes1 + area1) == ((float) habitantes2 + area2)) {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: População e Área\n");
                    printf("Populações: %lu e %lu\n", habitantes1, habitantes2);
                    printf("Áreas: %.2f e %.2f\n", area1, area2);
                    printf("Pontos da Carta 1: %.2f\n", ((float) habitantes1 + area1));
                    printf("Pontos da Carta 2: %.2f\n", ((float) habitantes2 + area2));
                    printf("### EMPATE! ###");  
                } else {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: População e Área\n");
                    printf("Populações: %lu e %lu\n", habitantes1, habitantes2);
                    printf("Áreas: %.2f e %.2f\n", area1, area2);
                    printf("Pontos da Carta 1: %.2f\n", ((float) habitantes1 + area1));
                    printf("Pontos da Carta 2: %.2f\n", ((float) habitantes2 + area2));
                    printf("### CARTA 2 VENCEU! ###");                      
                }
                break;
            case 2:
                resultado = (((float) habitantes1 + pib1) > ((float) habitantes2 + pib2)) ? 1 : 0;
                if (resultado == 1){
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: População e PIB\n");
                    printf("Populações: %lu e %lu\n", habitantes1, habitantes2);
                    printf("PIBs: %.2f e %.2f bilhões\n", pib1, pib2);
                    printf("Pontos da Carta 1: %.2f\n", ((float) habitantes1 + pib1));
                    printf("Pontos da Carta 2: %.2f\n", ((float) habitantes2 + pib2));
                    printf("### CARTA 1 VENCEU! ###");  
                } else if (((float) habitantes1 + pib1) == ((float) habitantes2 + pib2)) {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: População e PIB\n");
                    printf("Populações: %lu e %lu\n", habitantes1, habitantes2);
                    printf("PIBs: %.2f e %.2f bilhões\n", pib1, pib2);
                    printf("Pontos da Carta 1: %.2f\n", ((float) habitantes1 + pib1));
                    printf("Pontos da Carta 2: %.2f\n", ((float) habitantes2 + pib2));
                    printf("### EMPATE! ###");  
                } else {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: População e PIB\n");
                    printf("Populações: %lu e %lu\n", habitantes1, habitantes2);
                    printf("PIBs: %.2f e %.2f bilhões\n", pib1, pib2);
                    printf("Pontos da Carta 1: %.2f\n", ((float) habitantes1 + pib1));
                    printf("Pontos da Carta 2: %.2f\n", ((float) habitantes2 + pib2));
                    printf("### CARTA 2 VENCEU! ###");                      
                }
                break;
            case 3:
                resultado = (((float) habitantes1 + pontosTuristicos1) > ((float) habitantes2 + pontosTuristicos2)) ? 1 : 0;
                if (resultado == 1){
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: População e Pontos Turísticos\n");
                    printf("Populações: %lu e %lu\n", habitantes1, habitantes2);
                    printf("Pontos Turísticos: %d e %d\n", pontosTuristicos1, pontosTuristicos2);
                    printf("Pontos da Carta 1: %.2f\n", ((float) habitantes1 + pontosTuristicos1));
                    printf("Pontos da Carta 2: %.2f\n", ((float) habitantes2 + pontosTuristicos2));
                    printf("### CARTA 1 VENCEU! ###");  
                } else if (((float) habitantes1 + pontosTuristicos1) == ((float) habitantes2 + pontosTuristicos2)) {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: População e Pontos Turísticos\n");
                    printf("Populações: %lu e %lu\n", habitantes1, habitantes2);
                    printf("Pontos Turísticos: %d e %d\n", pontosTuristicos1, pontosTuristicos2);
                    printf("Pontos da Carta 1: %.2f\n", ((float) habitantes1 + pontosTuristicos1));
                    printf("Pontos da Carta 2: %.2f\n", ((float) habitantes2 + pontosTuristicos2));
                    printf("### EMPATE! ###");  
                } else {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: População e Pontos Turísticos\n");
                    printf("Populações: %lu e %lu\n", habitantes1, habitantes2);
                    printf("Pontos Turísticos: %d e %d\n", pontosTuristicos1, pontosTuristicos2);
                    printf("Pontos da Carta 1: %.2f\n", ((float) habitantes1 + pontosTuristicos1));
                    printf("Pontos da Carta 2: %.2f\n", ((float) habitantes2 + pontosTuristicos2));
                    printf("### CARTA 2 VENCEU! ###");                      
                }
                break;
            case 4:
                resultado = (((float) habitantes1 - densidade1) > ((float) habitantes2 - densidade2)) ? 1 : 0;
                if (resultado == 1){
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: População e Densidade Populacional\n");
                    printf("Populações: %lu e %lu\n", habitantes1, habitantes2);
                    printf("Densidades Populacionais: %.2f e %.2f\n", densidade1, densidade2);
                    printf("Pontos da Carta 1: %.2f\n", ((float) habitantes1 - densidade1));
                    printf("Pontos da Carta 2: %.2f\n", ((float) habitantes2 - densidade2));
                    printf("### CARTA 1 VENCEU! ###");  
                } else if (((float) habitantes1 - densidade1) == ((float) habitantes2 + densidade2)) {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: População e Densidade Populacional\n");
                    printf("Populações: %lu e %lu\n", habitantes1, habitantes2);
                    printf("Densidades Populacionais: %.2f e %.2f\n", densidade1, densidade2);
                    printf("Pontos da Carta 1: %.2f\n", ((float) habitantes1 - densidade1));
                    printf("Pontos da Carta 2: %.2f\n", ((float) habitantes2 - densidade2));
                    printf("### EMPATE! ###");  
                } else {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: População e Densidade Populacional\n");
                    printf("Populações: %lu e %lu\n", habitantes1, habitantes2);
                    printf("Densidades Populacionais: %.2f e %.2f\n", densidade1, densidade2);
                    printf("Pontos da Carta 1: %.2f\n", ((float) habitantes1 - densidade1));
                    printf("Pontos da Carta 2: %.2f\n", ((float) habitantes2 - densidade2));
                    printf("### CARTA 2 VENCEU! ###");                      
                }
                break;
            case 5:
                resultado = (((float) habitantes1 + perCapta1) > ((float) habitantes2 + perCapta2)) ? 1 : 0;
                if (resultado == 1){
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: População e PIB per Capita\n");
                    printf("Populações: %lu e %lu\n", habitantes1, habitantes2);
                    printf("PIB's per Capita: %.2f e %.2f reais\n", perCapta1, perCapta2);
                    printf("Pontos da Carta 1: %.2f\n", ((float) habitantes1 + perCapta1));
                    printf("Pontos da Carta 2: %.2f\n", ((float) habitantes2 + perCapta2));
                    printf("### CARTA 1 VENCEU! ###");  
                } else if (((float) habitantes1 + perCapta1) == ((float) habitantes2 + perCapta2)) {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: População e PIB per Capita\n");
                    printf("Populações: %lu e %lu\n", habitantes1, habitantes2);
                    printf("PIB's per Capita: %.2f e %.2f reais\n", perCapta1, perCapta2);
                    printf("Pontos da Carta 1: %.2f\n", ((float) habitantes1 + perCapta1));
                    printf("Pontos da Carta 2: %.2f\n", ((float) habitantes2 + perCapta2));
                    printf("### EMPATE! ###");  
                } else {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: População e PIB per Capita\n");
                    printf("Populações: %lu e %lu\n", habitantes1, habitantes2);
                    printf("PIB's per Capita: %.2f e %.2f reais\n", perCapta1, perCapta2);
                    printf("Pontos da Carta 1: %.2f\n", ((float) habitantes1 + perCapta1));
                    printf("Pontos da Carta 2: %.2f\n", ((float) habitantes2 + perCapta2));
                    printf("### CARTA 2 VENCEU! ###");                      
                }
                break;                            
            default:
                printf("Opção inválida!");
                break;
            }   


        break;
    case 2:
        printf("Escolha o segundo atributo de comparação!\n"); // Pedindo pro usuário escolher o segundo atributo
        printf("1. População\n"); 
        printf("2. PIB\n"); 
        printf("3. Pontos turísticos\n"); 
        printf("4. Densidade populacional\n"); 
        printf("5. PIB per Capita\n"); 
        scanf("%d", &escolha); 
            switch (escolha)
            {
            case 1:
                resultado = (((float) habitantes1 + area1) > ((float) habitantes2 + area2)) ? 1 : 0;
                if (resultado == 1){
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: População e Área\n");
                    printf("Populações: %lu e %lu\n", habitantes1, habitantes2);
                    printf("Áreas: %.2f e %.2f\n", area1, area2);
                    printf("Pontos da Carta 1: %.2f\n", ((float) habitantes1 + area1));
                    printf("Pontos da Carta 2: %.2f\n", ((float) habitantes2 + area2));
                    printf("### CARTA 1 VENCEU! ###");  
                } else if (((float) habitantes1 + area1) == ((float) habitantes2 + area2)) {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: População e Área\n");
                    printf("Populações: %lu e %lu\n", habitantes1, habitantes2);
                    printf("Áreas: %.2f e %.2f\n", area1, area2);
                    printf("Pontos da Carta 1: %.2f\n", ((float) habitantes1 + area1));
                    printf("Pontos da Carta 2: %.2f\n", ((float) habitantes2 + area2));
                    printf("### EMPATE! ###");  
                } else {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: População e Área\n");
                    printf("Populações: %lu e %lu\n", habitantes1, habitantes2);
                    printf("Áreas: %.2f e %.2f\n", area1, area2);
                    printf("Pontos da Carta 1: %.2f\n", ((float) habitantes1 + area1));
                    printf("Pontos da Carta 2: %.2f\n", ((float) habitantes2 + area2));
                    printf("### CARTA 2 VENCEU! ###");                      
                }
                break;
            case 2:
                resultado = ((pib1 + area1) > (pib2 + area2)) ? 1 : 0;
                if (resultado == 1){
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Área e PIB\n");
                    printf("Áreas: %.2f e %.2f\n", area1, area2);
                    printf("PIB's: %.2f e %.2f\n", pib1, pib2);
                    printf("Pontos da Carta 1: %.2f\n", (pib1 + area1));
                    printf("Pontos da Carta 2: %.2f\n", (pib2 + area2));
                    printf("### CARTA 1 VENCEU! ###");  
                } else if ((pib1 + area1) == (pib2 + area2)) {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Área e PIB\n");
                    printf("Áreas: %.2f e %.2f\n", area1, area2);
                    printf("PIB's: %.2f e %.2f\n", pib1, pib2);
                    printf("Pontos da Carta 1: %.2f\n", (pib1 + area1));
                    printf("Pontos da Carta 2: %.2f\n", (pib1 + area1));
                    printf("### EMPATE! ###");  
                } else {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Área e PIB\n");
                    printf("Áreas: %.2f e %.2f\n", area1, area2);
                    printf("PIB's: %.2f e %.2f\n", pib1, pib2);
                    printf("Pontos da Carta 1: %.2f\n", (pib1 + area1));
                    printf("Pontos da Carta 2: %.2f\n", (pib1 + area1));
                    printf("### CARTA 2 VENCEU! ###");                      
                }
                break;
            case 3:
                resultado = ((area1 + pontosTuristicos1) > (area2 + pontosTuristicos2)) ? 1 : 0;
                if (resultado == 1){
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Área e Pontos Turísticos\n");
                    printf("Áreas: %.2f e %.2f\n", area1, area2);
                    printf("Pontos Turísticos: %d e %d\n", pontosTuristicos1, pontosTuristicos2);
                    printf("Pontos da Carta 1: %.2f\n", (pontosTuristicos1 + area1));
                    printf("Pontos da Carta 2: %.2f\n", (pontosTuristicos2 + area2));
                    printf("### CARTA 1 VENCEU! ###");  
                } else if ((pontosTuristicos1 + area1) == (pontosTuristicos2 + area2)) {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Área e Pontos Turísticos\n");
                    printf("Áreas: %.2f e %.2f\n", area1, area2);
                    printf("Pontos Turísticos: %d e %d\n", pontosTuristicos1, pontosTuristicos2);
                    printf("Pontos da Carta 1: %.2f\n", (pontosTuristicos1 + area1));
                    printf("Pontos da Carta 2: %.2f\n", (pontosTuristicos2 + area2));
                    printf("### EMPATE! ###");  
                } else {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Área e Pontos Turísticos\n");
                    printf("Áreas: %.2f e %.2f\n", area1, area2);
                    printf("Pontos Turísticos: %d e %d\n", pontosTuristicos1, pontosTuristicos2);
                    printf("Pontos da Carta 1: %.2f\n", (pontosTuristicos1 + area1));
                    printf("Pontos da Carta 2: %.2f\n", (pontosTuristicos2 + area2));
                    printf("### CARTA 2 VENCEU! ###");                      
                }
                break;
            case 4:
                resultado = ((area1 - densidade1) > (area2 - densidade2)) ? 1 : 0;
                if (resultado == 1){
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Área e Densidade Populacional\n");
                    printf("Áreas: %.2f e %.2f\n", area1, area2);
                    printf("Densidades Populacionais: %.2f e %.2f\n", densidade1, densidade2);
                    printf("Pontos da Carta 1: %.2f\n", (area1 - densidade1));
                    printf("Pontos da Carta 2: %.2f\n", (area2 - densidade2));
                    printf("### CARTA 1 VENCEU! ###");  
                } else if ((area1 - densidade1) == (area2 - densidade2)) {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Área e Densidade Populacional\n");
                    printf("Áreas: %.2f e %.2f\n", area1, area2);
                    printf("Densidades Populacionais: %.2f e %.2f\n", densidade1, densidade2);
                    printf("Pontos da Carta 1: %.2f\n", (area1 - densidade1));
                    printf("Pontos da Carta 2: %.2f\n", (area2 - densidade2));
                    printf("### EMPATE! ###");  
                } else {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Área e Densidade Populacional\n");
                    printf("Áreas: %.2f e %.2f\n", area1, area2);
                    printf("Densidades Populacionais: %.2f e %.2f\n", densidade1, densidade2);
                    printf("Pontos da Carta 1: %.2f\n", (area1 - densidade1));
                    printf("Pontos da Carta 2: %.2f\n", (area2 - densidade2));
                    printf("### CARTA 2 VENCEU! ###");                      
                }
                break;
            case 5:
                resultado = ((perCapta1 + area1) > (perCapta2 + area2)) ? 1 : 0;
                if (resultado == 1){
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Área e PIB per Capita\n");
                    printf("Áreas: %.2f e %.2f\n", area1, area2);
                    printf("PIB's per Capita: %.2f e %.2f\n", perCapta1, perCapta2);
                    printf("Pontos da Carta 1: %.2f\n", (perCapta1 + area1));
                    printf("Pontos da Carta 2: %.2f\n", (perCapta2 + area2));
                    printf("### CARTA 1 VENCEU! ###");  
                } else if ((perCapta1 + area1) == (perCapta2 + area2)) {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Área e PIB per Capita\n");
                    printf("Áreas: %.2f e %.2f\n", area1, area2);
                    printf("PIB's per Capita: %.2f e %.2f\n", perCapta1, perCapta2);
                    printf("Pontos da Carta 1: %.2f\n", (perCapta1 + area1));
                    printf("Pontos da Carta 2: %.2f\n", (perCapta2 + area2));
                    printf("### EMPATE! ###");  
                } else {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Área e PIB per Capita\n");
                    printf("Áreas: %.2f e %.2f\n", area1, area2);
                    printf("PIB's per Capita: %.2f e %.2f\n", perCapta1, perCapta2);
                    printf("Pontos da Carta 1: %.2f\n", (perCapta1 + area1));
                    printf("Pontos da Carta 2: %.2f\n", (perCapta2 + area2));
                    printf("### CARTA 2 VENCEU! ###");                      
                }    
                break;                            
            default:
                printf("Opção inválida!");
                break;
            }   



        break;
    case 3:
        printf("Escolha o segundo atributo de comparação!\n"); // Pedindo pro usuário escolher o segundo atributo
        printf("1. População\n"); 
        printf("2. Área\n"); 
        printf("3. Pontos turísticos\n");
        printf("4. Densidade populacional\n"); 
        printf("5. PIB per Capita\n"); 
        scanf("%d", &escolha); 
            switch (escolha)
            {
            case 1:
                resultado = (((float) habitantes1 + pib1) > ((float) habitantes2 + pib2)) ? 1 : 0;
                if (resultado == 1){
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: População e PIB\n");
                    printf("Populações: %lu e %lu\n", habitantes1, habitantes2);
                    printf("PIBs: %.2f e %.2f bilhões\n", pib1, pib2);
                    printf("Pontos da Carta 1: %.2f\n", ((float) habitantes1 + pib1));
                    printf("Pontos da Carta 2: %.2f\n", ((float) habitantes2 + pib2));
                    printf("### CARTA 1 VENCEU! ###");  
                } else if (((float) habitantes1 + pib1) == ((float) habitantes2 + pib2)) {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: População e PIB\n");
                    printf("Populações: %lu e %lu\n", habitantes1, habitantes2);
                    printf("PIBs: %.2f e %.2f bilhões\n", pib1, pib2);
                    printf("Pontos da Carta 1: %.2f\n", ((float) habitantes1 + pib1));
                    printf("Pontos da Carta 2: %.2f\n", ((float) habitantes2 + pib2));
                    printf("### EMPATE! ###");  
                } else {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: População e PIB\n");
                    printf("Populações: %lu e %lu\n", habitantes1, habitantes2);
                    printf("PIBs: %.2f e %.2f bilhões\n", pib1, pib2);
                    printf("Pontos da Carta 1: %.2f\n", ((float) habitantes1 + pib1));
                    printf("Pontos da Carta 2: %.2f\n", ((float) habitantes2 + pib2));
                    printf("### CARTA 2 VENCEU! ###");                      
                }
                break;
            case 2:
                resultado = ((pib1 + area1) > (pib2 + area2)) ? 1 : 0;
                if (resultado == 1){
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Área e PIB\n");
                    printf("Áreas: %.2f e %.2f\n", area1, area2);
                    printf("PIB's: %.2f e %.2f\n", pib1, pib2);
                    printf("Pontos da Carta 1: %.2f\n", (pib1 + area1));
                    printf("Pontos da Carta 2: %.2f\n", (pib2 + area2));
                    printf("### CARTA 1 VENCEU! ###");  
                } else if ((pib1 + area1) == (pib2 + area2)) {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Área e PIB\n");
                    printf("Áreas: %.2f e %.2f\n", area1, area2);
                    printf("PIB's: %.2f e %.2f\n", pib1, pib2);
                    printf("Pontos da Carta 1: %.2f\n", (pib1 + area1));
                    printf("Pontos da Carta 2: %.2f\n", (pib1 + area1));
                    printf("### EMPATE! ###");  
                } else {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Área e PIB\n");
                    printf("Áreas: %.2f e %.2f\n", area1, area2);
                    printf("PIB's: %.2f e %.2f\n", pib1, pib2);
                    printf("Pontos da Carta 1: %.2f\n", (pib1 + area1));
                    printf("Pontos da Carta 2: %.2f\n", (pib1 + area1));
                    printf("### CARTA 2 VENCEU! ###");                      
                }
                break;
            case 3:
                resultado = ((pib1 + pontosTuristicos1) > (pib2 + pontosTuristicos2)) ? 1 : 0;
                if (resultado == 1){
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: PIB e Pontos Turísticos\n");
                    printf("Pontos Turísticos: %d e %d\n", pontosTuristicos1, pontosTuristicos2);
                    printf("PIB's: %.2f e %.2f\n", pib1, pib2);
                    printf("Pontos da Carta 1: %.2f\n", (pib1 + pontosTuristicos1));
                    printf("Pontos da Carta 2: %.2f\n", (pib2 + pontosTuristicos2));
                    printf("### CARTA 1 VENCEU! ###");  
                } else if ((pib1 + pontosTuristicos1) == (pib2 + pontosTuristicos2)) {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: PIB e Pontos Turísticos\n");
                    printf("Pontos Turísticos: %d e %d\n", pontosTuristicos1, pontosTuristicos2);
                    printf("PIB's: %.2f e %.2f\n", pib1, pib2);
                    printf("Pontos da Carta 1: %.2f\n", (pib1 + pontosTuristicos1));
                    printf("Pontos da Carta 2: %.2f\n", (pib2 + pontosTuristicos2));
                    printf("### EMPATE! ###");  
                } else {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: PIB e Pontos Turísticos\n");
                    printf("Pontos Turísticos: %d e %d\n", pontosTuristicos1, pontosTuristicos2);
                    printf("PIB's: %.2f e %.2f\n", pib1, pib2);
                    printf("Pontos da Carta 1: %.2f\n", (pib1 + pontosTuristicos1));
                    printf("Pontos da Carta 2: %.2f\n", (pib2 + pontosTuristicos2));
                    printf("### CARTA 2 VENCEU! ###");                      
                }                
                break;
            case 4:
                resultado = ((pib1 - densidade1) > (pib2 - densidade2)) ? 1 : 0;
                if (resultado == 1){
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: PIB e Densidade Populacional\n");
                    printf("Densidades Populacionais: %.2f e %.2f\n", densidade1, densidade2);
                    printf("PIB's: %.2f e %.2f\n", pib1, pib2);
                    printf("Pontos da Carta 1: %.2f\n", (pib1 - densidade1));
                    printf("Pontos da Carta 2: %.2f\n", (pib2 - densidade2));
                    printf("### CARTA 1 VENCEU! ###");  
                } else if ((pib1 - densidade1) == (pib2 - densidade2)) {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: PIB e Densidade Populacional\n");
                    printf("Densidades Populacionais: %.2f e %.2f\n", densidade1, densidade2);
                    printf("PIB's: %.2f e %.2f\n", pib1, pib2);
                    printf("Pontos da Carta 1: %.2f\n", (pib1 - densidade1));
                    printf("Pontos da Carta 2: %.2f\n", (pib2 - densidade2));
                    printf("### EMPATE! ###");  
                } else {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: PIB e Densidade Populacional\n");
                    printf("Densidades Populacionais: %.2f e %.2f\n", densidade1, densidade2);
                    printf("PIB's: %.2f e %.2f\n", pib1, pib2);
                    printf("Pontos da Carta 1: %.2f\n", (pib1 - densidade1));
                    printf("Pontos da Carta 2: %.2f\n", (pib2 - densidade2));
                    printf("### CARTA 2 VENCEU! ###");                      
                }
                break;
            case 5:
                resultado = ((pib1 + perCapta1) > (pib2 + perCapta2)) ? 1 : 0;
                if (resultado == 1){
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: PIB e PIB per Capita\n");
                    printf("PIB's: %.2f e %.2f\n", pib1, pib2);
                    printf("PIB's per Capita: %.2f e %.2f\n", perCapta1, perCapta2);
                    printf("Pontos da Carta 1: %.2f\n", (pib1 + perCapta1));
                    printf("Pontos da Carta 2: %.2f\n", (pib2 + perCapta2));
                    printf("### CARTA 1 VENCEU! ###");  
                } else if ((pib1 + perCapta1) == (pib2 + perCapta2)) {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: PIB e PIB per Capita\n");
                    printf("PIB's: %.2f e %.2f\n", pib1, pib2);
                    printf("PIB's per Capita: %.2f e %.2f\n", perCapta1, perCapta2);
                    printf("Pontos da Carta 1: %.2f\n", (pib1 + perCapta1));
                    printf("Pontos da Carta 2: %.2f\n", (pib2 + perCapta2));
                    printf("### EMPATE! ###");  
                } else {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: PIB e PIB per Capita\n");
                    printf("PIB's: %.2f e %.2f\n", pib1, pib2);
                    printf("PIB's per Capita: %.2f e %.2f\n", perCapta1, perCapta2);
                    printf("Pontos da Carta 1: %.2f\n", (pib1 + perCapta1));
                    printf("Pontos da Carta 2: %.2f\n", (pib2 + perCapta2));
                    printf("### CARTA 2 VENCEU! ###");                      
                }
                break;                            
            default:
                printf("Opção inválida!");
                break;
            }   



        break;
    case 4:
        printf("Escolha o segundo atributo de comparação!\n"); // Pedindo pro usuário escolher o segundo atributo
        printf("1. População\n"); 
        printf("2. Área\n"); 
        printf("3. PIB\n"); 
        printf("4. Densidade populacional\n"); 
        printf("5. PIB per Capita\n"); 
        scanf("%d", &escolha); 
            switch (escolha)
            {
            case 1:
                resultado = (((float) habitantes1 + pontosTuristicos1) > ((float) habitantes2 + pontosTuristicos2)) ? 1 : 0;
                if (resultado == 1){
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: População e Pontos Turísticos\n");
                    printf("Populações: %lu e %lu\n", habitantes1, habitantes2);
                    printf("Pontos Turísticos: %d e %d\n", pontosTuristicos1, pontosTuristicos2);
                    printf("Pontos da Carta 1: %.2f\n", ((float) habitantes1 + pontosTuristicos1));
                    printf("Pontos da Carta 2: %.2f\n", ((float) habitantes2 + pontosTuristicos2));
                    printf("### CARTA 1 VENCEU! ###");  
                } else if (((float) habitantes1 + pontosTuristicos1) == ((float) habitantes2 + pontosTuristicos2)) {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: População e Pontos Turísticos\n");
                    printf("Populações: %lu e %lu\n", habitantes1, habitantes2);
                    printf("Pontos Turísticos: %d e %d\n", pontosTuristicos1, pontosTuristicos2);
                    printf("Pontos da Carta 1: %.2f\n", ((float) habitantes1 + pontosTuristicos1));
                    printf("Pontos da Carta 2: %.2f\n", ((float) habitantes2 + pontosTuristicos2));
                    printf("### EMPATE! ###");  
                } else {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: População e Pontos Turísticos\n");
                    printf("Populações: %lu e %lu\n", habitantes1, habitantes2);
                    printf("Pontos Turísticos: %d e %d\n", pontosTuristicos1, pontosTuristicos2);
                    printf("Pontos da Carta 1: %.2f\n", ((float) habitantes1 + pontosTuristicos1));
                    printf("Pontos da Carta 2: %.2f\n", ((float) habitantes2 + pontosTuristicos2));
                    printf("### CARTA 2 VENCEU! ###");                      
                }
                break;
            case 2:
                resultado = ((area1 + pontosTuristicos1) > (area2 + pontosTuristicos2)) ? 1 : 0;
                if (resultado == 1){
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Área e Pontos Turísticos\n");
                    printf("Áreas: %.2f e %.2f\n", area1, area2);
                    printf("Pontos Turísticos: %d e %d\n", pontosTuristicos1, pontosTuristicos2);
                    printf("Pontos da Carta 1: %.2f\n", (pontosTuristicos1 + area1));
                    printf("Pontos da Carta 2: %.2f\n", (pontosTuristicos2 + area2));
                    printf("### CARTA 1 VENCEU! ###");  
                } else if ((pontosTuristicos1 + area1) == (pontosTuristicos2 + area2)) {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Área e Pontos Turísticos\n");
                    printf("Áreas: %.2f e %.2f\n", area1, area2);
                    printf("Pontos Turísticos: %d e %d\n", pontosTuristicos1, pontosTuristicos2);
                    printf("Pontos da Carta 1: %.2f\n", (pontosTuristicos1 + area1));
                    printf("Pontos da Carta 2: %.2f\n", (pontosTuristicos2 + area2));
                    printf("### EMPATE! ###");  
                } else {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Área e Pontos Turísticos\n");
                    printf("Áreas: %.2f e %.2f\n", area1, area2);
                    printf("Pontos Turísticos: %d e %d\n", pontosTuristicos1, pontosTuristicos2);
                    printf("Pontos da Carta 1: %.2f\n", (pontosTuristicos1 + area1));
                    printf("Pontos da Carta 2: %.2f\n", (pontosTuristicos2 + area2));
                    printf("### CARTA 2 VENCEU! ###");                      
                }
                break;
            case 3:
                resultado = ((pib1 + pontosTuristicos1) > (pib2 + pontosTuristicos2)) ? 1 : 0;
                if (resultado == 1){
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: PIB e Pontos Turísticos\n");
                    printf("Pontos Turísticos: %d e %d\n", pontosTuristicos1, pontosTuristicos2);
                    printf("PIB's: %.2f e %.2f\n", pib1, pib2);
                    printf("Pontos da Carta 1: %.2f\n", (pib1 + pontosTuristicos1));
                    printf("Pontos da Carta 2: %.2f\n", (pib2 + pontosTuristicos2));
                    printf("### CARTA 1 VENCEU! ###");  
                } else if ((pib1 + pontosTuristicos1) == (pib2 + pontosTuristicos2)) {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: PIB e Pontos Turísticos\n");
                    printf("Pontos Turísticos: %d e %d\n", pontosTuristicos1, pontosTuristicos2);
                    printf("PIB's: %.2f e %.2f\n", pib1, pib2);
                    printf("Pontos da Carta 1: %.2f\n", (pib1 + pontosTuristicos1));
                    printf("Pontos da Carta 2: %.2f\n", (pib2 + pontosTuristicos2));
                    printf("### EMPATE! ###");  
                } else {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: PIB e Pontos Turísticos\n");
                    printf("Pontos Turísticos: %d e %d\n", pontosTuristicos1, pontosTuristicos2);
                    printf("PIB's: %.2f e %.2f\n", pib1, pib2);
                    printf("Pontos da Carta 1: %.2f\n", (pib1 + pontosTuristicos1));
                    printf("Pontos da Carta 2: %.2f\n", (pib2 + pontosTuristicos2));
                    printf("### CARTA 2 VENCEU! ###");                      
                }                
                break;
            case 4:
                resultado = ((pontosTuristicos1 - densidade1) > (pontosTuristicos2 - densidade2)) ? 1 : 0;
                if (resultado == 1){
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Pontos Turísticos e Densidade Populacional\n");
                    printf("Pontos Turísticos: %d e %d\n", pontosTuristicos1, pontosTuristicos2);
                    printf("Densidades Populacionais: %.2f e %.2f\n", densidade1, densidade2);
                    printf("Pontos da Carta 1: %.2f\n", (pontosTuristicos1 - densidade1));
                    printf("Pontos da Carta 2: %.2f\n", (pontosTuristicos2 - densidade2));
                    printf("### CARTA 1 VENCEU! ###");  
                } else if ((pontosTuristicos1 - densidade1) == (pontosTuristicos2 - densidade2)) {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Pontos Turísticos e Densidade Populacional\n");
                    printf("Pontos Turísticos: %d e %d\n", pontosTuristicos1, pontosTuristicos2);
                    printf("Densidades Populacionais: %.2f e %.2f\n", densidade1, densidade2);
                    printf("Pontos da Carta 1: %.2f\n", (pontosTuristicos1 - densidade1));
                    printf("Pontos da Carta 2: %.2f\n", (pontosTuristicos2 - densidade2));
                    printf("### EMPATE! ###");  
                } else {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Pontos Turísticos e Densidade Populacional\n");
                    printf("Pontos Turísticos: %d e %d\n", pontosTuristicos1, pontosTuristicos2);
                    printf("Densidades Populacionais: %.2f e %.2f\n", densidade1, densidade2);
                    printf("Pontos da Carta 1: %.2f\n", (pontosTuristicos1 - densidade1));
                    printf("Pontos da Carta 2: %.2f\n", (pontosTuristicos2 - densidade2));
                    printf("### CARTA 2 VENCEU! ###");                      
                }                
                break;
            case 5:
                resultado = ((perCapta1 + pontosTuristicos1) > (perCapta2 + pontosTuristicos2)) ? 1 : 0;
                if (resultado == 1){
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Pontos Turísticos e PIB per Capita\n");
                    printf("Pontos Turísticos: %d e %d\n", pontosTuristicos1, pontosTuristicos2);
                    printf("PIB's per Capita: %.2f e %.2f\n", perCapta1, perCapta2);
                    printf("Pontos da Carta 1: %.2f\n", (perCapta1 + pontosTuristicos1));
                    printf("Pontos da Carta 2: %.2f\n", (perCapta2 + pontosTuristicos2));
                    printf("### CARTA 1 VENCEU! ###");  
                } else if ((perCapta1 + pontosTuristicos1) == (perCapta2 + pontosTuristicos2)) {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Pontos Turísticos e PIB per Capita\n");
                    printf("Pontos Turísticos: %d e %d\n", pontosTuristicos1, pontosTuristicos2);
                    printf("PIB's per Capita: %.2f e %.2f\n", perCapta1, perCapta2);
                    printf("Pontos da Carta 1: %.2f\n", (perCapta1 + pontosTuristicos1));
                    printf("Pontos da Carta 2: %.2f\n", (perCapta2 + pontosTuristicos2));
                    printf("### EMPATE! ###");  
                } else {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Pontos Turísticos e PIB per Capita\n");
                    printf("Pontos Turísticos: %d e %d\n", pontosTuristicos1, pontosTuristicos2);
                    printf("PIB's per Capita: %.2f e %.2f\n", perCapta1, perCapta2);
                    printf("Pontos da Carta 1: %.2f\n", (perCapta1 + pontosTuristicos1));
                    printf("Pontos da Carta 2: %.2f\n", (perCapta2 + pontosTuristicos2));
                    printf("### CARTA 2 VENCEU! ###");                      
                }                
                break;                            
            default:
                printf("Opção inválida!");
                break;
            }   



        break;
    case 5:
        printf("Escolha o segundo atributo de comparação!\n"); // Pedindo pro usuário escolher o segundo atributo
        printf("1. População\n"); 
        printf("2. Área\n"); 
        printf("3. PIB\n"); 
        printf("4. Pontos turísticos\n"); 
        printf("5. PIB per Capita\n"); 
        scanf("%d", &escolha); 
            switch (escolha)
            {
            case 1:
                resultado = (((float) habitantes1 - densidade1) > ((float) habitantes2 - densidade2)) ? 1 : 0;
                if (resultado == 1){
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: População e Densidade Populacional\n");
                    printf("Populações: %lu e %lu\n", habitantes1, habitantes2);
                    printf("Densidades Populacionais: %.2f e %.2f\n", densidade1, densidade2);
                    printf("Pontos da Carta 1: %.2f\n", ((float) habitantes1 - densidade1));
                    printf("Pontos da Carta 2: %.2f\n", ((float) habitantes2 - densidade2));
                    printf("### CARTA 1 VENCEU! ###");  
                } else if (((float) habitantes1 - densidade1) == ((float) habitantes2 + densidade2)) {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: População e Densidade Populacional\n");
                    printf("Populações: %lu e %lu\n", habitantes1, habitantes2);
                    printf("Densidades Populacionais: %.2f e %.2f\n", densidade1, densidade2);
                    printf("Pontos da Carta 1: %.2f\n", ((float) habitantes1 - densidade1));
                    printf("Pontos da Carta 2: %.2f\n", ((float) habitantes2 - densidade2));
                    printf("### EMPATE! ###");  
                } else {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: População e Densidade Populacional\n");
                    printf("Populações: %lu e %lu\n", habitantes1, habitantes2);
                    printf("Densidades Populacionais: %.2f e %.2f\n", densidade1, densidade2);
                    printf("Pontos da Carta 1: %.2f\n", ((float) habitantes1 - densidade1));
                    printf("Pontos da Carta 2: %.2f\n", ((float) habitantes2 - densidade2));
                    printf("### CARTA 2 VENCEU! ###");                      
                }
                break;
            case 2:
                resultado = ((area1 - densidade1) > (area2 - densidade2)) ? 1 : 0;
                if (resultado == 1){
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Área e Densidade Populacional\n");
                    printf("Áreas: %.2f e %.2f\n", area1, area2);
                    printf("Densidades Populacionais: %.2f e %.2f\n", densidade1, densidade2);
                    printf("Pontos da Carta 1: %.2f\n", (area1 - densidade1));
                    printf("Pontos da Carta 2: %.2f\n", (area2 - densidade2));
                    printf("### CARTA 1 VENCEU! ###");  
                } else if ((area1 - densidade1) == (area2 - densidade2)) {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Área e Densidade Populacional\n");
                    printf("Áreas: %.2f e %.2f\n", area1, area2);
                    printf("Densidades Populacionais: %.2f e %.2f\n", densidade1, densidade2);
                    printf("Pontos da Carta 1: %.2f\n", (area1 - densidade1));
                    printf("Pontos da Carta 2: %.2f\n", (area2 - densidade2));
                    printf("### EMPATE! ###");  
                } else {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Área e Densidade Populacional\n");
                    printf("Áreas: %.2f e %.2f\n", area1, area2);
                    printf("Densidades Populacionais: %.2f e %.2f\n", densidade1, densidade2);
                    printf("Pontos da Carta 1: %.2f\n", (area1 - densidade1));
                    printf("Pontos da Carta 2: %.2f\n", (area2 - densidade2));
                    printf("### CARTA 2 VENCEU! ###");                      
                }
                break;
            case 3:
                resultado = ((pib1 - densidade1) > (pib2 - densidade2)) ? 1 : 0;
                if (resultado == 1){
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: PIB e Densidade Populacional\n");
                    printf("Densidades Populacionais: %.2f e %.2f\n", densidade1, densidade2);
                    printf("PIB's: %.2f e %.2f\n", pib1, pib2);
                    printf("Pontos da Carta 1: %.2f\n", (pib1 - densidade1));
                    printf("Pontos da Carta 2: %.2f\n", (pib2 - densidade2));
                    printf("### CARTA 1 VENCEU! ###");  
                } else if ((pib1 - densidade1) == (pib2 - densidade2)) {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: PIB e Densidade Populacional\n");
                    printf("Densidades Populacionais: %.2f e %.2f\n", densidade1, densidade2);
                    printf("PIB's: %.2f e %.2f\n", pib1, pib2);
                    printf("Pontos da Carta 1: %.2f\n", (pib1 - densidade1));
                    printf("Pontos da Carta 2: %.2f\n", (pib2 - densidade2));
                    printf("### EMPATE! ###");  
                } else {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: PIB e Densidade Populacional\n");
                    printf("Densidades Populacionais: %.2f e %.2f\n", densidade1, densidade2);
                    printf("PIB's: %.2f e %.2f\n", pib1, pib2);
                    printf("Pontos da Carta 1: %.2f\n", (pib1 - densidade1));
                    printf("Pontos da Carta 2: %.2f\n", (pib2 - densidade2));
                    printf("### CARTA 2 VENCEU! ###");                      
                }
                break;
            case 4:
                resultado = ((pontosTuristicos1 - densidade1) > (pontosTuristicos2 - densidade2)) ? 1 : 0;
                if (resultado == 1){
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Pontos Turísticos e Densidade Populacional\n");
                    printf("Pontos Turísticos: %d e %d\n", pontosTuristicos1, pontosTuristicos2);
                    printf("Densidades Populacionais: %.2f e %.2f\n", densidade1, densidade2);
                    printf("Pontos da Carta 1: %.2f\n", (pontosTuristicos1 - densidade1));
                    printf("Pontos da Carta 2: %.2f\n", (pontosTuristicos2 - densidade2));
                    printf("### CARTA 1 VENCEU! ###");  
                } else if ((pontosTuristicos1 - densidade1) == (pontosTuristicos2 - densidade2)) {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Pontos Turísticos e Densidade Populacional\n");
                    printf("Pontos Turísticos: %d e %d\n", pontosTuristicos1, pontosTuristicos2);
                    printf("Densidades Populacionais: %.2f e %.2f\n", densidade1, densidade2);
                    printf("Pontos da Carta 1: %.2f\n", (pontosTuristicos1 - densidade1));
                    printf("Pontos da Carta 2: %.2f\n", (pontosTuristicos2 - densidade2));
                    printf("### EMPATE! ###");  
                } else {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Pontos Turísticos e Densidade Populacional\n");
                    printf("Pontos Turísticos: %d e %d\n", pontosTuristicos1, pontosTuristicos2);
                    printf("Densidades Populacionais: %.2f e %.2f\n", densidade1, densidade2);
                    printf("Pontos da Carta 1: %.2f\n", (pontosTuristicos1 - densidade1));
                    printf("Pontos da Carta 2: %.2f\n", (pontosTuristicos2 - densidade2));
                    printf("### CARTA 2 VENCEU! ###");                      
                }                
                break;
            case 5:
                resultado = ((perCapta1 - densidade1) > (perCapta2 - densidade2)) ? 1 : 0;
                if (resultado == 1){
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: PIB per Capita e Densidade Populacional\n");
                    printf("PIB's per Capita: %.2f e %.2f\n", perCapta1, perCapta2);
                    printf("Densidades Populacionais: %.2f e %.2f\n", densidade1, densidade2);
                    printf("Pontos da Carta 1: %.2f\n", (perCapta1 - densidade1));
                    printf("Pontos da Carta 2: %.2f\n", (perCapta2 - densidade2));
                    printf("### CARTA 1 VENCEU! ###");  
                } else if ((perCapta1 - densidade1) == (perCapta2 - densidade2)) {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: PIB per Capita e Densidade Populacional\n");
                    printf("PIB's per Capita: %.2f e %.2f\n", perCapta1, perCapta2);
                    printf("Densidades Populacionais: %.2f e %.2f\n", densidade1, densidade2);
                    printf("Pontos da Carta 1: %.2f\n", (perCapta1 - densidade1));
                    printf("Pontos da Carta 2: %.2f\n", (perCapta2 - densidade2));
                    printf("### EMPATE! ###");  
                } else {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: PIB per Capita e Densidade Populacional\n");
                    printf("PIB's per Capita: %.2f e %.2f\n", perCapta1, perCapta2);
                    printf("Densidades Populacionais: %.2f e %.2f\n", densidade1, densidade2);
                    printf("Pontos da Carta 1: %.2f\n", (perCapta1 - densidade1));
                    printf("Pontos da Carta 2: %.2f\n", (perCapta2 - densidade2));
                    printf("### CARTA 2 VENCEU! ###");                      
                }                
                break;                            
            default:
                printf("Opção inválida!");
                break;
            }   



        break;
    case 6:
        printf("Escolha o segundo atributo de comparação!\n"); // Pedindo pro usuário escolher o segundo atributo
        printf("1. População\n"); 
        printf("2. Área\n"); 
        printf("3. PIB\n"); 
        printf("4. Pontos turísticos\n"); 
        printf("5. Densidade populacional\n"); 
        scanf("%d", &escolha); 
            switch (escolha)
            {
            case 1:
                resultado = (((float) habitantes1 + perCapta1) > ((float) habitantes2 + perCapta2)) ? 1 : 0;
                if (resultado == 1){
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: População e PIB per Capita\n");
                    printf("Populações: %lu e %lu\n", habitantes1, habitantes2);
                    printf("PIB's per Capita: %.2f e %.2f reais\n", perCapta1, perCapta2);
                    printf("Pontos da Carta 1: %.2f\n", ((float) habitantes1 + perCapta1));
                    printf("Pontos da Carta 2: %.2f\n", ((float) habitantes2 + perCapta2));
                    printf("### CARTA 1 VENCEU! ###");  
                } else if (((float) habitantes1 + perCapta1) == ((float) habitantes2 + perCapta2)) {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: População e PIB per Capita\n");
                    printf("Populações: %lu e %lu\n", habitantes1, habitantes2);
                    printf("PIB's per Capita: %.2f e %.2f reais\n", perCapta1, perCapta2);
                    printf("Pontos da Carta 1: %.2f\n", ((float) habitantes1 + perCapta1));
                    printf("Pontos da Carta 2: %.2f\n", ((float) habitantes2 + perCapta2));
                    printf("### EMPATE! ###");  
                } else {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: População e PIB per Capita\n");
                    printf("Populações: %lu e %lu\n", habitantes1, habitantes2);
                    printf("PIB's per Capita: %.2f e %.2f reais\n", perCapta1, perCapta2);
                    printf("Pontos da Carta 1: %.2f\n", ((float) habitantes1 + perCapta1));
                    printf("Pontos da Carta 2: %.2f\n", ((float) habitantes2 + perCapta2));
                    printf("### CARTA 2 VENCEU! ###");                      
                }
                break;
            case 2:
                resultado = ((perCapta1 + area1) > (perCapta2 + area2)) ? 1 : 0;
                if (resultado == 1){
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Área e PIB per Capita\n");
                    printf("Áreas: %.2f e %.2f\n", area1, area2);
                    printf("PIB's per Capita: %.2f e %.2f\n", perCapta1, perCapta2);
                    printf("Pontos da Carta 1: %.2f\n", (perCapta1 + area1));
                    printf("Pontos da Carta 2: %.2f\n", (perCapta2 + area2));
                    printf("### CARTA 1 VENCEU! ###");  
                } else if ((perCapta1 + area1) == (perCapta2 + area2)) {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Área e PIB per Capita\n");
                    printf("Áreas: %.2f e %.2f\n", area1, area2);
                    printf("PIB's per Capita: %.2f e %.2f\n", perCapta1, perCapta2);
                    printf("Pontos da Carta 1: %.2f\n", (perCapta1 + area1));
                    printf("Pontos da Carta 2: %.2f\n", (perCapta2 + area2));
                    printf("### EMPATE! ###");  
                } else {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Área e PIB per Capita\n");
                    printf("Áreas: %.2f e %.2f\n", area1, area2);
                    printf("PIB's per Capita: %.2f e %.2f\n", perCapta1, perCapta2);
                    printf("Pontos da Carta 1: %.2f\n", (perCapta1 + area1));
                    printf("Pontos da Carta 2: %.2f\n", (perCapta2 + area2));
                    printf("### CARTA 2 VENCEU! ###");                      
                }    
                break;
            case 3:
                resultado = ((pib1 + perCapta1) > (pib2 + perCapta2)) ? 1 : 0;
                if (resultado == 1){
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: PIB e PIB per Capita\n");
                    printf("PIB's: %.2f e %.2f\n", pib1, pib2);
                    printf("PIB's per Capita: %.2f e %.2f\n", perCapta1, perCapta2);
                    printf("Pontos da Carta 1: %.2f\n", (pib1 + perCapta1));
                    printf("Pontos da Carta 2: %.2f\n", (pib2 + perCapta2));
                    printf("### CARTA 1 VENCEU! ###");  
                } else if ((pib1 + perCapta1) == (pib2 + perCapta2)) {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: PIB e PIB per Capita\n");
                    printf("PIB's: %.2f e %.2f\n", pib1, pib2);
                    printf("PIB's per Capita: %.2f e %.2f\n", perCapta1, perCapta2);
                    printf("Pontos da Carta 1: %.2f\n", (pib1 + perCapta1));
                    printf("Pontos da Carta 2: %.2f\n", (pib2 + perCapta2));
                    printf("### EMPATE! ###");  
                } else {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: PIB e PIB per Capita\n");
                    printf("PIB's: %.2f e %.2f\n", pib1, pib2);
                    printf("PIB's per Capita: %.2f e %.2f\n", perCapta1, perCapta2);
                    printf("Pontos da Carta 1: %.2f\n", (pib1 + perCapta1));
                    printf("Pontos da Carta 2: %.2f\n", (pib2 + perCapta2));
                    printf("### CARTA 2 VENCEU! ###");                      
                }
                break;
            case 4:
                resultado = ((perCapta1 + pontosTuristicos1) > (perCapta2 + pontosTuristicos2)) ? 1 : 0;
                if (resultado == 1){
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Pontos Turísticos e PIB per Capita\n");
                    printf("Pontos Turísticos: %d e %d\n", pontosTuristicos1, pontosTuristicos2);
                    printf("PIB's per Capita: %.2f e %.2f\n", perCapta1, perCapta2);
                    printf("Pontos da Carta 1: %.2f\n", (perCapta1 + pontosTuristicos1));
                    printf("Pontos da Carta 2: %.2f\n", (perCapta2 + pontosTuristicos2));
                    printf("### CARTA 1 VENCEU! ###");  
                } else if ((perCapta1 + pontosTuristicos1) == (perCapta2 + pontosTuristicos2)) {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Pontos Turísticos e PIB per Capita\n");
                    printf("Pontos Turísticos: %d e %d\n", pontosTuristicos1, pontosTuristicos2);
                    printf("PIB's per Capita: %.2f e %.2f\n", perCapta1, perCapta2);
                    printf("Pontos da Carta 1: %.2f\n", (perCapta1 + pontosTuristicos1));
                    printf("Pontos da Carta 2: %.2f\n", (perCapta2 + pontosTuristicos2));
                    printf("### EMPATE! ###");  
                } else {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: Pontos Turísticos e PIB per Capita\n");
                    printf("Pontos Turísticos: %d e %d\n", pontosTuristicos1, pontosTuristicos2);
                    printf("PIB's per Capita: %.2f e %.2f\n", perCapta1, perCapta2);
                    printf("Pontos da Carta 1: %.2f\n", (perCapta1 + pontosTuristicos1));
                    printf("Pontos da Carta 2: %.2f\n", (perCapta2 + pontosTuristicos2));
                    printf("### CARTA 2 VENCEU! ###");                      
                }                
                break;
            case 5:
                resultado = ((perCapta1 - densidade1) > (perCapta2 - densidade2)) ? 1 : 0;
                if (resultado == 1){
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: PIB per Capita e Densidade Populacional\n");
                    printf("PIB's per Capita: %.2f e %.2f\n", perCapta1, perCapta2);
                    printf("Densidades Populacionais: %.2f e %.2f\n", densidade1, densidade2);
                    printf("Pontos da Carta 1: %.2f\n", (perCapta1 - densidade1));
                    printf("Pontos da Carta 2: %.2f\n", (perCapta2 - densidade2));
                    printf("### CARTA 1 VENCEU! ###");  
                } else if ((perCapta1 - densidade1) == (perCapta2 - densidade2)) {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: PIB per Capita e Densidade Populacional\n");
                    printf("PIB's per Capita: %.2f e %.2f\n", perCapta1, perCapta2);
                    printf("Densidades Populacionais: %.2f e %.2f\n", densidade1, densidade2);
                    printf("Pontos da Carta 1: %.2f\n", (perCapta1 - densidade1));
                    printf("Pontos da Carta 2: %.2f\n", (perCapta2 - densidade2));
                    printf("### EMPATE! ###");  
                } else {
                    printf("Nome dos estados: %s e %s\n", cidade1, cidade2);
                    printf("Atributos usados na comparação: PIB per Capita e Densidade Populacional\n");
                    printf("PIB's per Capita: %.2f e %.2f\n", perCapta1, perCapta2);
                    printf("Densidades Populacionais: %.2f e %.2f\n", densidade1, densidade2);
                    printf("Pontos da Carta 1: %.2f\n", (perCapta1 - densidade1));
                    printf("Pontos da Carta 2: %.2f\n", (perCapta2 - densidade2));
                    printf("### CARTA 2 VENCEU! ###");                      
                }                
                break;                            
            default:
                printf("Opção inválida!");
                break;
            }   
        break;    
    default:
        printf("Opção inválida!");
        break;
    }

    return 0;

}

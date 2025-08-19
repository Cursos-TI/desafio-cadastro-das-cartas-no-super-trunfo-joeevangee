#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Desafio super trunfo paises! \n");
    printf("novo commit\n");

    //Declaracao de varial para carta 1!
    char Estado1[25], Codigo1[10], Cidade1[30];
    int Populacao1, Pontos_turisticos1;
    float Area1, PIB1;
    float Densidade_populacional1;
    float PIB_per_capita1;
    float Super_poder1;

    //Declaracao de variavel para carta 2!
    char Estado2[30], Codigo2[10], Cidade2[30];
    int Populacao2, Pontos_turisticos2;
    float Area2, PIB2;
    float Densidade_populacional2;
    float PIB_per_capita2;
    float Super_poder2;

    
    //Cadastro da primeira carta!
    printf("--- Cadastro da primeira Carta ---\n");

    printf("Digite o estado (A-H): \n");
    scanf("%s", Estado1);

    printf("Digite o Codigo: \n");
    scanf("%s", Codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Cidade1);

    printf("Digite o numero de populacao: \n");
    scanf("%d", &Populacao1);

    printf("Digite a area: \n");
    scanf("%f", &Area1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite quantos pontos turisticos: \n");
    scanf("%d", &Pontos_turisticos1);

    //Densidade populacional e PIB per capita carta 1
    Densidade_populacional1 = (float)Populacao1 / Area1;
    printf("A densidade Populacional é: %.2f hab. km² \n", Densidade_populacional1);

    PIB_per_capita1 = PIB1 / (float)Populacao1;
    printf("O PIB per capita é: %.2f milhões/hab \n", PIB_per_capita1);


    //Declaração do super poder da carta 1
    Super_poder1 = (float)Populacao1 + Area1 + PIB1 + (float)Pontos_turisticos1 + PIB_per_capita1 + (1.f / Densidade_populacional1);
    printf("O valor do seu Super poder é: %.4f Milhões \n", Super_poder1);


    
    //Cadastro da segunda carta!
    printf(" --- Cadastro da segunda carta ---\n");

    printf("Digite o estado (A-H): \n");
    scanf("%s", Estado2);

    printf("Digite o Codigo: \n");
    scanf("%s", Codigo2);

    printf("Digite sua Cidade: \n");
    scanf("%s", Cidade2);

    printf("Digite a populacao: \n");
    scanf("%d", &Populacao2);

    printf("Digite sua Area: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite os pontos turisticos: \n");
    scanf("%d", &Pontos_turisticos2);

    //Densidade populacional e PIB per capita carta 2
    Densidade_populacional2 = Populacao2 / Area2;
    printf("A densidade Populacional é: %.2f hab/km² \n", Densidade_populacional2);

    PIB_per_capita2 = (PIB2 / Populacao2);
    printf("O PIB per capita é: %.2f milhões/hab \n", PIB_per_capita2);

 
    //Declaração do super poder da carta 2
    Super_poder2 = (float)Populacao2 + Area2 + PIB2 + (float)Pontos_turisticos2 + PIB_per_capita2 + (1.f / Densidade_populacional2);
    printf("O valor do seu Super poder é: %.4f Milhões \n", Super_poder2);

    
    
    //Exibicoes das informacoes da Carta 1!
     printf("--- CARTA 1 --- \n");
     printf("Estado: %s\n", Estado1);
     printf("Codigo: %s\n", Codigo1);
     printf("Cidade: %s\n", Cidade1);
     printf("Populacao: %d\n", Populacao1);
     printf("Area: %2f km\n", Area1);
     printf("PIB: %2f milhoes\n", PIB1);
     printf("Pontos Turisticos: %d\n", Pontos_turisticos1);
     printf("Densidade Populacional: %.2f \n", Densidade_populacional1);
     printf("PIB per capita: %.2f \n", PIB_per_capita1);
     printf("Super Poder: %.4f \n", Super_poder1);
     
     
     //Exibicoes das informacoes da Carta 2!
     printf("--- CARTA 2 --- \n");
     printf("Estado: %s\n", Estado2);
     printf("Codigo: %s\n", Codigo2);
     printf("Cidade: %s\n", Cidade2);
     printf("Populacao: %d\n", Populacao2);
     printf("Area: %2f km\n",Area2);
     printf("PIB: %2f milhoes\n", PIB2);
     printf("Pontos Turisticos: %d \n", Pontos_turisticos2);
     printf("Densidade Populacional: %.2f \n", Densidade_populacional2);
     printf("PIB per capita: %.2f \n", PIB_per_capita2);
     printf("Super Poder: %.4f \n", Super_poder2);

     //Exibição da carta Maior
     printf("Carta maior 1 Carta menor 0 \n");
     printf(" --- Qual carta vai vencer? --- ");
     printf("A População da carta 1 é maior ?: %d\n", Populacao1 > Populacao2);
     printf("A Area da carta 1 é maior ?: %d\n", Area1 > Area2);
     printf("O PIB da carta 1 é maior ?: %d\n", PIB1 > PIB2);
     printf("Os Pontos Turisticos da carta 1 é maior ?: %d\n", Pontos_turisticos1 > Pontos_turisticos2);
     printf("A Densidade Populacional da carta 1 é maior ?: %d\n", Densidade_populacional1 > Densidade_populacional2);
     printf("O PIB per capita da carta 1 é maior ?: %d\n", PIB_per_capita1 > PIB_per_capita2);
     printf("O Super Poder da carta 1  é maior ?: %d\n", Super_poder1 > Super_poder2);

     //Comparação dos atributos das cartas 1 e 2!

     printf(" ---- A Disputa Final! ---- \n");
   
     
     if (Populacao1 > Populacao2){
        printf("População 1 é maior com %d hab.\n", Populacao1);
     } else {
        printf("População 2 é maior com %d hab.\n", Populacao2);
     }  

     if (Area1 > Area2){
      printf("Area 1 é maior com %.2f KM.\n", Area1);
     } else {
      printf("Area 1 é maior com %.2f KM.\n", Area2);
     }

     if (PIB1 > PIB2){
      printf("PIB 1 é maior com %.2f Mi hab.\n", PIB1);
     } else {
      printf("PIB 2 é maior com %.2f mi hab.\n", PIB2);
     } 

     if (PIB_per_capita1 > PIB_per_capita2){
      printf("PIB per capita 1 é maior com %.2f milhoes. \n", PIB_per_capita1);
     } else {
      printf("PIB per capita 2 é maior com %.2f milhoes. \n", PIB_per_capita2);
     }

     if (Densidade_populacional1 < Densidade_populacional2){
      printf("Densidade populacional 1 é menor %.2f hab/km². \n", Densidade_populacional1);
     } else {
      printf("Densidade populacional 2 é menor %.2f hab/km². \n", Densidade_populacional2);
     }


    printf(" ---- O Super Poder Vale 2 Pontos pro jogador com a carta Mais forte ---- ");
     if (Super_poder1 > Super_poder2){
      printf("O super poder 1 é maior %.3f\n", Super_poder1);
     } else {
      printf("O Super poder 2 é maior %.3f\n", Super_poder2);
     }




     
      


     




    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}

#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

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
    float Densidade_populacional_invertida1;
    float Super_poder1;

    //Declaracao de variavel para carta 2!
    char Estado2[30], Codigo2[10], Cidade2[30];
    int Populacao2, Pontos_turisticos2;
    float Area2, PIB2;
    float Densidade_populacional2;
    float PIB_per_capita2;
    float Densidade_populacional_invertida2;
    float Super_poder2

    
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
    Densidade_populacional1 = Populacao1 / Area1;
    printf("A densidade Populacional é: %.2f hab. km² \n", Densidade_populacional1);

    PIB_per_capita1 = PIB1 / Populacao1;
    printf("O PIB per capita é: %.2f milhões/hab \n", PIB_per_capita1);

    //Densidade populacional invertida da carta 1
    Densidade_populacional_invertida1 = Area1 / Populacao1;
    printf("A densidade Populacional Invertida é: %.2f km²/hab \n", Densidade_populacional_invertida1);

    //Declaração do super poder da carta 1
    Super_poder1 = 


    
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

    //Densidade populacional invertida da carta 2
    Densidade_populacional_invertida2 = Area2 / Populacao2;
    printf("A densidade Populacional Invertida é: %.2f km²/hab \n", Densidade_populacional_invertida2);

    //Declaração do super poder da carta 2
    Super_poder2 = 

    
    
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
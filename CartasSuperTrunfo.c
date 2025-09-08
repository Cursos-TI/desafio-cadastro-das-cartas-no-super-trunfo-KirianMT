#include <stdio.h>
int main(){
    char estado1, estado2, codigo1[4], codigo2[4], nomeC1[50], nomeC2[50];
    int populacao1, populacao2, turist1, turist2;
    float area1, area2, pib1, pib2, dens1, dens2, pibper1, pibper2;
    //Setando as variáveis em conjunto


    printf("Digite a letra do estado(A a H): ");
    scanf("%c", &estado1);

    printf("\nSeu estado é %c, digite a letra do seu estado juntamente com um número de 01 a 04:", estado1);
    scanf(" %4[^\n]", codigo1);
    //Strings não precisam do &, pois já endereçam a variável
    printf("Digite o nome da cidade: ");
    scanf(" %60[^\n]", nomeC1);
    //O comando (" %60[^n]") nega a passagem das informações digitadas para a próxima scanf, permitindo escrever com espaçamento.

    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados:");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib1);
    
    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &turist1);

    dens1 = (float)populacao1 / area1;
    pibper1 = (float)pib1 / populacao1;

     printf("Digite a letra do  segundo estado(A a H): ");
    scanf(" %[^\n]", &estado2);
    //O scanf tenta puxar o input do tourist1 juntamente com o comando enter, logo o " %[^\n]" impede isso.

    printf("\nSeu estado é %c, digite a letra do segundo estado juntamente com um número de 01 a 04:", estado2);
    scanf(" %4[^\n]", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %60[^\n]", nomeC2);

    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados:");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib2);
    
    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &turist2);

    dens2 = (float)populacao2 / area2;
    pibper2 = (float)pib2 / populacao2;

    //Área acima focada na coleta de dados para a impressão das informações dos dados de SUPERTRUNFO.

    printf("Carta 1:\nEstado:%c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da cidade: %s\n", nomeC1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turist1);
    printf("Densidade populacional: %.2f hab/km²\n", dens1);
    printf("PIB per Capta: %.2f reais\n\n", pibper1);

    printf("Carta 2:\nEstado:%c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", nomeC2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turist2);
    printf("Densidade populacional: %.2f hab/km²\n", dens2);
    printf("PIB per Capta: %.2f reais\n", pibper2);

    //Área focada na resposta do sistema as informações fornecidas ao usuário.

    return 0;
}
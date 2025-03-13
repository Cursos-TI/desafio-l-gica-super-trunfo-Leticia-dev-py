#include <stdio.h>
#include <string.h>

// Agrupando variáveis em uma estrutura

struct CartaCidade {
    char CodigoDaCidade[5], NomeDaCidade[20], Pais[10], Estado[15];
    int Populacao, Pontos_Turisticos;
    float Area, Pib, DensidadePopulacional, PibPercapta;
};

// Iniciando o código criando um array para duas cartas

int main() {
    struct CartaCidade Carta[2];
    int opcao, maior;
    float Superpoder1, Superpoder2;

    // iniciando um laço de repetição para receber as informações das duas cartas
    
    for (int i = 0; i < 2; i++) {
        printf("\nInforme o Pais da cidade %d:\n", i + 1);
        scanf(" %[^\n]", Carta[i].Pais);

        printf("\nInforme o Estado da cidade %d:\n", i + 1);
        scanf(" %[^\n]", Carta[i].Estado);

        printf("\nInforme o nome da Cidade %d:\n", i + 1);
        scanf(" %[^\n]", Carta[i].NomeDaCidade);

        printf("\nInforme o codigo da Cidade %d:\n", i + 1);
        scanf("%s", Carta[i].CodigoDaCidade);

        printf("\nInforme a populacao da Cidade %d:\n", i + 1);
        scanf("%d", &Carta[i].Populacao);

        printf("\nInforme os pontos turisticos da Cidade %d:\n", i + 1);
        scanf("%d", &Carta[i].Pontos_Turisticos);

        printf("\nInforme a area territorial da Cidade %d:\n", i + 1);
        scanf("%f", &Carta[i].Area);

        printf("\nInforme o PIB da Cidade %d:\n", i + 1);
        scanf("%f", &Carta[i].Pib);

        // Calculando densidade populacional e pibpercapta
        
        Carta[i].DensidadePopulacional = Carta[i].Populacao / Carta[i].Area;
        Carta[i].PibPercapta = Carta[i].Pib / Carta[i].Populacao;

        // Mostrando na tela as informações das cartas
       
        printf("\nPais: %s\n", Carta[i].Pais);
        printf("Estado: %s\n", Carta[i].Estado);
        printf("Nome da Cidade: %s\n", Carta[i].NomeDaCidade);
        printf("Codigo da Cidade: %s\n", Carta[i].CodigoDaCidade);
        printf("Populacao da Cidade: %d\n", Carta[i].Populacao);
        printf("Pontos turisticos da Cidade: %d\n", Carta[i].Pontos_Turisticos);
        printf("Area territorial da cidade: %.2f\n", Carta[i].Area);
        printf("PIB da Cidade: %.2f\n", Carta[i].Pib);
        printf("Densidade Populacional: %.2f pessoas/km\n", Carta[i].DensidadePopulacional);
        printf("PIB per Capita: %.2f\n", Carta[i].PibPercapta);
    }

    // Calculando os superpoderes das cartas

    Superpoder1 = Carta[0].Populacao + Carta[0].Pontos_Turisticos + Carta[0].Area + Carta[0].Pib;
    Superpoder2 = Carta[1].Populacao + Carta[1].Pontos_Turisticos + Carta[1].Area + Carta[1].Pib;

    // Criando menu de opções

    printf("\nMenu de opcoes:\n");
    printf("1 - Comparar Densidade Populacional\n");
    printf("2 - Comparar Pontos turisticos\n");
    printf("3 - Comparar Area Territorial\n");
    printf("4 - Comparar PIB\n");
    printf("5 - Comparar super poderes\n");
    printf("6 - Sair\n");
    printf("Digite a opcao desejada:\n");
    scanf("%d", &opcao);

    // Criando uma estrutura condicional para verificar e comparar as opções do menu

    switch (opcao) {
        case 1:
        if (Carta[0].DensidadePopulacional == Carta[1].DensidadePopulacional) {
            printf("\nPaises sendo comparados: %s e %s\n", Carta[0].Pais, Carta[1].Pais);
            printf("\nAtributos sendo comparados: Densidade Populacional\n");
            printf("\nValor de cada carta: %.2f e %.2f\n", Carta[0].DensidadePopulacional, Carta[1].DensidadePopulacional);
            printf("\nSoma entre as duas cartas: %.2f\n", Carta[0].DensidadePopulacional + Carta[1].DensidadePopulacional);
            printf("\nEmpate\n");
            printf("\nAs cidades possuem a mesma densidade populacional\n");
        } else {
            maior = (Carta[0].DensidadePopulacional > Carta[1].DensidadePopulacional) ? 0 : 1;
            printf("\nPaises sendo comparados: %s e %s\n", Carta[0].Pais, Carta[1].Pais);
            printf("\nAtributos sendo comparados: Densidade Populacional\n");
            printf("\nValor de cada carta: %.2f e %.2f\n", Carta[0].DensidadePopulacional, Carta[1].DensidadePopulacional);
            printf("\nSoma entre as duas cartas: %.2f\n", Carta[0].DensidadePopulacional + Carta[1].DensidadePopulacional);
            printf("\nA cidade com menor densidade populacional e: %s\n", Carta[maior].NomeDaCidade);

        }
        break;
        case 2:
        if (Carta[0].Pontos_Turisticos == Carta[1].Pontos_Turisticos) {
            printf("\nPaises sendo comparados: %s e %s\n", Carta[0].Pais, Carta[1].Pais);
            printf("\nAtributos sendo comparados: Pontos Turisticos\n");
            printf("\nValor de cada carta: %d e %d\n", Carta[0].Pontos_Turisticos, Carta[1].Pontos_Turisticos);
            printf("\nSoma entre as duas cartas: %d\n", Carta[0].Pontos_Turisticos + Carta[1].Pontos_Turisticos);
            printf("\nEmpate\n");
            
        } else {
            maior = (Carta[0].Pontos_Turisticos > Carta[1].Pontos_Turisticos) ? 0 : 1;
            printf("\nPaises sendo comparados: %s e %s\n", Carta[0].Pais, Carta[1].Pais);
            printf("\nAtributos sendo comparados: Pontos Turisticos\n");
            printf("\nValor de cada carta: %d e %d\n", Carta[0].Pontos_Turisticos, Carta[1].Pontos_Turisticos);
            printf("\nSoma entre as duas cartas: %d\n", Carta[0].Pontos_Turisticos + Carta[1].Pontos_Turisticos);
            printf("\nA cidade com mais pontos turisticos e: %s\n", Carta[maior].NomeDaCidade);
        }
        
        break;
        
        case 3:
        
        if (Carta[0].Area == Carta[1].Area){
            printf("\nPaises sendo comparados: %s e %s\n", Carta[0].Pais, Carta[1].Pais);
            printf("\nAtributos sendo comparados: Area Territorial\n");
            printf("\nValor de cada carta: %.2f e %.2f\n", Carta[0].Area, Carta[1].Area);
            printf("\nSoma entre as duas cartas: %.2f\n", Carta[0].Area + Carta[1].Area);
            printf("\nEmpate\n");
            printf("\nAs cidades possuem a mesma area territorial\n");
        } else {
            maior = (Carta[0].Area > Carta[1].Area) ? 0 : 1;
            printf("\nPaises sendo comparados: %s e %s\n", Carta[0].Pais, Carta[1].Pais);
            printf("\nAtributos sendo comparados: Area Territorial\n");
            printf("\nValor de cada carta: %.2f e %.2f\n", Carta[0].Area, Carta[1].Area);
            printf("\nSoma entre as duas cartas: %.2f\n", Carta[0].Area + Carta[1].Area);
            printf("\nA cidade com maior area territorial e: %s\n", Carta[maior].NomeDaCidade);
        }
            break;
        case 4:
        if (Carta[0].Pib == Carta[1].Pib){
            printf("\nPaises sendo comparados: %s e %s\n", Carta[0].Pais, Carta[1].Pais);
            printf("\nAtributos sendo comparados: PIB\n");
            printf("\nValor de cada carta: %.2f e %.2f\n", Carta[0].Pib, Carta[1].Pib);
            printf("\nSoma entre as duas cartas: %.2f\n", Carta[0].Pib + Carta[1].Pib);
            printf("\nEmpate\n");
            printf("\nAs cidades possuem o mesmo PIB\n");
        } else {
            maior = (Carta[0].Pib > Carta[1].Pib) ? 0 : 1;
            printf("\nPaises sendo comparados: %s e %s\n", Carta[0].Pais, Carta[1].Pais);
            printf("\nAtributos sendo comparados: PIB\n");
            printf("\nValor de cada carta: %.2f e %.2f\n", Carta[0].Pib, Carta[1].Pib);
            printf("\nSoma entre as duas cartas: %.2f\n", Carta[0].Pib + Carta[1].Pib);
            printf("\nA cidade com maior PIB e: %s\n", Carta[maior].NomeDaCidade);
        } 
            break;
        case 5:
        if (Superpoder1 > Superpoder2){
            printf("\nPaises sendo comparados: %s e %s\n", Carta[0].Pais, Carta[1].Pais);
            printf("\nAtributos sendo comparados: Super Poder\n");
            printf("\nValor de cada carta: %.2f e %.2f\n", Superpoder1, Superpoder2);
            printf("\nSoma entre as duas cartas: %.2f\n", Superpoder1 + Superpoder2);
            printf("\nEmpate\n");
            printf("\nAs cidades possuem o mesmo super poder\n");
        } else {
            maior = (Superpoder1 > Superpoder2) ? 0 : 1;
            printf("\nPaises sendo comparados: %s e %s\n", Carta[0].Pais, Carta[1].Pais);
            printf("\nAtributos sendo comparados: Super Poder\n");
            printf("\nValor de cada carta: %.2f e %.2f\n", Superpoder1, Superpoder2);
            printf("\nSoma entre as duas cartas: %.2f\n", Superpoder1 + Superpoder2);
            printf("\nA cidade com maior super poder e: %s\n", Carta[maior].NomeDaCidade);
        } 
            break;
        case 6:
            printf("\nSaindo...\n");
            break;
        default:
            printf("\nOpcao invalida!\n");
            break;
    }
    
    // Fim
    
    return 0;
}
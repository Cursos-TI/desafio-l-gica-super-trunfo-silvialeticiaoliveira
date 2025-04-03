#include <stdio.h>

// adicionado para limpar os '\n' das variaveis 'nomadacidade1' e 'nomedacidade2' pois estava apresentando erro:
#include <string.h>

int main() {

    // DECLARAÇÃO DE VARIÁVEIS:
    // IMPLEMENTAÇÃO DO 'UNSIGNED LONG INT' NA VARIAVEL QUE ARMAZENA A POPULAÇÃO E DA VARIAVEL PRA ARMAZENAR O SUPERPODER DAS DUAS CARTAS:
    char estadoCARTA1[20], estadoCARTA2[20], codigoDaCarta1[20], codigoDaCarta2[20], nomeDaCidade1[20], nomeDaCidade2[20];
    unsigned long int populacaoDaCidade1, populacaoDaCidade2;
    int pontosTuristicosCidade1, pontosTuristicosCidade2;
    float areaDaCidade1, areaDaCidade2, PIBdaCidade1, PIBdaCidade2, densidadePopulacional1, densidadePopulacional2, PIB_percapita1, PIB_percapita2;

    // APRESENTAÇÃO E ADIÇÃO DE NOVAS INFORMAÇÕES AO USUÁRIO:
    printf("Bem-vindo(a) ao jogo Super Trunfo - Países! Aqui jogadores competem usando cartas com diferentes atributos e a MELHOR CARTA vence no FINAL! MAS para isso, vamos começar criando elas primeiro.\n");
    printf("Vamos começar criando DUAS CARTAS iniciais para comparar elas no final e ver a MELHOR CARTA:\n\n");

    
    // Armazenando os dados da Carta 1 utilizando printf para exibir para o usuário:

    // PROCESSO:

    /*utilizei 'sizeof' no código para para garantir que
    o texto digitado pelo usuário não ultrapasse o tamanho máximo permitido da variável, 
    evitando estouro de memória: */
    // MUDANÇA DE ESPECIFICAÇÃO DA POPULACÃO:
    printf("Carta 1:\n");
    printf("Estado (digite um nome de estado): \n");
    fgets(estadoCARTA1, sizeof(estadoCARTA1), stdin);

    printf("Código (crie um código, exemplo: A01...A04): \n");
    fgets(codigoDaCarta1, sizeof(codigoDaCarta1), stdin);

    printf("Nome da Cidade (Digite um nome de cidade): \n");
    fgets(nomeDaCidade1, sizeof(nomeDaCidade1), stdin);
    // linha 38 adicionada para resolver a quebra de linha automatica na exibição da variavel:
    nomeDaCidade1[strcspn(nomeDaCidade1, "\n")] = '\0';

    printf("População (digite o número da população): \n");
    scanf("%lu", &populacaoDaCidade1);

    printf("Área (em km²): \n");
    scanf("%f", &areaDaCidade1);

    printf("PIB (Produto Interno Bruto da cidade): \n");
    scanf("%f", &PIBdaCidade1);

    printf("Pontos turisticos: \n");
    scanf("%d", &pontosTuristicosCidade1);

    // realocação do código para realizar o calculo antes da exibição:
    densidadePopulacional1 = (float) populacaoDaCidade1 / areaDaCidade1;
    PIB_percapita1 = PIBdaCidade1 / populacaoDaCidade1;
    populacaoDaCidade1 = (unsigned long int) populacaoDaCidade1;

    // implemetação de mais printf's para exibir a densidade e o PIB per capta:
    printf("Densidade populacional: %f\n", densidadePopulacional1);
    printf("PIB per capita: %f\n", PIB_percapita1);

    // ATUALIZAÇÃO DA VARIAVEL PARA REALIZAR O CALCULO:
    // CONVERSÃO DE TIPOS DE DADOS PARA REALIZAR A DIVISÃO:
    // A DENSIDADE POPULACIONAL ESTA DANDO RESULTADOS APROXIMADOS:
    
    // EDIÇÃO DA POPULAÇÃO DA CIDADE DE(INT) PARA (unsigned long int):

    getchar(); // Utilizei ele pra limpar o buffer, para não acontecer o estouro de memória, já que eu estou usando fgets.

    // Armazenando os dados da Carta 2 utilizando printf para exibir para o usuário, como na primeira carta:
    // OUVE MUDANÇA DE ESPECIFICADOR NA POPULACÃO 1:
    printf("\n\nCarta 1 foi criada com sucesso! Agora vamos criar a segunda carta: \n\n");

    printf("Carta 2: \n");
    printf("Estado (digite um nome de estado): \n");
    fgets(estadoCARTA2, sizeof(estadoCARTA2), stdin);

    printf("Código (crie um código, exemplo: A01...A04): \n");
    fgets(codigoDaCarta2, sizeof(codigoDaCarta2), stdin);

    printf("Nome da Cidade (Digite um nome de cidade): \n");
    fgets(nomeDaCidade2, sizeof(nomeDaCidade2), stdin);
    // linha 83 adicionada para resolver a quebra de linha automatica na exibição da variavel:
    nomeDaCidade2[strcspn(nomeDaCidade2, "\n")] = '\0';

    printf("População (digite o número da população): \n");
    scanf("%lu", &populacaoDaCidade2);

    printf("Área (em km²): \n");
    scanf("%f", &areaDaCidade2);

    printf("PIB (Produto Interno Bruto da cidade): \n");
    scanf("%f", &PIBdaCidade2);

    printf("Pontos turisticos: \n");
    scanf("%d", &pontosTuristicosCidade2);

    // CONVERSÃO DE TIPOS DE DADOS PARA REALIZAR A DIVISÃO:
    // EDIÇÃO DA POPULAÇÃO DA CIDADE2 DE(INT) PARA (unsigned long int):
    densidadePopulacional2 = (float) populacaoDaCidade2 / areaDaCidade2;
    PIB_percapita2 = PIBdaCidade2 / populacaoDaCidade2;
    populacaoDaCidade2 = (unsigned long int) populacaoDaCidade2;

    // adicão dos printf's pra densidade e PIB per capita:
    printf("Densidade populacional: %f\n", densidadePopulacional2);
    printf("PIB per capita: %f\n", PIB_percapita2);


    // COMPARAÇÃO DOS DADOS DAS CARTAS:
    printf("\n\nCarta 2 foi criada com sucesso!\n");
    printf("Comparação de Cartas (Atributo: Área da cidade):\n\n");

    // ENCERRAMENTO:
    // comparação dos atributos, o escolhido foi a area das cidades:
    printf("Carta 1 - %s: %lu\n", nomeDaCidade1, populacaoDaCidade1);
    printf("Carta 2 - %s: %lu\n", nomeDaCidade2, populacaoDaCidade2);

    // EXIBIÇÃO DO RESULTADO utilizando if:

    if (populacaoDaCidade1 > populacaoDaCidade2){
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeDaCidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeDaCidade2);
    }

    return 0;
}

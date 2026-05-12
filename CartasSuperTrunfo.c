    #include <stdio.h>

        int main(){
            //Dados
            char estado1;
            char codigo1[10];
            char cidade1[50];
            const char *nomeatributo1;
            const char *nomeatributo2;
            unsigned long int populacao1;
            float area1;
            float pib1;
            int PontosTuristicos1, opcao, Regras, comparacao, primeiroatributo, segundoatributo;


        
            printf("Menu Principal\n");
            printf("1. Iniciar Jogo\n");
            printf("2. Ver Regras\n");
            printf("3. Sair\n");
            printf("Escolha uma opcao: ");
            scanf("%d", &opcao);

            switch (opcao)
            {
                case 1:

                    //Aqui o usuario ira cadastrar sua carta 
                    printf("cadastro da carta 1 \n");
                    
                    printf("Digite o seu estado (A ao H): ");
                    scanf(" %c", &estado1);

                    printf("Digite o codigo da carta ex: A01: ");
                    scanf("%s", codigo1);

                    printf("Digite o nome da cidade: ");
                    scanf("%s", cidade1);

                    printf("Digite a populacao: ");
                    scanf("%lu", &populacao1);

                    printf("Digite a area (km²): ");
                    scanf("%f", &area1);

                    printf("Digite o PIB: ");
                    scanf("%f", &pib1);

                    printf("Digite a quantidade de pontos turisticos: ");
                    scanf("%d", &PontosTuristicos1);

                    //aqui sera pra poder imprimir pibpercapita, densidade populacional e superpoder
                    float densidade1 = populacao1 / area1;
                    float percapita1 = pib1 / populacao1;
                    float densidadeInvertida1 = 1.0 / densidade1;
                    float superpoder1 = populacao1 + area1 + pib1 + PontosTuristicos1 + percapita1 + densidadeInvertida1;



                    //Aqui sera impresso as informacoes cadastras pelo usuario
                    
                    printf("---Carta 1 cadastrada--- \n");
                    printf("estado: %c\n", estado1 );
                    printf("codigo: %s\n", codigo1);
                    printf("cidade: %s\n", cidade1);
                    printf("populacao: %lu\n", populacao1);
                    printf("area: %f km²\n", area1);
                    printf("pib: %f \n", pib1);
                    printf("Pontosturisticos: %d\n", PontosTuristicos1);
                    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
                    printf("PIB per capita: %.2f reais\n", percapita1);
                    printf("Super poder:  %.2f\n", superpoder1);
                    

                    //A partir daqui o padrao ira seguir o mesmo da primeira carta

                    char estado2;
                    char codigo2[10];
                    char cidade2[50];
                    unsigned long int populacao2;
                    float area2;
                    float pib2;
                    int PontosTuristicos2;

                
                    printf("cadastro da carta 2 \n");
                    
                    printf("Digite o seu estado (A ao H): ");
                    scanf(" %c", &estado2);

                    printf("Digite o codigo da carta ex: A01: ");
                    scanf("%s", codigo2);

                    printf("Digite o nome da cidade: ");
                    scanf("%s", cidade2);

                    printf("Digite a populacao: ");
                    scanf("%lu", &populacao2);

                    printf("Digite a area (km²): ");
                    scanf("%f", &area2);

                    printf("Digite o PIB: ");
                    scanf("%f", &pib2);

                    printf("Digite a quantidade de pontos turisticos: ");
                    scanf("%d", &PontosTuristicos2);

                    float densidade2 = populacao2 / area2;
                    float percapita2 = pib2 / populacao2;
                    float densidadeInvertida2 = 1.0 / densidade2;
                    float superpoder2 = populacao2 + area2 + pib2 + PontosTuristicos2 + percapita2 + densidadeInvertida2;

                    float valor1_c1, valor1_c2, valor2_c1, valor2_c2;



                    printf("---Carta 2 cadastrada--- \n");
                    printf("estado: %c\n", estado2 );
                    printf("codigo: %s\n", codigo2);
                    printf("cidade: %s\n", cidade2);
                    printf("populacao: %lu\n", populacao2);
                    printf("area: %f km²\n", area2);
                    printf("pib: %f\n", pib2);
                    printf("Pontosturisticos: %d\n", PontosTuristicos2);
                    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
                    printf("PIB per capita: %.2f reais\n", percapita2);
                    printf("Super poder:  %.2f\n", superpoder2);

                    
                    
                    /*
                    AQUI FOI USADO PRA IMPRIMIR O RESULTADO DE FORMA BASICA, APENAS COM 0 E 1 PARA DEFINIR O VENCEDOR.
                    printf("---RESULTADO FINAL (1 = CARTA1, 0 = CARTA2): ---\n");
                    
                    printf("Populacao: %d\n", populacao1 > populacao2);
                    printf ("Área: %d\n", area1 > area2);
                    printf("PIB: %d\n", pib1 > pib2);
                    printf("Pontos Turisticos: %d\n", PontosTuristicos1 > PontosTuristicos2);
                    printf("Densidade Populacional: %d\n", densidadeInvertida1 > densidadeInvertida2);
                    printf("PIB Per Capita: %d\n", percapita1 > percapita2);
                    printf("Super Poder: %d\n", superpoder1 > superpoder2); 
                    */

                    //aqui foi adicionado uma formar melhor de imprimir o resultado para o usuraio, comparando atributo por atributo e defonindo qual carta foi a vencerdora
                    //tbm foi ultilizado o switch pro usuario escolher qual atributo comparar
                    printf("Escolha o Primeiro Atributo Para ser comparado\n");
                    printf("1. População\n");
                    printf("2. Área\n");
                    printf("3. PIB\n");
                    printf("4. Ponto Turístico\n");
                    printf("5. Dendsidade Populacional\n");
                    printf("6. PIB PerCapita\n");
                    printf("7. Super Poder\n");
    
                    printf("Escolha uma Opção:\n");
                    
                    scanf("%d", &primeiroatributo);
                    
                    //printf("---RESULTADO FINAL---\n");

                    switch (primeiroatributo)
                {
                        case 1:
                            printf("Você Escolheu o Atributo População\n");
                            valor1_c1 = populacao1;
                            valor1_c2 = populacao2;
                            nomeatributo1 = "População";
                        break;                  
                    
                    
                        case 2:
                            printf("Você Escolheu o Atributo Área\n");
                            valor1_c1 = area1;
                            valor1_c2 = area2;
                            nomeatributo1 = "Area";
                        break;

                        case 3:
                            printf("Você Escolheu o Atributo PIB\n");
                            valor1_c1 = pib1;
                            valor1_c2 = pib2;
                            nomeatributo1 = "PIB";
                                                
                        break;

                        case 4:
                            printf("Você Escolheu o Atributo Ponto Turisticos\n");
                            valor1_c1 = PontosTuristicos1;
                            valor1_c2 = PontosTuristicos2;
                            nomeatributo1 = "Ponto Turistico";
                            
                        break;

                        case 5:
                            printf("Você Escolheu o Atributo Densidade Populacional\n");
                            valor1_c1 = densidadeInvertida1;
                            valor1_c2 = densidadeInvertida2;
                            nomeatributo1 = "Densidade Populacional";
                        break;

                        case 6:
                            printf("Você Escolheu o Atributo PIB Percapita\n");
                            valor1_c1 = percapita1;
                            valor1_c2 = percapita2;
                            nomeatributo1 = "PIBPercapita";
                        break;

                        case 7:
                            printf("Você Escolheu o Atributo Super Poder\n");
                            valor1_c1 = superpoder1;
                            valor1_c2 = superpoder2;
                            nomeatributo1 = "Super Poder";
                        break;

                        default:
                            printf("Atributo Invalido");
                        break;
                        }

                        

                    printf("Escolha o Segundo Atributo Diferente do Primeiro Para ser Comparado\n");
                    if (primeiroatributo != 1 ){
                    printf("1. População\n");
                    }

                    if (primeiroatributo != 2 ){
                    printf("2. Área\n");
                    }

                    if (primeiroatributo != 3 ){
                    printf("3. PIB\n");
                    }

                    if (primeiroatributo != 4 ){
                    printf("4. Ponto Turístico\n");
                    }

                    if (primeiroatributo != 5 ){
                    printf("5. Dendsidade Populacional\n");
                    
                    }

                    if (primeiroatributo != 6 ){
                    printf("6. PIB PerCapita\n");
                    }

                    if (primeiroatributo != 7 ){
                    printf("7. Super Poder\n");
                    }


                    scanf("%d", &segundoatributo);
                    

                    if (primeiroatributo == segundoatributo){
                        printf("Erro! Escolha atributos diferentes!!\n");
                        return 0;

                    }else {

                        switch (segundoatributo)
                        {
                            case 1:
                                printf("Você Escolheu o Atributo População\n");
                                valor2_c1 = populacao1;
                                valor2_c2 = populacao2;
                                nomeatributo2 = "População";

                            break;
                            
                            case 2:
                                printf("Você Escolheu o Atributo Área\n");
                                valor2_c1 = area1;
                                valor2_c2 = area2;
                                nomeatributo2 = "Area";
                            break;

                            case 3:
                                printf("Você Escolheu o Atributo PIB\n");
                                valor2_c1 = pib1;
                                valor2_c2 = pib2;
                                nomeatributo2 = "PIB";
                            break;

                            case 4:
                                printf("Você Escolheu o Atributo Ponto Turisticos\n");
                                valor2_c1 = PontosTuristicos1;
                                valor2_c2= PontosTuristicos2;
                                nomeatributo2 = "Ponto Turistico";
                            break;

                            case 5:
                                printf("Você Escolheu o Atributo Densidade Populacional\n");
                                valor2_c1 = densidadeInvertida1;
                                valor2_c2 = densidadeInvertida2;
                                nomeatributo2 = "Densidade";
                            break;

                            case 6:
                                printf("Você Escolheu o Atributo PIB Percapita\n");
                                valor2_c1 = percapita1;
                                valor2_c2 = percapita2;
                                nomeatributo2 = "PIBpercapita";
                            break;

                            case 7:
                                printf("Você Escolheu o Atributo Super Poder\n");
                                valor2_c1 = superpoder1;
                                valor2_c2 = superpoder2;
                                nomeatributo2 = "SuperPoder";
                            break;

                            default:
                                printf("Atributo Invalido");
                                return 0;
                            break;
                                    }
                            
                                }
                            
                                //DEBUG printf("resultado1 = %d\n", resultado1);
                                //DEBUG printf("resultado2 = %d\n", resultado2);
                        /*
                        if (resultado1 && resultado2){
                            printf("Você Ganhou!");
                        }else if (resultado1 != resultado2){
                            printf("Empatou");
                        } else {
                            printf("Você Perdeu");
                        }
                                */

                        float soma1 = valor1_c1 + valor2_c1;
                        float soma2 = valor1_c2 + valor2_c2;
                        printf("\n--- RESULTADO FINAL ---\n");
                        printf("Atributos usados: %s e %s\n", nomeatributo1, nomeatributo2);

                        printf("%s - %s: %.2f\n", cidade1, nomeatributo1, valor1_c1);
                        printf("%s - %s: %.2f\n", cidade2, nomeatributo1, valor1_c2);

                        printf("%s - %s: %.2f\n", cidade1, nomeatributo2, valor2_c1);
                        printf("%s - %s: %.2f\n", cidade2, nomeatributo2, valor2_c2);

                        //printf("%s: %.2f\n", cidade1, soma1);
                        //printf("%s: %.2f\n", cidade2, soma2);


                        printf ("Resultado Final: %s\n",
                                soma1 > soma2 ? cidade1 :
                                soma2 > soma1 ? cidade2 :
                                "Empate");
                        
                        /*
                        if (soma1 > soma2){
                            printf("%s Venceu!\n", cidade1);
                        }else if (soma1 < soma2){
                            printf("%s Venceu!\n", cidade2);
                        } else {
                            printf("Empate\n");
                        }
                            */
                        break;
                        


                case 2:
                    printf("Regras do Jogo: ");
                    printf("A regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.");
                scanf("%d", &Regras);
                break;

                case 3:
                    printf("Saindo do jogo\n");
                break;

                default:
                    printf("Opção Inválida\n");
                break;       
            } 
        
        


            return 0;

        }
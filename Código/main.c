#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NUM_PERSONAGENS 10
#define NUM_PERGUNTAS 17

int jogar();

typedef struct personagens{
    char nome[100];
}Pers;

typedef struct perguntas{
    char anunciado[255];
}Perg;

void Carregar_Perguntas(Perg *Pergunta){
    char pergunta0[]={"Essa figura e real?"};
    char pergunta1[]={"E do genero masculino?"};
    char pergunta2[]={"E um ator?"};
    char pergunta3[]={"E um jogador de futebol?"};
    char pergunta4[]={"Ele e canhoto?"};
    char pergunta5[]={"Ele e um cantor?"};
    char pergunta6[]={"Ela e uma atriz?"};
    char pergunta7[]={"Ela faz parte do elenco de Game Of Thrones?"};
    char pergunta8[]={"Sua figura e uma jogadora de futebol?"};
    char pergunta9[]={"Ela e brasileira?"};
    char pergunta10[]={"Sua figura e uma cantora?"};
    char pergunta11[]={"Seu personagem e do genero masculino?"};
    char pergunta12[]={"Seu personagem e de um jogo?"};
    char pergunta13[]={"Seu personagem e azul?"};
    char pergunta14[]={"Seu personagem e amarelo?"};
    char pergunta15[]={"Ele faz parte de uma banda de rock?"};
    char pergunta16[]={"Ele mora em um cogumelo?"};
        strcpy(Pergunta[0].anunciado, pergunta0);
        strcpy(Pergunta[1].anunciado, pergunta1);
        strcpy(Pergunta[2].anunciado, pergunta2);
        strcpy(Pergunta[3].anunciado, pergunta3);
        strcpy(Pergunta[4].anunciado, pergunta4);
        strcpy(Pergunta[5].anunciado, pergunta5);
        strcpy(Pergunta[6].anunciado, pergunta6);
        strcpy(Pergunta[7].anunciado, pergunta7);
        strcpy(Pergunta[8].anunciado, pergunta8);
        strcpy(Pergunta[9].anunciado, pergunta9);
        strcpy(Pergunta[10].anunciado, pergunta10);
        strcpy(Pergunta[11].anunciado, pergunta11);
        strcpy(Pergunta[12].anunciado, pergunta12);
        strcpy(Pergunta[13].anunciado, pergunta13);
        strcpy(Pergunta[14].anunciado, pergunta14);
        strcpy(Pergunta[15].anunciado, pergunta15);
        strcpy(Pergunta[16].anunciado, pergunta16);
}

void Carregar_Personagens(Pers *Personagem){
    char LM[]={"Lionel Messi"};
    char CR7[]={"Cristiano Ronaldo"};
    char AR[]={"Axl Roses"};
    char PS[]={"Papai Smurf"};
    char VD[]={"Vin Diesel"};
    char BR[]={"Bebe Rexha"};
    char M[]={"Marta"};
    char K[]={"Kratos"};
    char HM[]={"Homer Simpson"};
    char EC[]={"Emilia Clark"};
        strcpy(Personagem[0].nome, LM);
        strcpy(Personagem[1].nome, CR7);
        strcpy(Personagem[2].nome, AR);
        strcpy(Personagem[3].nome, PS);
        strcpy(Personagem[4].nome, VD);
        strcpy(Personagem[5].nome, BR);
        strcpy(Personagem[6].nome, M);
        strcpy(Personagem[7].nome, K);
        strcpy(Personagem[8].nome, HM);
        strcpy(Personagem[9].nome, EC);
}

void comeco(){
    printf("---BEM-VINDO AO JOGO---\n");
    printf("\nSuas opcoes de escolha sao: Lionel Messi, Cristiano Ronaldo, Papai Smurf, Homer Simpson, Marta, Kratos, Bebe Rexha, Axl Rose, Vin Diesel e Emilia Clark\n");
    printf("\nVamos comecar! Responda as perguntas com sim ou nao\n");
    jogar();
}

int jogar(){
    Pers Personagem[NUM_PERSONAGENS];
    Perg Pergunta[NUM_PERGUNTAS];
    char *resposta;
    char positivo[]={"sim"};
    int jogardnv = 0;

    resposta = calloc(4,sizeof(char));

    Carregar_Perguntas(Pergunta);
    Carregar_Personagens(Personagem);


    printf("\n%s\n",Pergunta[0].anunciado);
    scanf("%s",resposta);
    if(strcmp(resposta,positivo)==0){
        printf("%s\n",Pergunta[1].anunciado);
        scanf("%s",resposta);
            if(strcmp(resposta,positivo)==0){
                printf("%s\n",Pergunta[2].anunciado);
                scanf("%s",resposta);
                    if(strcmp(resposta,positivo)==0){
                        printf("Sua figura e: %s?\n",Personagem[4].nome);
                        scanf("%s",resposta);
                        if(strcmp(resposta,positivo)==0){
                            printf("\nYes! Eu acertei! Foi muito legal jogar com voce XD\n");
                            printf("Deseja jogar novamente? sim = 1/nao = 0\n");
                        scanf("%d",&jogardnv);
                        if(jogardnv==1){
                        	comeco();
                        }else
                        return 0;
                        }else
                        printf("Que pena, nao foi possivel encontrar sua figura\n");
                        printf("Deseja jogar novamente? sim = 1/nao = 0\n");
                        scanf("%d",&jogardnv);
                        if(jogardnv==1){
                        	comeco();
                        }else
                            return 0;
                    }else
                        printf("%s\n",Pergunta[3].anunciado);
                        scanf("%s",resposta);
                        if(strcmp(resposta,positivo)==0){
                           printf("%s\n",Pergunta[4].anunciado);
                           scanf("%s",resposta);
                            if(strcmp(resposta,positivo)==0){
                                printf("Sua figura e: %s?\n",Personagem[0].nome);
                                scanf("%s",resposta);
                                if(strcmp(resposta,positivo)==0){
                                printf("\nYes! Eu acertei! Foi muito legal jogar com voce XD\n");
                                	printf("Deseja jogar novamente? sim = 1/nao = 0\n");
                        scanf("%d",&jogardnv);
                        if(jogardnv==1){
                        	comeco();
                        }else
                                return 0;
                                }else
                                printf("Que pena, nao foi possivel encontrar sua figura\n");
                        printf("Deseja jogar novamente? sim = 1/nao = 0\n");
                        scanf("%d",&jogardnv);
                        if(jogardnv==1){
                        	comeco();
                        }else
                            return 0;
                            }else
                                printf("Sua figura e: %s?\n",Personagem[1].nome);
                                scanf("%s",resposta);
                                if(strcmp(resposta,positivo)==0){
                                printf("\nYes! Eu acertei! Foi muito legal jogar com voce XD\n");
                                	printf("Deseja jogar novamente? sim = 1/nao = 0\n");
                        scanf("%d",&jogardnv);
                        if(jogardnv==1){
                        	comeco();
                        }else
                                return 0;
                                }else
                                printf("Que pena, nao foi possivel encontrar sua figura\n");
                                printf("Deseja jogar novamente? sim = 1/nao = 0\n");
                                scanf("%d",&jogardnv);
                                if(jogardnv==1){
                                comeco();
                                }else
                                return 0;
                        }else
                            printf("%s\n",Pergunta[5].anunciado);
                            scanf("%s",resposta);
                            if(strcmp(resposta,positivo)==0){
                                    printf("%s\n",Pergunta[15].anunciado);
                                    scanf("%s",resposta);
                                    if(strcmp(resposta,positivo)==0){
                                    printf("Sua figura e: %s?\n", Personagem[2].nome);
                                    scanf("%s",resposta);
                                    if(strcmp(resposta,positivo)==0){
                                    printf("\nYes! Eu acertei! Foi muito legal jogar com voce XD\n");
                                    	printf("Deseja jogar novamente? sim = 1/nao = 0\n");
                        scanf("%d",&jogardnv);
                        if(jogardnv==1){
                        	comeco();
                        }else
                                    return 0;
                                    }else
                                    printf("Que pena, nao foi possivel encontrar sua figura\n");
                        printf("Deseja jogar novamente? sim = 1/nao = 0\n");
                        scanf("%d",&jogardnv);
                        if(jogardnv==1){
                        	comeco();
                        }else
                            return 0;
                            }else
                            printf("Que pena, nao foi possivel encontrar sua figura\n");
                            printf("Deseja jogar novamente? sim = 1/nao = 0\n");
                            scanf("%d",&jogardnv);
                            if(jogardnv==1){
                        	comeco();
                            }else
                            	return 0;
                            }else
                        printf("Que pena, nao foi possivel encontrar sua figura\n");
                        printf("Deseja jogar novamente? sim = 1/nao = 0\n");
                        scanf("%d",&jogardnv);
                        if(jogardnv==1){
                        	comeco();
                        }else
                            return 0;
            }else
                printf("%s\n",Pergunta[6].anunciado);
                scanf("%s",resposta);
                if(strcmp(resposta,positivo)==0){
                        printf("%s\n",Pergunta[7].anunciado);
                        scanf("%s",resposta);
                        if(strcmp(resposta,positivo)==0){
                        printf("Sua figura e: %s?\n",Personagem[9].nome);
                        scanf("%s",resposta);
                        if(strcmp(resposta,positivo)==0){
                        printf("\nYes! Eu acertei! Foi muito legal jogar com voce XD\n");
                        	printf("Deseja jogar novamente? sim = 1/nao = 0\n");
                        scanf("%d",&jogardnv);
                        if(jogardnv==1){
                        	comeco();
                        }else
                        return 0;
                        }else
                        printf("Que pena, nao foi possivel encontrar sua figura\n");
                        printf("Deseja jogar novamente? sim = 1/nao = 0\n");
                        scanf("%d",&jogardnv);
                        if(jogardnv==1){
                        	comeco();
                        }else
                            return 0;
                        }else
                        printf("Que pena, nao foi possivel encontrar sua figura\n");
                        printf("Deseja jogar novamente? sim = 1/nao = 0\n");
                        scanf("%d",&jogardnv);
                        if(jogardnv==1){
                        	comeco();
                        }else
                            return 0;
                }else
                    printf("%s\n",Pergunta[8].anunciado);
                    scanf("%s",resposta);
                        if(strcmp(resposta,positivo)==0){
                                printf("%s\n",Pergunta[9].anunciado);
                                scanf("%s",resposta);
                                if(strcmp(resposta,positivo)==0){
                                printf("Sua figura e: %s?\n",Personagem[6].nome);
                                scanf("%s",resposta);
                                if(strcmp(resposta,positivo)==0){
                                printf("\nYes! Eu acertei! Foi muito legal jogar com voce XD\n");
                                	printf("Deseja jogar novamente? sim = 1/nao = 0\n");
                        scanf("%d",&jogardnv);
                        if(jogardnv==1){
                        	comeco();
                        }else
                                return 0;
                                }else
                                printf("Que pena, nao foi possivel encontrar sua figura\n");
                        printf("Deseja jogar novamente? sim = 1/nao = 0\n");
                        scanf("%d",&jogardnv);
                        if(jogardnv==1){
                        	comeco();
                        }else
                            return 0;
                                }else
                                printf("Que pena, nao foi possivel encontrar sua figura\n");
                        printf("Deseja jogar novamente? sim = 1/nao = 0\n");
                        scanf("%d",&jogardnv);
                        if(jogardnv==1){
                        	comeco();
                        }else
                            return 0;
                        }else
                            printf("%s\n",Pergunta[10].anunciado);
                            scanf("%s",resposta);
                            if(strcmp(resposta,positivo)==0){
                            printf("Sua figura e: %s?\n",Personagem[5].nome);
                            scanf("%s",resposta);
                            if(strcmp(resposta,positivo)==0){
                            printf("\nYes! Eu acertei! Foi muito legal jogar com voce XD\n");
                            	printf("Deseja jogar novamente? sim = 1/nao = 0\n");
                        scanf("%d",&jogardnv);
                        if(jogardnv==1){
                        	comeco();
                        }else
                            return 0;
                            }else
                            printf("Que pena, nao foi possivel encontrar sua figura\n");
                        printf("Deseja jogar novamente? sim = 1/nao = 0\n");
                        scanf("%d",&jogardnv);
                        if(jogardnv==1){
                        	comeco();
                        }else
                            return 0;
                            }else
                        printf("Que pena, nao foi possivel encontrar sua figura\n");
                        printf("Deseja jogar novamente? sim = 1/nao = 0\n");
                        scanf("%d",&jogardnv);
                        if(jogardnv==1){
                        	comeco();
                        }else
                            return 0;
        }else
            printf("%s\n",Pergunta[11].anunciado);
            scanf("%s",resposta);
            if(strcmp(resposta,positivo)==0){
            printf("%s\n",Pergunta[12].anunciado);
            scanf("%s",resposta);
            if(strcmp(resposta,positivo)==0){
                printf("Sua figura e: %s?\n",Personagem[7].nome);
                scanf("%s",resposta);
                        if(strcmp(resposta,positivo)==0){
                        printf("\nYes! Eu acertei! Foi muito legal jogar com voce XD\n");
                        	printf("Deseja jogar novamente? sim = 1/nao = 0\n");
                        scanf("%d",&jogardnv);
                        if(jogardnv==1){
                        	comeco();
                        }else
                    return 0;
                    }else
                    printf("Que pena, nao foi possivel encontrar sua figura\n");
                        printf("Deseja jogar novamente? sim = 1/nao = 0\n");
                        scanf("%d",&jogardnv);
                        if(jogardnv==1){
                        	comeco();
                        }else
                            return 0;
            }else
                printf("%s\n",Pergunta[13].anunciado);
                scanf("%s",resposta);
                if(strcmp(resposta,positivo)==0){
                        printf("%s\n",Pergunta[16].anunciado);
                        scanf("%s",resposta);
                        if(strcmp(resposta,positivo)==0){
                    printf("Sua figura e: %s?\n",Personagem[3].nome);
                    scanf("%s",resposta);
                    if(strcmp(resposta,positivo)==0){
                    printf("\nYes! Eu acertei! Foi muito legal jogar com voce XD\n");
                    	printf("Deseja jogar novamente? sim = 1/nao = 0\n");
                        scanf("%d",&jogardnv);
                        if(jogardnv==1){
                        	comeco();
                        }else
                    return 0;
                    }else
                    printf("Que pena, nao foi possivel encontrar sua figura\n");
                        printf("Deseja jogar novamente? sim = 1/nao = 0\n");
                        scanf("%d",&jogardnv);
                        if(jogardnv==1){
                        	comeco();
                        }else
                            return 0;
                }else
                printf("Que pena, nao foi possivel encontrar sua figura\n");
                        printf("Deseja jogar novamente? sim = 1/nao = 0\n");
                        scanf("%d",&jogardnv);
                        if(jogardnv==1){
                        	comeco();
                        }else
                            return 0;
                }else
                    printf("%s\n",Pergunta[14].anunciado);;
                    scanf("%s",resposta);
                    if(strcmp(resposta,positivo)==0){
                        printf("Sua figura e: %s?\n",Personagem[8].nome);
                        scanf("%s",resposta);
                        if(strcmp(resposta,positivo)==0){
                        printf("\nYes! Eu acertei! Foi muito legal jogar com voce XD\n");
                        printf("Deseja jogar novamente? sim = 1/nao = 0\n");
                        scanf("%d",&jogardnv);
                        if(jogardnv==1){
                        	comeco();
                        }else
                            return 0;
                        }else
                        printf("Que pena, nao foi possivel encontrar sua figura\n");
                        printf("Deseja jogar novamente? sim = 1/nao = 0\n");
                        scanf("%d",&jogardnv);
                        if(jogardnv==1){
                        	comeco();
                        }else
                            return 0;
                    }else
                    printf("Que pena, nao foi possivel encontrar sua figura\n");
                        printf("Deseja jogar novamente? sim = 1/nao = 0\n");
                        scanf("%d",&jogardnv);
                        if(jogardnv==1){
                        	comeco();
                        }else
                            return 0;
                    }else
                    printf("Que pena, nao foi possivel encontrar sua figura\n");
                    printf("Deseja jogar novamente? sim = 1/nao = 0\n");
                    scanf("%d",&jogardnv);
                        if(jogardnv==1){
                            comeco();
                        }else
                            return 0;
                            free(resposta);
                    }

int main(){
	comeco();
	return 0;
}

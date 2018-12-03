#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    char TELA[2][2][4][20];
    char linha[20] = "", DIRETORIO[100] = "DADOS.txt", leitor[2] = {'\0','\0'};
    int i = 0, k = 0, j = 0;

    if(argc == 1)
        printf("Diretorio padrao: %s\n\n", DIRETORIO);
    else if (argc == 2){
        printf("Diretorio recebido: %s\n\n", argv[1]);
        sscanf(argv[1], "%s", DIRETORIO);
    }

    for(;;) {
        FILE *ARQV = fopen(DIRETORIO, "r");

        if(ARQV == NULL) {
            printf("\n\nArquivo nao encontrado!\n");
            printf("\nReiniciando em 10 segundos.\n\n\n");
            sleep(10);
            continue;
        }

        for( i = 0; i < 2; i++)
            for( j = 0; j < 2; j++)
                for( k = 0; k <4; k++) {
                    for(;;) {
                        leitor[0] = getc(ARQV);

                        if (leitor[0] == '\r')
                            continue;
                        else if (leitor[0] == '\n')
                            break;
                        else
                            strcat(linha, leitor);
                    }
                        strcpy(TELA[i][j][k], linha);
                        strcpy(linha,"");
                }
        fclose(ARQV);

        printf("=================================================================");
        for( i = 0; i < 2; i++) {
            for( j = 0; j < 4; j++)
                printf("\n|\t%-20s\t|\t%-20s\t|",TELA[i][0][j],TELA[i][1][j]);
        printf("\n=================================================================");
        }
        printf("\n\nAtualizando em 10 segundos.\n\n\n");
        sleep(10);
    }
}

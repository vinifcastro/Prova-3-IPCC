#include <stdio.h>

#define N 257

/**
 * @brief Função que remove vogais e calcula a quantidade de vogais removidas.
 * 
 * @param str str string de entrada.
 * @param vogais vogais vetor de 5 posições que contabiliza a quantidade de vogais removidas.
 * @return A função atualiza os vetores str e vogais.
 */
void remove_vogais( char * str, int * vogais );

int main(){
    int qtdvog[5];
    char str[N];
    qtdvog[0] = qtdvog[1] = qtdvog[2] = qtdvog[3] = qtdvog[4] = 0;
    scanf("%[^\n]%*c", str);
    remove_vogais(str, qtdvog);
    printf("%s\n", str);
    printf("a: %d\n", qtdvog[0]);
    printf("e: %d\n", qtdvog[1]);
    printf("i: %d\n", qtdvog[2]);
    printf("o: %d\n", qtdvog[3]);
    printf("u: %d\n", qtdvog[4]);
    return 0;
}

void remove_vogais( char * str, int * vogais ){
    int i, k, j;
    char clr[11] = {"aAeEiIoOuU\0"};
    for (i=0; i<strlen(clr); i++){
        for (k=0; k<strlen(str); k++){
            if (clr[i] == str[k]) {
                for (j=k; j < strlen(str); j++){
                    str[j] = str[j+1];
                }
                if (clr[i] == 'A' || clr[i] == 'a') vogais[0]++;
                if (clr[i] == 'E' || clr[i] == 'e') vogais[1]++;
                if (clr[i] == 'I' || clr[i] == 'i') vogais[2]++;
                if (clr[i] == 'O' || clr[i] == 'o') vogais[3]++;
                if (clr[i] == 'U' || clr[i] == 'u') vogais[4]++;
                k-=1;
            }
        }
    }
}
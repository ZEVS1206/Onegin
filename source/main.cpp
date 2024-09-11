#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "string_functions.h"



int main(){
    FILE *input = fopen("source//Input.txt", "r");
    char buf[100] = {0};
    char text[20][100] = {};
    int i = 0;
    while (fgets(buf, 100, input)){
        for (int j = 0; j < 100; j++){
            text[i][j] = buf[j];
        }
        i++;
    }
    sort_text(text, 20);
    for (int k = 0; k < 20; k++){
        for (int j = 0; text[k][j] != '\0' && j < 100; j++){
            printf("%c", text[k][j]);
        }
        printf("\n");
    }

    return 0;
}

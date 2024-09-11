#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "string_functions.h"

int my_strcmp(const char *str1, const char *str2){
    while (!isalpha(*str1)){
        str1++;
    }
    while (!isalpha(*str2)){
        str2++;
    }
    while (*str1 == *str2 && *str1 != '\0'){
        str1++;
        str2++;
    }
    return toupper(*str1) - toupper(*str2);
}

void change_strings(char *str1, char *str2){
    while (*str1 != '\0' || *str2 != '\0'){
        char tmp = *str1;
        *str1 = *str2;
        *str2 = tmp;
        str1++;
        str2++;
    }
}

void sort_text(char text[][100], int num_of_rows){
    for (int k = 0; k < num_of_rows; k++){
        for (int j = 0; j < num_of_rows - k; j++){
            if (k != j){
                if (my_strcmp(text[k], text[j]) >= 0){
                    change_strings(text[k], text[j]);
                }
            }
        }
    }
}

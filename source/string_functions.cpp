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

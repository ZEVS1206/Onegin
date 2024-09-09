#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "string_functions.h"


int main(){
    char str1[] = "-I am";
    char str2[] = "+I am";
    printf("strcmp-%d\nmy_strcmp-%d\n", strcmp(str1, str2), my_strcmp(str1, str2));
    return 0;
}

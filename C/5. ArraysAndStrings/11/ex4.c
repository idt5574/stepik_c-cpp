#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char al[] = "0123456789-";
    int i = 0;
    double csv[50] = {0};
    char str[200] = {0};
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';

    ptr_n = strchr(str, ':');
    while (strchr(al, *++ptr_n) == NULL);
    csv[i++] = atof(ptr_n);
    while (strchr(ptr_n, ';') != NULL)
    {
        ptr_n = strchr(ptr_n, ';');
        while (strchr(al, *++ptr_n) == NULL);
        csv[i++] = atof(ptr_n);

    }
    
    return 0;
}
#include <stdio.h>
 
int string_size(char* s)
{
    const char *p = s;    
    while (*p != '\0') p++;
    return p - s;
}

int main()
{   
    char *welcome1 = "Welcome to my C testing ground";
    char welcome2[] = "Welcome to my C testing ground";
    printf ("String 1 '%s', Size %li: %i\n", welcome1, sizeof(welcome1), string_size(welcome1));
    printf ("String 2 '%s', Size %li: %i\n", welcome2, sizeof(welcome2), string_size(welcome2));
    
    for (int i = 1; i <= 10; i++) {
        printf("%d", i);
        printf(i == 10 ? "\n" : ", ");
    }

    return 0;
}
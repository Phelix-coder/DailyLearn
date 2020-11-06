#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int retnum(char* output, char* input);

int main()
{
    char *into = "Hello World!";
    char outto[20];
    //char *outtoo; 堆栈 malloc

    int ret = retnum(outto, into);

    printf("%d\n", outto);
    printf("%d\n", &outto);


}

int retnum(char* output, char* input)
{
    strcpy(output, input);
    return 1;
}
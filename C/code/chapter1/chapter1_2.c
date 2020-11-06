#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch;
    int line = 0;
    int at_beginning = 1;

    while((ch=getchar()) != EOF)
    {
        if(at_beginning==1)
        {
            at_beginning=0;
            line+=1;
            printf("%d\t", line);
        }

        /**
         * 打印字符并对行尾进行检查
         */
         putchar(ch);
         if(ch=='\n')
         {
             at_beginning = 1;
         }
    }

    return EXIT_SUCCESS;
}
/******************************************************************************

                            Online C Compiler.
                Code, Compile,s "Run" button to compile and execute it.
 Run and Debug C program online.
Write your code in this editor and pres

suskaiciuoti simbolius tekste
*******************************************************************************/

#include <stdio.h>


int main()
{
    char arr[100];
    int a=0;
    scanf("%s", arr);
    printf("You entered: %s\n", arr);
    // a = printf("%s", arr);
    
    for (int i = 0; arr[i] != '\0'; i++)
    {
        a++;
    }

    
    printf("%d", a);


    return 0;
}

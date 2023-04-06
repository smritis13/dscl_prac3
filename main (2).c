/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x=2;
    int *p=&x;
    printf("%d\n",x);//value of x
    printf("%d\n",&x);//address of x
    printf("%d\n",*p);//value of address given by p
    printf("%d\n",&p);//address of p
    printf("%d\n",p);//value of p

    return 0;
}


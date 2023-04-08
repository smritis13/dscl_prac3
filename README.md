# dscl_prac3
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

<img width="318" alt="Screenshot 2023-04-07 002949" src="https://user-images.githubusercontent.com/124857385/230707627-ccaa4af0-b76d-4629-914d-90cb3ede7d2f.png">

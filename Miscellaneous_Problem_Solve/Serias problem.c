/* 
    Md. Taufik Hasan
    Department of CSE , DUET.
                                    Code defination:
    Write  a  C  program  to  find  sum  of  series:  1  +  x^1  +  x^2  +  x^3  +  ...  +x^n. 
    Take  the  value  of  x  and n.
    
*/
#include <stdio.h>

int sum(int x, int n)
{
    int total = 1, mul = x;
 
    for (int i = 1; i <= n; i++) {
        total = total + mul;
        mul = mul * x;
    }
    return total;
}
// Main Function
int main()
{
    int x,n;
    printf("Enter x and n : ");
    scanf("%d%d",&x,&n);
    printf("%d", sum(x, n));
    return 0;
}

// Thanks
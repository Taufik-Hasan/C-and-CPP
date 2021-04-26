/* 
     Md. Taufik Hasan
    Department of CSE , DUET.
                                    Code defination:
                            Armstrong number between two Range 
    What is Armstrong number ?
    Armstrong number is a number that is equal to the sum of cubes of its digits.
    For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.
    In case of an Armstrong number of 3 digits, the sum of cubes of each digit is equal to the number itself. 
    For example: 153 = 1*1*1 + 5*5*5 + 3*3*3=153 // SO 153 is an Armstrong number.
*/
#include <stdio.h>
#include <math.h>
 
int isArmstrong(int x)
{
    int temp = x,n=0, sum = 0;
                                    // count number digit
    while (x) {
        n++;
        x = x / 10;
    }
                                    // check Armstrong
    x=temp;
    while (temp) {
        int r = temp % 10;
        sum += pow(r, n);
        temp = temp / 10;
    }
    
    if (sum == x)
        return 1;
    else
        return 0;
}
// Main Function
int main()
{
    int x,y;
    printf("Enter your Range : ");
    scanf("%d%d",&x,&y);
    
    if(x>y){x=x+y;y=x-y;x=x-y;}
    
    for (int i = x; i <= y; i++) {
       if (isArmstrong(i) == 1)
        printf("\n%d is Armstrong\n",i);
    }
    return 0;
}
 
// Thanks
// Aramstrong number Range....
#include <stdio.h>
int main()
{

    int n,  rem, c;
    printf("Enter the Range:"); 
    scanf("%d", &n);    

    // Store Original Variable........
   
     c = n;

    // Logic Range Armstrong ...    

    for (int i = 1; i <= n; i++)
    
    {

    int temp = i;
    int arm = 0;   // 🔥 every loop new arm


    while (temp > 0)
    {
        rem = temp % 10;
        arm =  (rem * rem * rem)+ arm; 
        temp = temp / 10;
    }

    if (arm == i)
    {
        printf("%d ", i);
    }
}

    return 0;
}
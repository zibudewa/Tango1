#include<stdio.h>

int main()
{  
          int a, b, c, d;
          printf("Enter two numbers\n");
          scanf("%d%d%d", &a, &b, &c);

<<<<<<< HEAD
          d = a + b + c;        
=======
          c = a - b; 
>>>>>>> testing
          
          printf("sum of numbers = %d\n", d);
          
          return 0;
}


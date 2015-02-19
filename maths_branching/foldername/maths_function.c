#include<stdio.h>
//This is the line causing issue in the conflict branch
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


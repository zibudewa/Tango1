#include<stdio.h>
//This is the line causing issue in the conflict branch
int main()
{  
<<<<<<< HEAD
          int a, b, c, d;
          printf("Enter two numbers\n");
          scanf("%d%d%d", &a, &b);

          d = a + b + c;
          c = a - b;
 
=======
          int a, b, c;
          printf("Enter two numbers\n");
          scanf("%d%d", &a, &b);

          c = a - b;
	  c = a + b; 
>>>>>>> testing
          
          printf("sum of numbers = %d\n", c);
          
          return 0;
}


#include<stdio.h>

int main()
{  
          int a, b, c;
          printf("Enter two numbers\n");
          scanf("%d%d", &a, &b);

          c = a - b;
	  c = a + b; 
          
          printf("sum of numbers = %d\n", c);
          
          return 0;
}


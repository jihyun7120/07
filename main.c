#include <stdio.h>
#include <stdlib.h>

void f(void);

int main(int argc, char *argv[])
{
    int i;
   for (i=0;i<5;i++)
   {
       f();
   }
    
  system("PAUSE");	
  return 0;
}

void f(void)
{
     int i;
     for (i=0;i<10;i++)
     printf("#");
}

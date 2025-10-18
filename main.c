#include <stdio.h>
#include <stdlib.h>

int inc(int counter);
 
int main(int argc, char *argv[])
{
    int i=10;
    
    printf("함수 호출 전 i=%d\n", i);
    i =inc(i);//반환값 이용해야 10, 11이 나 
    
    printf(" 함수 호출  i=%d\n", i);
    
  system("PAUSE");	
  return 0;
}

int inc(int counter)
{
    counter++;
    return counter; //매개변수->끝나면 소 
}

#include <stdio.h>
#include <stdlib.h>

int all_files;

extern void sub(void);

int main(int argc, char *argv[])
{
    sub();
    printf("%d\n", all_files);

  system("PAUSE");	
  return 0;
}

void sub(void)
{
    int auto_count=0;
    static int static_count=0;
    auto_count++;
    static_count++;
    printf("auto_count=%d\n", auto_count);
    printf("static_count=%d\n", static_count);
}

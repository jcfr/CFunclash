
#include <stdio.h>

extern int thefunc_(int *arg1, int *arg2, int *arg3);
                          
int main(int argc, char*argv[])
{
  int arg1 = 2;
  int arg2 = 2;
  int arg3 = 2;
  int ret = -1;
  
  (void)argc;
  (void)argv;
  
  printf("CFunclash 0.1.0\n");
  
  printf("\nSystem properties\n");
  printf("  sizeof(int): %i\n", (int)sizeof(int));
  printf("  sizeof(long int): %i\n", (int)sizeof(long int));
  
  ret = thefunc_(&arg1, &arg2, &arg3);
  
  printf("\n  Return value: %i\n", ret);
  
  return 0;
}




#define PRINT_ARG_AS_POINTER()            \
  printf("\n  Arguments as pointer:\n");  \
  printf("    arg1: %p\n", (void *)arg1); \
  printf("    arg2: %p\n", (void *)arg2); \
  printf("    arg3: %p\n", (void *)arg3);
  
#define PRINT_ARG_VALUE()                \
  printf("\n  Argument values:\n");      \
  printf("    *arg1: %i\n", (int)*arg1); \
  printf("    *arg2: %i\n", (int)*arg2); \
  printf("    *arg3: %i\n", (int)*arg3);

#define SET_ARG_VALUE(expr)                          \
  printf("\n  Setting argument value: %s\n", #expr); \
  expr;
  
int thefunc_(long int *arg1, long int * arg2, long int *arg3)
{
  printf("\nFunction:\n");
  printf("  int thefunc_(long int *arg1, long int * arg2, long int *arg3)\n");
  
  PRINT_ARG_AS_POINTER();
  
  printf("\n  Difference between arg1 and arg2 pointers:\n");
  printf("    arg1 - arg2: %u\n", (void*)arg1 - (void*)arg2);
  
  PRINT_ARG_VALUE();
  
  SET_ARG_VALUE(*arg3 = 0);
  
  PRINT_ARG_VALUE();
  
  printf("\n  NOTE: While only 'arg3' has been set, 'arg2' value has also been updated !\n");
  
  return 0;
}

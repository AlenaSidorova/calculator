#include <stdio.h>

int main()
{
  int st[256];
  char b[256];
  int sp = 0;
  
  printf("Sample:\n2 3 + =\nResult = 5\n");
  while(!feof(stdin))
  {
    if(scanf ("%s", buf) != 1 )
      break;
      switch(b[0])
      {
        case '\0':
          break;
        case '=':
          printf("Result = %d\n", st[--sp]);
          break;
        case '+':
          st[sp-2] = st[sp-2] + st[sp-1];
          sp--;
          break;
        case '-':
          st[sp-2] = st[sp-2] - st[sp-1];
          sp--;
          break;
        case '*':
          st[sp-2] = st[sp-1] * st[sp-2];
          sp--;
          break;
        case '/':
          st[sp-2] = st[sp-1] / st[sp-2];
          sp--;
          break;
        default:
            st[sp++] = atoi(buf);
      }
    }
    printf("Result = %d\n",st[sp-1]);
    return 0;
}

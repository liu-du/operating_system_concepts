#include <stdio.h>
#include <unistd.h>

int staticVar = 0;
int main()
{
  while (1)
  {
    staticVar += 1;
    sleep(1);
    printf("Address: %p; Value: %d\n", &staticVar, staticVar);
  }
}
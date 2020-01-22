#include <stdio.h>
#include <unistd.h>

int main()
{
  int i = 999;
  int child_pid = fork();

  if (child_pid == 0)
  {
    sleep(10);
    printf("%d\n", i);
    printf("I am process #%d\n", getpid());
    return 0;
  }
  else
  {
    printf("%d\n", i);
    printf("I am #%d, the parent of process #%d\n", getpid(), child_pid);
    // sleep(1);
    return 0;
  }
}
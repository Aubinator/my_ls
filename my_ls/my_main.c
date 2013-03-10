#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "lib.h"

void    droit(int mode)
{
  char droits[10];
  droits[0] = mode&S_IRUSR? 'r':'-';
  droits[1] = mode&S_IWUSR? 'w':'-';
  droits[2] = mode&S_IXUSR? 'x':'-';
  droits[3] = mode&S_IRGRP? 'r':'-';
  droits[4] = mode&S_IRGRP? 'w':'-';
  droits[5] = mode&S_IXGRP? 'x':'-';
  droits[6] = mode&S_IROTH? 'r':'-';
  droits[7] = mode&S_IWOTH? 'w':'-';
  droits[8] = mode&S_IXOTH? 'x':'-';
  droits[9] = '\0';
  my_putstr(droit);
}

int main(int ac, char **av)
{
  struct stat x;
  stat(av[1],&x);
  droit(x.st_mode);
}


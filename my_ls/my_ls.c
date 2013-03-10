#include<stdio.h>
#include<dirent.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(int ac, char **av)
{

  DIR *repertoir;
  struct dirent *in;

  repertoir = opendir(av[1]);
  while(in= readdir(repertoir))
    {
      if (in->d_name[0] != '.')
        {
          printf("%s \t", in->d_name);
          printf("\n");
        }
    }
}


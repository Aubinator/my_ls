void my_putstr(char *str)
{
  int x;
  x = 0;
  while (str[x] != '\0')
    {
      my_putchar(str[x]);
      x++;
    }
}


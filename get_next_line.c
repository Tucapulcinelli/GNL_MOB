#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 42

//1.Ler um arquivo ou entrada BUFFER_SIZE bytes
//2.Buscar por uma uma quebra de linha
//3.Se encontrou uma quebra, retorne
  //Caso contrário, mas eu estiver no final do arquivo, retorne
  //Caso contrário, mas eu não estiver no final do arquivo, leia novamente e repita a partir de 1
//4. Se der erro ou se ler um arquivo vazio, retorne NULL

char *get_next_line(int fd)
{
  char *buffer;
  static char *rest;

  if(fd < 0)
    return(NULL);
  read(fd, buffer, BUFFER_SIZE);
//if(ft_strchr(buffer, '\n'))

}

int main(char *file_name)
{
  int fd;

  fd = open(file_name, O_RDONLY);

  while()
  {
    get_next_line(fd);
  }


  //write(1,"example",7);

}
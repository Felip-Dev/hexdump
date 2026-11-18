#include <stdio.h>
#include "logging.h"

static void hexdump(char* FileName);

static void hexdump(char* FileName)
{
  FILE* fstream;
  fstream = fopen(FileName, "r");
  if (!fstream)
  {
    LOG_ERROR(FATAL, "FILE CANNOT BE OPENED");
  }
  else
  {
    
  }
}

int main(int argc, char* argv)
{
  for(int i = 0; i< argc; i++)
  {
    hexdump(argv[i]);
  }
}

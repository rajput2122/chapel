#ifndef _LOC_H_
#define _LOC_H_

#include <stdio.h>
#include "gc_cpp.h"

class Loc : public gc {
 public:
  char* filename;
  int lineno;

  Loc(void);

  void printLoc(FILE* outfile);
};

#endif


#include <stdio.h>
#include "dpiheader.h"

// extern int c_svbit( const svBitVecVal*, svBitVecVal*);
// extern int c_svlogic( const svLogicVecVal*, svLogicVecVal*);

int c_main(void) {
  printf("Hello from c_main()\n");

  svBitVecVal   bitvec_in,   bitvec_out;
  svLogicVecVal logicvec_in, logicvec_out;

  bitvec_in   = 8;
  logicvec_in.aval = 8;
  logicvec_in.bval = 0;

  c_svbit   ( &bitvec_in, &bitvec_out);
    printf("------ c in=%d, out=%d\n",bitvec_in, bitvec_out);     
  c_svlogic ( &logicvec_in, &logicvec_out);
    printf("------ c in(a)=%d, out(a)=%d, in(b)=%d, out(b)=%d\n",
           logicvec_in.aval, logicvec_out.aval, logicvec_in.bval, logicvec_out.bval);     

  // input svLogicVecVal data = z
  printf("\n");
  printf("--- test svLogicVecVal data=Z\n");
  logicvec_in.aval = 0;
  logicvec_in.bval = 1;
  c_svlogic ( &logicvec_in, &logicvec_out);
    printf("------ c in(a)=%d, out(a)=%d, in(b)=%d, out(b)=%d\n",
           logicvec_in.aval, logicvec_out.aval, logicvec_in.bval, logicvec_out.bval);     

  // input svLogicVecVal data = x
  printf("\n");
  printf("--- test svLogicVecVal data=X\n");
  logicvec_in.aval = 1;
  logicvec_in.bval = 1;
  c_svlogic ( &logicvec_in, &logicvec_out);
    printf("------ c in(a)=%d, out(a)=%d, in(b)=%d, out(b)=%d\n",
           logicvec_in.aval, logicvec_out.aval, logicvec_in.bval, logicvec_out.bval);     

  // input svLogicVecVal data = x
  printf("\n");
  printf("--- test svLogicVecVal data=X\n");
  logicvec_in.aval = 2;
  logicvec_in.bval = 2;
  c_svlogic_b ( &logicvec_in, &logicvec_out);
    printf("------ c in(a)=%d, out(a)=%d, in(b)=%d, out(b)=%d\n",
           logicvec_in.aval, logicvec_out.aval, logicvec_in.bval, logicvec_out.bval);     

  
  return (0);
}


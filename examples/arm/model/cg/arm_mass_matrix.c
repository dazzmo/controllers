/* This file was automatically generated by CasADi 3.6.3+.
 *  It consists of: 
 *   1) content generated by CasADi runtime: not copyrighted
 *   2) template code copied from CasADi source: permissively licensed (MIT-0)
 *   3) user code: owned by the user
 *
 */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) arm_mass_matrix_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int long long int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_sq CASADI_PREFIX(sq)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

casadi_real casadi_sq(casadi_real x) { return x*x;}

static const casadi_int casadi_s0[7] = {3, 1, 0, 3, 0, 1, 2};
static const casadi_int casadi_s1[15] = {3, 3, 0, 3, 6, 9, 0, 1, 2, 0, 1, 2, 0, 1, 2};

/* arm_mass_matrix:(i0[3])->(o0[3x3]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a2, a3, a4, a5, a6, a7, a8, a9;
  a0=2.0000000000000004e-02;
  a1=3.6000000000000004e-02;
  a2=1.8000000000000002e-02;
  a3=arg[0]? arg[0][2] : 0;
  a4=cos(a3);
  a5=(a2*a4);
  a5=(a5*a4);
  a1=(a1-a5);
  a3=sin(a3);
  a2=(a2*a3);
  a6=(a2*a3);
  a1=(a1-a6);
  a7=2.0000000000000000e-03;
  a1=(a1+a7);
  a1=(a0+a1);
  a8=5.0000000000000000e-01;
  a9=-5.0000000000000000e-01;
  a10=(a9*a3);
  a11=casadi_sq(a10);
  a12=-1.;
  a13=(a9*a4);
  a13=(a12+a13);
  a14=(a9-a13);
  a15=casadi_sq(a14);
  a11=(a11+a15);
  a11=(a8*a11);
  a1=(a1+a11);
  a6=(a6+a7);
  a6=(a7+a6);
  a11=casadi_sq(a10);
  a11=(a8*a11);
  a6=(a6+a11);
  a11=(a1-a6);
  a5=(a5+a7);
  a5=(a0+a5);
  a7=casadi_sq(a14);
  a7=(a8*a7);
  a5=(a5+a7);
  a5=(a5-a6);
  a11=(a11+a5);
  a7=arg[0]? arg[0][1] : 0;
  a15=cos(a7);
  a16=(a15*a5);
  a7=sin(a7);
  a2=(a2*a4);
  a17=(a8*a10);
  a17=(a17*a14);
  a2=(a2-a17);
  a2=(a2+a2);
  a17=(a7*a2);
  a16=(a16-a17);
  a16=(a16*a15);
  a11=(a11-a16);
  a5=(a7*a5);
  a2=(a15*a2);
  a5=(a5+a2);
  a5=(a5*a7);
  a11=(a11-a5);
  a11=(a11+a6);
  a0=(a0+a11);
  a11=6.6666666666666663e-01;
  a6=(a8*a10);
  a5=(a15*a6);
  a2=-2.5000000000000000e-01;
  a13=(a8*a13);
  a2=(a2+a13);
  a13=(a7*a2);
  a5=(a5+a13);
  a13=casadi_sq(a5);
  a16=(a15*a2);
  a17=(a7*a6);
  a16=(a16-a17);
  a12=(a12+a16);
  a9=(a9-a12);
  a9=casadi_sq(a9);
  a13=(a13+a9);
  a13=(a11*a13);
  a0=(a0+a13);
  a13=3.;
  a5=(a11*a5);
  a5=casadi_sq(a5);
  a9=-1.6666666666666666e-01;
  a11=(a11*a12);
  a9=(a9+a11);
  a9=casadi_sq(a9);
  a5=(a5+a9);
  a13=(a13*a5);
  a0=(a0+a13);
  if (res[0]!=0) res[0][0]=a0;
  a0=2.;
  a6=casadi_sq(a6);
  a13=casadi_sq(a2);
  a6=(a6+a13);
  a0=(a0*a6);
  a1=(a1+a0);
  a0=-2.;
  a0=(a0*a2);
  a0=(a15*a0);
  a10=(a7*a10);
  a0=(a0+a10);
  a0=(a1+a0);
  if (res[0]!=0) res[0][1]=a0;
  a10=2.7000000000000002e-01;
  a4=(a8*a4);
  a2=(a10+a4);
  a15=(a15*a4);
  a8=(a8*a3);
  a7=(a7*a8);
  a15=(a15-a7);
  a15=(a2+a15);
  if (res[0]!=0) res[0][2]=a15;
  if (res[0]!=0) res[0][3]=a0;
  if (res[0]!=0) res[0][4]=a1;
  if (res[0]!=0) res[0][5]=a2;
  if (res[0]!=0) res[0][6]=a15;
  if (res[0]!=0) res[0][7]=a2;
  if (res[0]!=0) res[0][8]=a10;
  return 0;
}

CASADI_SYMBOL_EXPORT int arm_mass_matrix(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int arm_mass_matrix_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int arm_mass_matrix_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void arm_mass_matrix_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int arm_mass_matrix_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void arm_mass_matrix_release(int mem) {
}

CASADI_SYMBOL_EXPORT void arm_mass_matrix_incref(void) {
}

CASADI_SYMBOL_EXPORT void arm_mass_matrix_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int arm_mass_matrix_n_in(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_int arm_mass_matrix_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real arm_mass_matrix_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* arm_mass_matrix_name_in(casadi_int i) {
  switch (i) {
    case 0: return "i0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* arm_mass_matrix_name_out(casadi_int i) {
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* arm_mass_matrix_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* arm_mass_matrix_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int arm_mass_matrix_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif

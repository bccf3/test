#include <stdio.h>
#include "fun.h"

#define MAX(a,b) (a) > (b) ? a : b
#define MD5_LONG unsigned int
#   define MD5_CBLOCK      64
#define MD5_LBLOCK      (MD5_CBLOCK/4)

#define R0(a,b,c,d,k,s,t) { \
        a+=((k)+(t)+F((b),(c),(d))); \
        a=ROTATE(a,s); \
        a+=b; };
typedef struct MD5state_st {
    MD5_LONG A, B, C, D;
    MD5_LONG Nl, Nh;
    MD5_LONG data[MD5_LBLOCK];
    unsigned int num;
} MD5_CTX;


int main() {
    //printhello();
    R0(A, B, C, D, X(0), 7, 0xd76aa478L);

    printf("%d",MAX(1,4));
    return 0;
}

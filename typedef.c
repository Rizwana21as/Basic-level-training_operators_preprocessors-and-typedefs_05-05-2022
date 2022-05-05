1) In the following code, the P2 is Integer Pointer or Integer?
typedef int *ptr;
ptr p1, p2;

Answer: integer pointer

-------------------------------------------------------------------------------------------------------------------------------------------------

2)  In the following code what is 'P'?
typedef char *charp;
const charp P;

Answer: P is a constant

----------------------------------------------------------------------------------------------------------------------------------------------------- 

3) What is x in the following program?
#include<stdio.h>
int main()
{
    typedef char (*(*arrfptr[3])())[10];
    arrfptr x;
    return 0;
}

Answer: X is an array of three function pointers

----------------------------------------------------------------------------------------------------------------------------------------------------------

4) What is apfArithmatics in the below statement?
typedef int (*apfArithmatics[3])(int,int);
Answer:

----------------------------------------------------------------------------------------------------------------------------------------------------------

5) What is pf in the below statement?
typedef int (*pf)(int);
Answer: pf is a pointer to function which holds the address of function int which returns two integer

----------------------------------------------------------------------------------------------------------------------------------------------------------

6) What do the following declarations mean?

typedef char *pc;  
Answer: the base type is char, the identifier is pc,and the declaration is *pc;this tells us that*pc is a char(pc is pointer to char)

typedef pc fpc();
Answer: fpc is function returning pointer to char

typedef fpc *pfpc;
Answer: declares pfpc as a pointer to fpc. Since we know that fpc is a function returning a pointer to char, then pfpc must be a pointer
              to a function returning pointer to char, or
                                                                                     typedef char *(*pfpc)()  

typedef pfpc fpfpc();
Answer: This time, fpfpc is a function returning pfpc. Since we know that pfpc is a pointer to a function returning pointer to char, fpfpc must 
be a function returning a pointer to a function returning pointer to char, or
                                                                                          typedef char *(*fpfpc())();

typedef fpfpc *pfpfpc;
Answer: which declares pfpfpc as a pointer to fpfpc.since we know fpfpc is a function returning a pointer to a function returning pointer to char.
              pfpfpc must be a pointer to a function returning a pointer to a function returning a pointer to char,or
                                                                                      typedef char *(*(*pfpfpc)())();


pfpfpc a[N];
Answer: Since we know pfpfpc is a pointer to a function returning pointers to functions returning pointers to char, then a must be an N-element array
               of pointers to functions returning pointers to functions returning pointers to char:
                                                                  char *(*(*a[N])())();

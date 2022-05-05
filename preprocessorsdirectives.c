Write programs to understand the usage of below preprocessor directives.
#include, #if, #ifdef, #ifndef, #else, #elif, #endif, #define, #undef, #line, #error, and #pragma

PROGRAM FOR #DEFINE, #INCLUDE PREPROCESSORS IN C LANGUAGE:

#include <stdio.h>
 
#define height 100
#define number 3.14
#define letter 'A'
#define letter_sequence "ABC"
#define backslash_char '\?'
 
void main()
{
   printf("value of height    : %d \n", height );
   printf("value of number : %f \n", number );
   printf("value of letter : %c \n", letter );
   printf("value of letter_sequence : %s \n", letter_sequence);
   printf("value of backslash_char  : %c \n", backslash_char);
 
}


                                                           --------------------------------------------------------------------------------------

PROGRAM FOR #IFDEF, #ELSE AND #ENDIF IN C:

#include <stdio.h>
#define RAJU 100
 
int main()
{
   #ifdef RAJU
   printf("RAJU is defined. So, this line will be added in " \
          "this C file\n");
   #else
   printf("RAJU is not defined\n");
   #endif
   return 0;
}


                                                                       --------------------------------------------------------------------------------------


PROGRAM FOR #IFNDEF AND #ENDIF IN C:

#include <stdio.h>
#define RAJU 100
int main()
{
   #ifndef SELVA
   {
      printf("SELVA is not defined. So, now we are going to " \
             "define here\n");
      #define SELVA 300
   }
   #else
   printf("SELVA is already defined in the program”);
 
   #endif
   return 0;
 
}


                                                                      --------------------------------------------------------------------------------------


PROGRAM FOR #IF, #ELSE AND #ENDIF IN C:

#include <stdio.h>
#define a 100
int main()
{
   #if (a==100)
   printf("This line will be added in this C file since " \
          "a \= 100\n");
   #else
   printf("This line will be added in this C file since " \
          "a is not equal to 100\n");
   #endif
   return 0;
}


                                                                         --------------------------------------------------------------------------------------


 PROGRAM FOR UNDEF IN C LANGUAGE:


#include <stdio.h>
 
#define height 100
void main()
{
   printf("First defined value for height    : %d\n",height);
   #undef height          // undefining variable
   #define height 600     // redefining the same for new value
   printf("value of height after undef \& redefine:%d",height);
}



                                                                        --------------------------------------------------------------------------------------


 PROGRAM FOR PRAGMA IN C LANGUAGE:

#include <stdio.h>
 
void function1( );
void function2( );
 
#pragma startup function1
#pragma exit function2
 
int main( )
{
   printf ( "\n Now we are in main function" ) ;
   return 0;
}
 
void function1( )
{
   printf("\nFunction1 is called before main function call");
}
 
void function2( )
{
   printf ( "\nFunction2 is called just before end of " \
            "main function" ) ;
}



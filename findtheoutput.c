1) What will be the output of the C program?
#include<stdio.h>
#define CONDITION(i)\
printf("preprocessor works\n");                         
int main()
{
	CONDITION(0);
	return 0;
}

Outputs: preprocessor works
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
2) What will be the output of the C program?
#include<stdio.h>
# define loop while(true)  //0
int main()
{
	loop;  
	printf("preprocessor-aptitude");
	return 0;
}

Output:preprocessor-aptitude

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
3) What will be the output of the C program?
#include<stdio.h>
# define x --5
int main()
{
	printf("%d",x);
	return 0;
}

Output: Error
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


4) What will be the output of the C program ?
#include<stdio.h>
#define sqr(x) ++x * ++x
int main()
{
	int a = 3, z;
	z = ++a * ++a;     
	a -= 3;
	printf("%d %d", sqr(a), z);
	return 0;
}
 
Output:16 25

---------------------------------------------------------------------------------------------------------------
5) What will be the output of the C program?
#include<stdio.h>                      
#define x 1+2
int main()
{
	int i;
	i = x * x * x;
	printf("%d",i);
}

Output:7
------------------------------------------------------------------------------------------------------------------

6) What will be the output of the C program?
#include<stdio.h>
#define a =
int main()
{
	int num a 6;
	printf("%d",num);
	return 0;
}

Output:6
--------------------------------------------------------------------------------------------------------------------------

7) What will be the output of the C program?
#include<stdio.h>
#define fun(x,y) x*y
int main()
{
	int x = 2, y = 1;
	printf("%d",fun(x + 2, y - 1));
	return 0;
}

Output:3
---------------------------------------------------------------------------------------------------------------------------

8) What will be the output of the C program?
#include<stdio.h>
int main()
{
	char DATE[15] = "Current Date";
	printf("%s\n", __DATE__ );
	return 0;
}

Output:Apr 18 2022
-----------------------------------------------------------------------------------------------------------------------------
9) What will be the output of the C program?
#include<stdio.h>
int main()
{
	char TIME[15] = "Current Time";
	printf("%s\n",__TIME__);
	return 0;
}

Output:14:00:24
-----------------------------------------------------------------------------------------------------------------------------------

10) What will be the output of the C program?
#include<stdio.h>
int main()
{	
	printf("Line :%d\n", __LINE__ );
	return 0;
}

Output:Line :4
------------------------------------------------------------------------------------------------------------------------
11) What will be the output of the C program?
#include<stdio.h>
#define  preprocessor_works(x, y)  \
	printf(#x " and " #y " are great!\n")
int main(void) {
	preprocessor_works(you, me);
	return 0;
}

Output:you and me are great
--------------------------------------------------------------------------------------------------------------------

12) What will be the output of the C program?
#include<stdio.h>
# define puts  "%s C preprocessor"
int main()
{
	printf(puts, puts);
	return 0;
}

Output:%s C preprocessor C preprocessor
--------------------------------------------------------------------------------------------------------------------------------------------

13) What will be the output of the C program?
#include<stdio.h>
#define preprocessor(n) printf ("macro" #n " = %d", macro##n)
int main(void) {
	int macro25 = 47;
	preprocessor(25);
	return 0;
}

Output:macro25 = 47
---------------------------------------------------------------------------------------------------------------------------------------------

14) What will be the output of the C program?
#include<stdio.h>
#include<string.h>
#define MACRO(num) ++num 
int main()
{
	char *ptr = "preprocessor";
	int num =strlen(ptr);
	printf("%s  ", MACRO(ptr));
	printf("%d", MACRO(num));
	return 0;
}

Output:reprocessor  13
----------------------------------------------------------------------------------------------------------------------------------------------

15) What will be the output of the C program?
#include<stdio.h>
#define i 10
int main()
{
	#define i 20
	printf("%d",i);
	return 0;
}

Output:20
------------------------------------------------------------------------------------------------------------------------------------------------
16) What will be the output of the C program?
#include<stdio.h>
#define clrscr() 50
int main()
{
	clrscr();
	printf("%d\n",clrscr());
	return 0;
}

Output:50
---------------------------------------------------------------------------------------------------------------------------------------------------
17) What will be the output of the C program?
#include<stdio.h>
#define int char
main()
{
	int i=5;
	printf ("sizeof (i) =%d", sizeof (i));
}

Output:sizeof (i) =1

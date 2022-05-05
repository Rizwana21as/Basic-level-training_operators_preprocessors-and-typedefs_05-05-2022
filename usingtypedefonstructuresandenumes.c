Write few programs using typedef on structures and enums.

using typedef on structure:

#include<stdio.h>
struct Point 
{
  int x;
  int y;
};
typedef struct Point Point;
int main()
{
    Point p1;
    p1.x = 1;
    p1.y = 3;
    printf("%d \n", p1.x);
    printf("%d \n", p1.y);
    return 0;
}

                                                  or

#include<stdio.h>
typedef struct Point 
{
  int x;
  int y;
}
Point;
int main()
{
    Point p1;
    p1.x = 1;
    p1.y = 3;
    printf("%d \n", p1.x);
    printf("%d \n", p1.y);
    return 0;
}

using typedef on enum:

#include <stdio.h>
typedef enum
{
  monday,
  tuesday,
  wednesday,
  thursday,
  friday,
  saturday,
  sunday
}
WEEKDAY;
int main(void)
{
  WEEKDAY day = monday;
  if (day == monday) 
  {
    printf("It's monday!");
  } 
  else
  {
    printf("It's not monday");
  }
}





/**
* @file: pattern44.c
* @brief: 
* @author: Hansika Nemade(hansikanemade2121@gmail.com)
* @date: 14 October 2023 (saturday)
*/


#include<stdio.h>
#include<stdlib.h>

/*
*  FUNCTION NAME : pattern44()
*					                 1	
*				               2		   2
*			             3				       3
*		           4						           4
*	         5								               5
*		           4						           4
*			             3				       3
*				               2		   2
*					                 1
* 
*  PARAMETERS :  
*                1) void :
* 
*  RETURNS :
*                void :
*/


//Entry point of function
void pattern44(void)
{
  int ole = 1, ile = 1;
  int num1 = 1, space = 5, space2 = 5;

  while(ole <= 9)
  {
    while(ile <= 9)
    { 
      if(ile == space || ile == space2)
      {
        printf("%d   ",num1);      // 3 spaces
      }
      else
      {
        printf("    ");             // 4 spaces
      }
      ile++;
    }

    ile = 1;
    if(ole>4)
    {
      space++;
      num1--;
      space2--;
    }
    else
    {
      space--;
      num1++;
      space2++;
    }

    ole++;     
    printf("\n");
  }

  return;
}


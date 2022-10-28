/**
  ******************************************************************************
  * @file    main.c
  * @author  Maryem Ben Hadj Sghaier
  * @brief   How to develop structured code 
  * @version V1.0.0
  * @date    22-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/

/* Macros --------------------------------------------------------------------*/
#define INTEL 1
//#define OTHERS
#define NOINTEL 0
#define A 1
#define B 3
// Define an addition equation A+B=4
#define __ADDEQUATION(X,Y) (INTEL)?(X+Y):(X*Y)
//Find the minimum value that is A = 1
#define __MINCOMPARE(X,Y) (INTEL)?((X<Y)? X: Y):((X>Y)? X: Y)
//Define a multiplicatin equation A*B=3
#define __MULEQUATION(X,Y) (NOINTEL)?(X+Y):(X*Y)
//Find the minimum value that is B= 3
#define __MAXCOMPARE(X,Y) (NOINTEL)?((X<Y)? X: Y):((X>Y)? X: Y)

/* Private functions ---------------------------------------------------------*/

int Func_Som(int a,int b){
  return(a+b);
}

int Func_Som2(void){
  return(A+B);
}

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{ 
  // call the macros functions
  int som_macro = __ADDEQUATION(A,B);
  int calmax_min = __MINCOMPARE(A,B);
  int mul_macro = __MULEQUATION(A,B);
  int calmax_max = __MAXCOMPARE(A,B);
  //int som_fun1 = Func_Som(A,B);
  //int som_fun2 = Func_Som2(); 
  while (1)
  {}
}




/**************************************END OF FILE**************************************/

#include "stdio.h"
int main(){
  int sudoku[3][3][3][3];
  sudoku[0][0][0][0]=9;     //[0][0]
  sudoku[0][0][0][1]=5;
  sudoku[0][0][1][1]=3;
  sudoku[0][0][1][2]=2;
  sudoku[0][0][2][2]=7;
  sudoku[0][1][0][0]=7;     //[0][1]
  sudoku[0][1][1][0]=6;
  sudoku[0][1][1][2]=9;
  sudoku[0][1][2][1]=8;
  sudoku[0][2][1][1]=8;     //[0][2]
  sudoku[0][2][2][0]=6;
  sudoku[1][0][0][1]=8;     //[1][0]
  sudoku[1][0][0][2]=6;
  sudoku[1][0][1][0]=3;
  sudoku[1][0][2][1]=5;
  sudoku[1][0][2][2]=6;
  sudoku[1][1][0][1]=3;     //[1][1]
  sudoku[1][1][2][1]=2;
  sudoku[1][2][0][0]=1;     //[1][2]
  sudoku[1][2][0][1]=7;
  sudoku[1][2][1][2]=6;
  sudoku[1][2][2][0]=8;
  sudoku[1][2][2][1]=4;
  sudoku[2][0][0][2]=9;     //[2][0]
  sudoku[2][0][1][1]=2;
  sudoku[2][1][0][1]=5;     //[2][1]
  sudoku[2][1][1][0]=3;
  sudoku[2][1][1][2]=1;
  sudoku[2][1][2][2]=2;
  sudoku[2][2][0][0]=3;     //[2][2]
  sudoku[2][2][1][0]=4;
  sudoku[2][2][1][1]=9;
  sudoku[2][2][1][2]=6;
  sudoku[2][2][2][2]=1;


  printf("%d", sudoku[3][3][3][1]);
}

#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}

// Prints a simple arrow shape (a right-pointing arrow)
void print_arrow(int leftCol, int size)
{
  int mid = size / 2;

  for (int row = 0; row < size; row++) {
    for (int col = 0; col < leftCol; col++) putchar(' ');

    if (row == mid) {
      // Draw the shaft of the arrow
      for (int col = 0; col < size; col++) putchar('*');
    } else {
      // Draw just the arrow head
      for (int col = 0; col < row; col++) putchar(' ');
      putchar('*');
    }
    putchar('\n');
  }
}



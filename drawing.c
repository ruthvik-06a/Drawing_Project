#include <stdio.h>

#define ROWS 20
#define COLS 50

char canvas[ROWS][COLS];

void initializeCanvas()
{
    int i, j;

    for(i = 0; i < ROWS; i++)
    {
        for(j = 0; j < COLS; j++)
        {
            canvas[i][j] = ' ';
        }
    }
}

void displayCanvas()
{
    int i, j;

    for(i = 0; i < ROWS; i++)
    {
        for(j = 0; j < COLS; j++)
        {
            printf("%c", canvas[i][j]);
        }
        printf("\n");
    }
}

void drawLine(int row, int startCol, int endCol, char ch)
{
    int i;

    for(i = startCol; i <= endCol; i++)
    {
        if(row >= 0 && row < ROWS && i >= 0 && i < COLS)
        {
            canvas[row][i] = ch;
        }
    }
}

int main()
{
    initializeCanvas();

    drawLine(5, 10, 30, '*');

    displayCanvas();

    return 0;
}
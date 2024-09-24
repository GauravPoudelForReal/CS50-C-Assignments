#include <cs50.h>
#include <stdio.h>
int main()
{
    int height, row, column, space;
    do
    {
        height = get_int ("Height :");
    }
    while(height<=0 || height>8);

    for(row = 0 ; row < height ; row++)
    {
        // Supposed to be space < height - row -1 but still dont know what -1 actually means since spacing was learnt from online//update i know now, it was easy
        for(space = 0; space < height - row-1  ; space++)
        {
            printf(" ");
        }
        for(column = 0; column <= row ; column++)
        {
            printf("#");
        }
        printf("\n");
    }

}

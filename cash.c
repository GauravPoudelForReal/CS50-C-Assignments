#include <stdio.h>
int main()
{
    int owed, input, count = 0;
    //---------------------------------
    do
    {
        printf("Change owed: ");
        scanf("%d", &input);
    }
    while (input <= -1);
    //----------------------------------
    // input = owed;
    if (input == 0)
    {
        printf("%d\n", input);
        return 0;
    }
    else
    {
        while (input > 0)
        {
            if (input >= 25)
                input -= 25;
            else if (input >= 10)
                input -= 10;
            else if (input >= 5)
                input -= 5;
            else if (input >= 1)
                input -= 1;
            count = count + 1;
        }
        printf("%d\n", count);
    }
    return 0;
}

//Initialisation of libraries
#include <cs50.h>
#include <stdio.h>


int main(void)
{
    //Declaring variables
    int getHeight;

    //Making sure the user keys in a valid height
    do
    {
        //Getting user input for the height of the blocks
        getHeight = get_int("How many blocks high do you want the pyramid to be? ");
    }
    while(getHeight <= 0 || getHeight > 8);

    //Making the rows of the pyramid
    for(int x = 1; x <= getHeight; x++)
    {
        //Making the columns of the pyramid
        //Printing the space
        for(int y = x; y < getHeight; y++)
        {
            printf(" ");
        }
        //Printing the #
        for(int z = 1; z <= x; z++)
        {
            printf("#");
        }
        printf("  ");
        for(int a = 0; a < x; a++)
        {
            printf("#");
        }
        printf("\n");
    }
}
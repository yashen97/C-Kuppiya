#include <stdio.h>

int main()
{   ///Parts of a variable -- > int(data type) num1(name of the variable)

    int num1,num2,total; ///declaring variables for 1st number, 2nd number and total

    printf("Enter value for 1st variable : "); ///Asking the user to input value for variable num1
    scanf("%d", &num1); ///Scanning the value which the user input and assign that value to num1

    printf("Enter value for 2nd variable : "); ///Asking the user to input value for variable num2
    scanf("%d", &num2); ///Scanning the value which the user input and assign that value to num2

    total = num1 + num2; /// The logic, total = 1st variable + 2nd variable . (The value calculated by adding the numbers is assigning to the variable called total)

    printf("The answer is %d ", total); ///Displaying the value in total(variable)

    return 0; /// Check and informs the OS whether the code executed successfully (not necessary)
}

#include <iostream>

// Function with expected int return type.
int Multiply(int a, int b)
{
    // Body of function returning the product of int a * int b.
    return a * b;
}

// Void declares a function or method doesn't return anything and will log to console instead.
// Methods are stored in a Class.
void MultiplyAndLog(int a, int b)
{
    // The result integer stores the result of the Multiply function
    int result = Multiply(a, b);
    // Printing to the consle the stored value in the result integer.
    std::cout << result << std::endl;
}

int main(){
    // Calling the MultiplyAndLog function and providing the parameters.
    MultiplyAndLog(3, 2);
    // Waits for the return key before exit
    std::cin.get();
}

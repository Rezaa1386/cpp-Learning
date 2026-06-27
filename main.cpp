#include <iostream>
#include "main.h"

void choised(int x)
{
    switch (x)
    {
    case 1:
    {
        std::cout << "Enter 2 Number =";
        double z;
        double y;
        std::cin >> z >> y;
        std::cout << "Add is = " << Add(z, y) << "\n";
        break;
    }
    case 2:
    {
        std::cout << "Enter 2 Number =";
        double z;
        double y;
        std::cin >> z >> y;
        std::cout << "Subtract is = " << Subtract(z, y) << "\n";
        break;
    }
    case 3:
    {
        std::cout << "Enter 2 Number =";
        double z;
        double y;
        std::cin >> z >> y;
        std::cout << "Multiply is = " << Multiply(z, y) << "\n";
        break;
    }
    case 4:
    {
        std::cout << "Enter 2 Number =";
        double z;
        double y;
        std::cin >> z >> y;
        if (y == 0)
            std::cout << "Cannot divide by zero\n";
        else
            std::cout << "Divide is = " << Divide(z, y) << "\n";
        break;
    }
    case 5:
    {
        std::cout << "Enter 2 Number =";
        double z;
        double y;
        std::cin >> z >> y;
        std::cout << "Maximum is = " << Maximum_of_2_Numbers(z, y) << "\n";
        break;
    }
    case 6:
    {
        std::cout << "Enter 3 Number =";
        double z;
        double y;
        double u;
        std::cin >> z >> y >> u;
        std::cout << "Maximum is = " << Maximum_of_3_Numbers(z, y, u) << "\n";
        break;
    }
    case 7:
    {
        std::cout << "Enter 2 Number =";
        double z;
        double y;
        std::cin >> z >> y;
        Swap_Numbers(z, y);
        std::cout << "After swap: first = " << z << ", second = " << y << "\n";
        break;
    }
    case 0:
    {
        Exit();
        break;
    }
    default:
    {
        std::cout << "Error !" << "\n";
        std::cout << "Try Again !!" << "\n";
        break;
    }
    }
}

int main()
{
    std::cout << "*********Welcome*********" << "\n";
    std::cout << "1.Add" << "\n";
    std::cout << "2.Subtract" << "\n";
    std::cout << "3.Multiply" << "\n";
    std::cout << "4.Divide" << "\n";
    std::cout << "5.Maximum of 2 Numbers" << "\n";
    std::cout << "6.Maximum of 3 Numbers" << "\n";
    std::cout << "7.Swap Numbers" << "\n";
    std::cout << "0.Exit" << "\n";
    std::cout << "Enter :" << "\n";
    int choise;
    std::cin >> choise;
    choised(choise);
    return 0;
}

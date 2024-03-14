#include <iostream>
using namespace std;

float add(float x, float y) {
    return x + y;
}

float subtract(float x, float y) {
    return x - y;
}

float multiply(float x, float y) {
    return x * y;
}

float divide(float x, float y) {
    if (y == 0) {
        return -1;
    } else {
        return x / y;
    }
}

int main() {
    float num1, num2;
    int choice;

    cout << "---------------------------------------------------" << endl;
    cout << "---------------ARITHMETIC CALCULATOR---------------" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "\nEnter two numbers: ";
    cin >> num1 >> num2;

    cout << "\n---------------MENU---------------" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "\nSelect operation:" << endl;

    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Result: " << add(num1, num2) << endl;
            break;
        case 2:
            cout << "Result: " << subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "Result: " << multiply(num1, num2) << endl;
            break;
        case 4:
            if (divide(num1, num2)==-1) 
                cout << "Error! Can't divide any number by zero" << endl;
            else    
                cout << "Result: " << divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}

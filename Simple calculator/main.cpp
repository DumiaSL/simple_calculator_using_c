#include <iostream>
#include <string>

using namespace std;

int numberValidate(string numberType);

int main()
{
    cout << "Hello User";
    cout << " Welcome to the program" << endl;
    cout << "This program will calculate simple calculations\n" << endl;

    int num1 = numberValidate("first");
    int num2 = numberValidate("second");
    
    cout << "\nPlease enter what calculation you need [+ , - , x , / ] : "; 
    string cancuType;
    cin >> cancuType;

    if (cancuType== "+")
    {
        cout << "\n + = " << num1 + num2 << endl;
    }else if (cancuType== "-")
    {
        cout << "\n - = " << num1 - num2 << endl;
    }else if (cancuType== "x")
    {
        cout << "\n x = " << num1 * num2 << endl;
    }else if (cancuType== "/")
    {
        cout << "\n / = " << num1 / num2 << endl;
    }else{
        cout << "Wrong input";
    }
    
    return 0;
}

int numberValidate(string numberType){
    string tempNumber;
    while (true)
    {
        cout << "Please enter the "+ numberType +" number: ";
        cin >> tempNumber;
        try {
            return std::stoi(tempNumber);
        } catch (const std::exception& e) {
            cout << "Conversion failed.wrong input\n";
        }
    }
}

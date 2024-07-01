#include <iostream>
#include <Windows.h>
//#include <format>
using namespace std;

class Calculator
{
    double num1 = 0;
    double num2 = 0;

public: 
    double add()
    {
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

        return 0;
    }

    double multiply()
    {
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;

        return 0;
    }

    double subtract_1_2()
    {
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;

        return 0;
    }

    double subtract_2_1()
    {
        cout << num2 << " - " << num1 << " = " << num2 - num1 << endl;

        return 0;
    }

    double divide_1_2()
    {
        cout << num1 << " : " << num2 << " = " << num1 / num2 << endl;

        return 0;
    }

    double divide_2_1()
    {
        cout << num2 << " : " << num1 << " = " << num2 / num1 << endl;

        return 0;
    }

    bool set_num1(double num1)
    {
        this -> num1 = num1;

        if (this -> num1 != 0)
        {
            return true;
        }

        return false;
    }

    bool set_num2(double num2)
    {
        this -> num2 = num2;

        if (this -> num2 != 0)
        {
            return true;
        }

        return false;
    }

    //Отрисовка
    void show()
    {
        add();
        multiply();
        subtract_1_2();
        subtract_2_1();
        divide_1_2();
        divide_2_1();

    }

    //Диалог ввод/вывод (начало скрипта)
    int enter()
    {
        double num1 = 0;
        double num2 = 0;

        cout << "Введите первое число: ";
        cin >> num1;
        cout << endl;

        cout << "Введите второе число: ";
        cin >> num2;
        cout << endl;

        if (cin.fail())
        {
            cout << endl;

            cin.clear();
            cin.ignore(10000, '\n');

            cout << "Некорректный ввод. Повторите попытку." << endl;

            return 0;
        }

        if (num1 == 0 and num2 == 0)
        {
            cout << "Не совершайте ошибку. Замените одно из чисел." << endl;

            return 0;
        }

        set_num1(num1);
        set_num2(num2);

        show();
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Calculator calculator = Calculator();
    while (true)
    {
        calculator.enter();
        cout << "==========================================================\n\n\n\n";
    }

    return 0;
}
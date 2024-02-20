#include "iostream"
#include <conio.h>
#include <clocale>
#include <cstdlib>
#include <windows.h>

void lesson();
void task1();
void task2();
void task3();
void task4();

int main()
{
    //SetConsoleCP(1251);
    //SetConsoleOutputCP(1251);
    SetConsoleCP(866); SetConsoleOutputCP(866);
    setlocale(LC_ALL, "Russian");

    std::cout << "Homework for the second lecture. Writing to files" << std::endl;

    while (true)
    {
        std::cout << "0: lessonпривет" << std::endl;
        std::cout << "1: Implement an entry in the accounting statement." << std::endl; //–еализовать запись в ведомость учЄта.
        std::cout << "2: Implement the drawing of random pictures." << std::endl; //–еализовать рисование случайных картин.
        std::cout << "3: Implement a simulation of the game \"Fishing\"." << std::endl; //–еализовать симул€цию игры Ђ–ыбалкаї.
        std::cout << "4: Implement a simulation of ATM operation." << std::endl; //–еализовать симул€цию работы банкомата.
        std::cout << "Enter a number from 0 to 4 or something else to exit: ";

        int task;
        std::cin >> task;

        if (task == 0)
        {
            system("cls");
            std::cout << "lesson" << std::endl;
            lesson();
            _getch();
            system("cls");
        }

        else if (task == 1)
        {
            system("cls");
            std::cout << "Task 1 " << std::endl;
            task1();
            _getch();
            system("cls");;
        } else if (task == 2)
        {
            system("cls");
            std::cout << "Task 2 " << std::endl;
            task2();
            _getch();
            system("cls");;
        } else if (task == 3)
        {
            system("cls");
            std::cout << "Task 3 " << std::endl;
            task3();
            _getch();
            system("cls");;
        } else if (task == 4)
        {
            system("cls");
            std::cout << "Task 4 " << std::endl;
            task4();
            _getch();
            system("cls");;
        }  else
        {
            system("cls");
            std::cout << "Incorrect input. Exiting the program";
            break;
        }
    }
}

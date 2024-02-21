#include "iostream"
#include "fstream"

/**/void safeFile(std::string &name,
                    std::string &surname,
                    std::string &date,
                    int &surname){
    
}

void task1()
{
std::string name;
std::string surname;
std::string data;
int salary;

std::cout << "Enter the name";
std::cin >> name;

std::cout << "Enter the surname";
std::cin >> surname;

std::cout << "Enter the date";
std::cin >> date;

std::cout << "Enter the salary";
srt::cin >> salary;

safeFile(name, surname, date, salary);
}
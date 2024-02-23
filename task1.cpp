#include "iostream"
#include "fstream"

void safeFile(  std::string &name,
                std::string &surname,
                std::string &date,
                int &salary){
    std::ofstream file;
    if (!file.good()){
        file.open("file.txt");
        file << name << " " << surname << " " << date << " " << salary << std::endl;
    } else {
        file.open("file.txt", std::ios::app);
        file << name << " " << surname << " " << date << " " << salary << std::endl;
    }
    std::cout << "update date";
}

void task1()
{
std::string name;
std::string surname;
std::string date;
int salary;

std::cout << "Enter the name: ";
std::cin >> name;

std::cout << "Enter the surname: ";
std::cin >> surname;

std::cout << "Enter the date: ";
std::cin >> date;

std::cout << "Enter the salary: ";
std::cin >> salary;

safeFile(name, surname, date, salary);
}
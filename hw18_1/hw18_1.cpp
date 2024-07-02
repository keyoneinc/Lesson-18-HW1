#include "Employee.h"

int main() {
    int count = 5;
    Employee* arr = new Employee[count]{
        {"Olivia", 1943, "Software Engineer", 20000, "full"},
        {"Liam", 1996, "Marketing Manager", 22000, "basic"},
        {"Ava", 1939, "Financial Analyst", 23000, "basic"},
        {"Noah", 1986, "Graphic Designer", 25000, "full"},
        {"Isabella", 1977, "School Teacher", 19000, "full"}
    };

    int currentYear = 2024;
    int olderThan60Count = 0;

    cout << "Employees older than 60 years:\n";
    for (int i = 0; i < count; ++i) {
        if (currentYear - arr[i].birthDate > 60) {
            cout << "Name " << arr[i].name << endl;
            cout << "Year of birth: " << arr[i].birthDate << endl;
            cout << "Position: " << arr[i].position << endl;
            cout << "Salary: " << arr[i].salary << endl;
            cout << "Education: " << arr[i].education << endl;
            cout << "--------------------\n";
            olderThan60Count++;
        }
    }

    cout << "Older than 60 count: " << olderThan60Count << endl;
    delete[] arr;

}
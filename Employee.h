//
// Created by krzes on 04.02.2024.
//

#ifndef MAPA_EMPLOYEE_H
#define MAPA_EMPLOYEE_H

#include <string>
#include <utility>
#include <ostream>
class Employee {
public:
    std::string name;
    std::string position;
    int age;

    Employee(std::string  name, std::string  position, int age)
            : name(std::move(name)), position(std::move(position)), age(age) {}


    friend std::ostream& operator<<(std::ostream& os, const Employee& emp) {
        os << "Name: " << emp.name << ", Position: " << emp.position << ", Age: " << emp.age;
        return os;
    }
};
#endif //MAPA_EMPLOYEE_H

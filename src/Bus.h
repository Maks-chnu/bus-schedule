#pragma once
#include <string>

// Один рейс автобуса
struct Bus {
    std::string number;       // номер рейсу
    std::string destination;  // пункт призначення
    std::string departure;    // час відправлення у форматі HH:MM
    int platform;             // номер платформи
};

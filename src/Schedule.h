#pragma once
#include <iomanip>
#include <iostream>
#include <vector>
#include "Bus.h"

// Розклад руху: список рейсів
class Schedule {
public:
    void add(const Bus& bus) { buses.push_back(bus); }

    const std::vector<Bus>& all() const { return buses; }

    static void print(const Bus& b) {
        std::cout << std::left << std::setw(6) << b.number
                  << std::setw(20) << b.destination
                  << std::setw(8) << b.departure
                  << "платф. " << b.platform << std::endl;
    }

    void printAll() const {
        for (const Bus& b : buses) print(b);
    }

private:
    std::vector<Bus> buses;
};

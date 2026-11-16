#include <iostream>
#include "Schedule.h"

int main() {
    Schedule schedule;
    schedule.add({"101", "Чернівці", "08:15", 1});
    schedule.add({"205", "Івано-Франківськ", "09:40", 3});
    schedule.add({"310", "Коломия", "12:05", 2});
    schedule.add({"412", "Чернівці", "17:30", 1});

    std::cout << "Довідкова система розкладу руху автобусів" << std::endl;
    schedule.printAll();
    return 0;
}

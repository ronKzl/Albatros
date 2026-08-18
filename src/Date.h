#ifndef DATE_H
#define DATE_H
#include <string>

enum DayOfWeek {
    SUNDAY = 0,
    MONDAY = 1,
    TUESDAY = 2,
    WEDNESDAY = 3,
    THURSDAY = 4,
    FRIDAY = 5,
    SATURDAY = 6
};

enum Month {
    JANUARY = 0,
    FEBRUARY = 1,
    MARCH = 2,
    APRIL = 3,
    MAY = 4,
    JUNE = 5,
    JULY = 6,
    AUGUST = 7,
    SEPTEMBER = 8,
    OCTOBER = 9,
    NOVEMBER = 10,
    DECEMBER = 11
};

class Date {
    private:
        DayOfWeek dayOfWeek;
        int day;
        Month month; 
        int year;
        int hour;
        int minute;
        int second;
};

#endif

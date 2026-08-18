
#ifndef LOGENTRY_H
#define LOGENTRY_H

#include <string>
#include "Date.h"

enum ErrorCode {
    NOTICE = 0,
    ERROR = 1,
    WARNING = 2,
    
};

class LogEntry {
    public:

    private:
        Date timestamp;
        ErrorCode errorType;
        std::string message;

};

#endif 
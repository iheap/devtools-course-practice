// Copyright 2017 Ivan Kuchkov

#ifndef MODULES_ARITHMETIC_PARSER_INCLUDE_ARITHMETIC_CALCULATOR_H_
#define MODULES_ARITHMETIC_PARSER_INCLUDE_ARITHMETIC_CALCULATOR_H_

#include <utility>
#include <iostream>

class ArithmeticCalculator
{
 public:
    enum ReturnCodes {
        RESULT_SUCESS = 0,
        RESULT_BAD_ARGUMENTS,
        RESULT_ERROR_PARSING
    };
    ArithmeticCalculator() = default;
    int operator()(int argc, const char *const *argv) const;

    static std::pair<bool, double> TryParseDouble(const char *s);
    static void PrintHelp(const char *appname, std::ostream *ofs);
    static std::ostream& PrintError(const char* appname);
};

#endif  // MODULES_ARITHMETIC_PARSER_INCLUDE_ARITHMETIC_CALCULATOR_H_

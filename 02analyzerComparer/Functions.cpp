#include <iostream>
#include <iomanip>
#include <sstream>
#include "Analyst.h"

std::stringstream printAnalystsName(std::vector<Analyst> & list) {
    std::stringstream ss;
    ss << "Analyst Comparison\n\n";
    ss << "Investors\n";
    ss << "---------\n";
    for (int i = 1; i <= list.size(); i++) {
        ss << "#" << i << ": " << list[i - 1].getName() << std::endl;
    }
    ss << std::endl;
    return ss;
}

std::stringstream overallPerformance(std::vector<Analyst> & list) {
    std::stringstream ss;
    ss << std::setprecision(2);
    ss << "Overall Perfomance\n";
    ss << "------------------\n";

    for (int i = 0; i < 6; i++) {
        switch (i){
            case 0:
                ss << "               ";
                for (int j = 1; j <= list.size(); j++)
                    ss << "|    #" << j << "    ";
                ss << "\n";
                break;
            case 1:
                ss << "---------------";
                for (int j = 1; j <= list.size(); j++)
                    ss << "|----------";
                ss << "\n";
                break;
            case 2:
                ss << "D (days)       ";
                for (int j = 1; j <= list.size(); j++)
                    ss << "|          ";
                ss << "\n";
                break;
            case 3:
                ss << "Seed Amount($) ";
                for (int j = 1; j <= list.size(); j++)
                    ss << "|" << std::setfill(' ') << std::setw(10) << j;
                ss << "\n";
                break;
            case 4:
                ss << "TPL ($)        ";
                for (int j = 1; j <= list.size(); j++)
                    ss << "|" << std::setfill(' ') << std::setw(10) << j;
                ss << "\n";
                break;
            case 5:
                ss << "PLPD ($/day)   ";
                for (int j = 1; j <= list.size(); j++)
                    ss << "|" << std::setfill(' ') << std::setw(10) << j;
                ss << "\n";
                break;
        }
    }
    return ss;
}
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include "Analyst.h"
#include "Functions.h"


int main(int argc, char* argv[])
{
    std::stringstream ss;
    std::vector<Analyst> analysts;

    for (int i = 2; i < argc; ++i) {
        Analyst temp(argv[i]);
        analysts.push_back(temp);
    }
    std::ofstream oFile(argv[1]);
    oFile << printAnalystsName(analysts).str();
    oFile << overallPerformance(analysts).str();


    oFile.close();
}

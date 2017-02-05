#include <fstream>
#include <string>
#include "Analyst.h"

Analyst::Analyst(char *argc) {
    std::ifstream iFile (argc);
    std::getline(iFile, name);
    std::getline(iFile, initials);
    iFile >> days >> seedMoney >> records;
    iFile.ignore();
    for (int i = 0; i < records; i++) {
        saleRecord temp;
        std::string line;

        std::getline(iFile, temp.symbol, ',');

        std::getline(iFile, line, ',');
        temp.quantity = std::stoi(line);

        std::getline(iFile, line, ',');
        temp.purchaseDate = std::stoi(line);

        std::getline(iFile, line, ',');
        temp.purchasePrice = std::stoi(line);

        std::getline(iFile, line, ',');
        temp.purchaseFee = std::stoi(line);

        std::getline(iFile, line, ',');
        temp.saleDate = std::stoi(line);

        std::getline(iFile, line, ',');
        temp.salePrice = std::stoi(line);

        std::getline(iFile, line);
        temp.saleFee = std::stoi(line);

        salesRecord.push_back(temp);
    }
    iFile.close();
}

std::string Analyst::getName() { return name; }

double Analyst::totalProfitLoss()

}
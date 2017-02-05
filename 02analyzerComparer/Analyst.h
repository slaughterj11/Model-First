#include <vector>

#ifndef INC_02MODELFIRST_CODESECOND_ANALYST_H
#define INC_02MODELFIRST_CODESECOND_ANALYST_H

class Analyst {
public:
    Analyst(char *argc);

    std::string getName() ;

    double totalProfitLoss();

private:
    std::string name, initials;
    int days, seedMoney, records;

    struct saleRecord{
        std::string symbol;
        int quantity,
                purchaseDate,
                purchasePrice,
                purchaseFee,
                saleDate,
                salePrice,
                saleFee;
    };
public:
    std::vector<saleRecord> salesRecord;
};

#endif //INC_02MODELFIRST_CODESECOND_ANALYST_H
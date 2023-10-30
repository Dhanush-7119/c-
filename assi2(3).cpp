#include <iostream>
class PlasticTransaction {
private:
    double costPrice;
    double sellingPrice;
public:
    PlasticTransaction() {
        costPrice = 10.0;  
        sellingPrice = 12.0;  
    }
    double calculateEarnings() {
        double costPriceInDollars = costPrice * 1.3; 
        double earnings = sellingPrice - costPriceInDollars;
        return earnings;
    }
};
int main() {
    PlasticTransaction kiranTransaction;
    double earnings = kiranTransaction.calculateEarnings();
    std::cout << "Kiran earned $" << earnings << " by selling 1 kg of plastic." << std::endl;
    return 0;
}


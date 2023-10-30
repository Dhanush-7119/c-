#include <iostream>
class Bus {
private:
    int capacity;
public:
    Bus(int cap) {
        capacity = cap;
    }
    int calculateBusesNeeded(int children) {
        int busesNeeded = children / capacity;
        if (children % capacity != 0) {
            busesNeeded++;
        }
        return busesNeeded;
    }
};
int main() {
    int children, capacity;
    std::cout << "Enter the number of children: ";
    std::cin >> children;
    std::cout << "Enter the capacity of one bus: ";
    std::cin >> capacity;
    Bus bus(capacity);
    int busesNeeded = bus.calculateBusesNeeded(children);
    std::cout << "You will need " << busesNeeded << " bus(es) to carry " << children << " children." << std::endl;
    return 0;
}


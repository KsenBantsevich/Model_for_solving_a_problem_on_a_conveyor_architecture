

#include "Conveyer.h"

int main() {
    vector<int> one{ 34,54, 47, 63,51,45,47,55,51 };
    vector<int> two{ 51,39, 35, 50 ,34,50,45,54,63};
    auto Dx = new Conveyer;
    Dx->calculate(one, two);
}

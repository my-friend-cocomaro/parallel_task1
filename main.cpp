#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <cstdint> // uint32_t
#include <vector>
#include <numeric> // accumulate

#define GLOBAL_COUNT 10000000
#define PI M_PI

int main(){
    double step = (2*PI) / GLOBAL_COUNT;

    std::vector<YOUR_TYPE> mass;
    mass.reserve(GLOBAL_COUNT);
    double i{};
    for (size_t j = 0; j < GLOBAL_COUNT; j++){
        mass.push_back(YOUR_TYPE(sin(i)));
        i += step;
    }
//    std::cout << mass.size() << std::endl;
    std::cout << accumulate(mass.begin(),mass.end(),YOUR_TYPE(0)) << std::endl;
    return 0;
}

// добавить в переменную среды mingw/bin/make
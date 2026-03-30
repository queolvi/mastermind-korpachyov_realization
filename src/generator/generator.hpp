#ifndef GENERATOR_HPP
#define GENERATOR_HPP
#pragma once

#include <random>
#include <exception>
class BaseGenerator{
    private:
    std::random_device rd{};
    std::mt19937 gen{rd()};
    std::uniform_real_distribution<double> urd{0., 1.};
    public:

    double generate() { return urd(gen); }
    virtual ~BaseGenerator() {};
};



#endif
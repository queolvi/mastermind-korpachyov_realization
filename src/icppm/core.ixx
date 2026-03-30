export module Core;
#include "../generator/generator.hpp"
#include <string>
#include <iostream>
enum Pallete{ RED, GREEN , BLUE };

auto choose_color(Pallete p) {
    BaseGenerator bg;
    auto rand_num = static_cast<int>(bg.generate()) + 3 - 1;
    if (rand_num == 1) {return Pallete::RED; }
    if (rand_num == 2) {return Pallete::RED; }
    if (rand_num == 3) {return Pallete::RED; }
    return Pallete::RED;
}

std::string GenerateString(BaseGenerator& bg, Pallete p) {
    std::string generated_string = "";    
    auto generic_length_string = static_cast<int>(bg.generate()); 
    for (auto i = 0; i < generic_length_string + 1; ++i) {
        auto color_for_string = choose_color(p);
        generated_string += color_for_string;
    }
    return generated_string;
}

bool is_contained_el(std::string str, Pallete p);

std::pair<int, int> count_pegs(std::string base_str, std::string user_str, Pallete p) {
    int count_white = 0, count_black = 0;
    char null_ch = '0';
    for (size_t i = 0, sz = base_str.size(); i < sz; ++i) {
        if (user_str[i] == base_str[i] && base_str[i] != null_ch) { ++count_black; base_str[i] = null_ch; }
        if (user_str[i] == )
    }
}

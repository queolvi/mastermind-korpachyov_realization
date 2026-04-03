export module Core;

import <random>;
import <exception>;
import <string>;
import <iostream>;  


export class BaseGenerator {
private:
    std::random_device rd{};
    std::mt19937 gen{ rd() };
    std::uniform_real_distribution<double> urd{ 0., 1. };
public:

    double generate() { return urd(gen); }
    virtual ~BaseGenerator() {};
};
export enum Pallete { RED, GEEN, BLUE };
export std::string generate_string(BaseGenerator& bg) {
    size_t length_str = 0;
    std::string res = "";
    double U = bg.generate();
    length_str = U * 10 - 1;
    if (length_str <= 2) { length_str += 3; }
    for (size_t i = 1; i < length_str; ++i) {
        int symbol_choose = (3 * U);
        switch (symbol_choose) {
        case 1: res += "R";
        case 2: res += "G";
        case 3: res += "B";
        }
    }
    return res;
}
export bool run_to_find_el(std::string& base_str, char el) {
    for (size_t i = 0; i < base_str.length(); ++i) {
        if (el == base_str[i]) { return true; }
    }
    return false;
}
export bool is_user_win(std::vector<std::pair<int, int>>& vec) {
    if ()
}
export void game(const int attempts, std::string& base_str) {
    std::string user_answ;
    std::vector<bool> is_user_guessed(attempts);
    std::vector<std::pair<int, int>> game_scores;
    std::pair<int, int> game_scores_;
    int white_geps = 0, black_geps = 0;
    char el_tmp;
    for (size_t i = 0; i < attempts; ++i) {
        std::cin >> user_answ;
        for (size_t i = 1; i < base_str.length() + 1; ++i) {
            if (user_answ[i] == base_str[i]) { ++black_geps;  }
            else if (run_to_find_el(base_str, static_cast<char>(user_answ[i])) == true) { white_geps++; }
            else {}
            game_scores_.first = black_geps;
            game_scores_.second = white_geps;
        }
        game_scores.push_back(game_scores_);
    }
    if (is_user_win(game_scores) == false) {
        std::cout << "You lose\n";
        return;
    }
    else {
        std::cout << "You win\n";
        return;
    }
}
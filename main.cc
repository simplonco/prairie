#include <iostream>
#include <string>

int main(void) {
    std::string test = "j'adore les pizzas 4 fromages";
    for (int i = test.size() - 1; i >= 0; --i) {
        test[i] = test[i] + 1;
    }
    std::cout << test << std::endl;
}

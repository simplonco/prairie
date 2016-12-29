# 01

## Algorithm

```cpp
#include <iostream>
#include <string>

int main(void) {
    std::string test = "*********";
    for (int i = 0; i < test.size(); ++i) {
        test[i] = test[i] - 1;
    }
    std::cout << test << std::endl;
}
```

## Crypted message

```
rhloknmbn
```

# 02

## Algorithm

```cpp
#include <iostream>
#include <string>

int main(void) {
    std::string test = "*******************************";
    for (int i = 0; i < test.size(); ++i) {
        test[i] = test[i] + 1;
    }
    std::cout << test << std::endl;
}
```

## Crypted message

```
k(bepsf!mft!dppljft!bv!dipdpmbu
```

# 03

## Algorithm

```cpp
#include <iostream>
#include <string>

int main(void) {
    std::string test = "*****************************";
    for (int i = test.size() - 1; i >= 0; --i) {
        test[i] = test[i] + 1;
    }
    std::cout << test << std::endl;
}
```

## Crypted message

```
k(bepsf!mft!qj{{bt!5!gspnbhft
```

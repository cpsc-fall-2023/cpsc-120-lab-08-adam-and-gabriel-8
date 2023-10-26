// Gabriel Mora
// gmora05@csu.fullerton.edu
// @g-mora5
// Partners: @WhiteBoyHabibi

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char *argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() < 2) {
    std::cout << "Error: you must supply at least one number";
    return 1;
  }

  float sum{0.000000};

  bool word{true};
  for (std::string &num : arguments) {
    if (word) {
      word = false;
    } else {
      sum = sum + std::stod(num);
    }
  }

  std::cout << "average = " << sum / (arguments.size() - 1);
  return 0;
}

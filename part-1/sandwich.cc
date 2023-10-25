// Gabriel Mora
// gmora05@csu.fullerton.edu
// @g-mora5
// Partners: @WhiteBoyHabibi

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char *argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() != 4) {
    std::cout << "Error: incorrect number of arguments";
    return 1;
  }

  std::string protein = arguments.at(1);
  std::string bread = arguments.at(2);
  std::string condiment = arguments.at(3);
  // TODO: Validate that the number of arguments is correct.
  // If not, print an error message and return a non-zero value.
  // TODO: Declare three std::string variables to hold the
  // protein, bread, and condiment input.
  // Initialize each variable with an element of the arguments vector
  // declared above.
  std::cout << "Your order: A " << protein << " sandwich on " << bread
            << " with " << condiment << ".";
  // TODO: Use cout to print output following the pattern
  // Your order: A *PROTEIN* sandwich on *BREAD* with *CONDIMENT*.
  // on its own line.

  return 0;
}

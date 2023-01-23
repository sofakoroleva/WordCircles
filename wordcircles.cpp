#include <iostream>
#include <vector>
#include <string>
#include <random>

std::vector<std::string> words = {"apple", "banana", "cherry", "date", "elderberry"};

int main() {
  std::random_device rd;
  std::mt19937 engine(rd());
  std::uniform_int_distribution<int> dist(0, words.size()-1);

  for (int i = 0; i < 5; i++) {
    std::cout << words[dist(engine)] << std::endl;
  }

  return 0;
}

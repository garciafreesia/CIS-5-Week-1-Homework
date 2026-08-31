#include <iostream>
#include <string>

// Assignment 1 — Your Name

int main() {
  std::string name;
  int years = 0;
  std::cout << "First name: ";
  std::cin >> name;
  std::cout << "Years coding goal: ";
  std::cin >> years;
  std::cout << "\nHello, " << name << "!\n";
  std::cout <<"\nMy Timeline:\n";
  std::cout << "In 1 year, I want to get better at coding.\n";
  std::cout << "In 3 years, I hope to have graduated with a Bachelor's Degree in Data Sciecnce.\n";
  std::cout << "In 5 years, I want to have a good paying job as a Healthcare Data Analyst.\n";
  std::cout << "In 7 years, I hope to have a successful career and my own house.\n";
  std:cout << "\nMy coding goal is " << years << "year(s).\n";

  return 0;
}

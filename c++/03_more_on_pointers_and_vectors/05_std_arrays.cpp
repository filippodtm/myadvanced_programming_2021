//STD ARRAYS live in stack, are a better replacement for static arrays
#include <array>
#include <iostream>

// è come fare questo
// template <class T, std::size_t N>    
// struct array;

template <typename T, std::size_t N>
void print_array_two(const std::array<T, N>& a); //passing a by reference
template <typename T>
void print_array_one(const T& a);



int main() {
  std::array<int, 4> a{1, 2, 3, 4};
  std::array<int, 4> b{a};  //I can copy element-wise from another std::array
                            // this is not possible with plain built-in arrays
  b = a;
  for (auto x : a)   //x è elemento di a (o meglio, è una reference)
    std::cout << x << " ";
  std::cout << std::endl;

  for (auto x : b)
    std::cout << x << " ";
  std::cout << std::endl;

  a[0] = 0;  // same subscripting operator without bound checking

  for (const auto x : a)
    std::cout << x << " ";
  std::cout << std::endl;
  for (const auto x : b)
    std::cout << x << " ";
  std::cout << std::endl;

  for (auto& x : a)
    x *= 10;

  for (auto i = 0u; i < a.size(); ++i)
    std::cout << "a[" << i << "] = " << a[i] << std::endl;

  print_array_two(a);
  b.at(90);  // bound checking at run-time with .at

  return 0;
}


template <typename T, std::size_t N>
void print_array_two(const std::array<T, N>& a) {
  for (const auto& x : a)   //usa ref perchè il type T potrebbe essere pesante
    std::cout << x << " ";
  std::cout << std::endl;}

template <typename T>
void print_array_one(const T& a) {  //qui T = std::array
  for (const auto& x : a)
    std::cout << x << " ";
  std::cout << std::endl;
}

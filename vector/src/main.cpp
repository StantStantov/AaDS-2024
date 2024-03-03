#include <iostream>
#include <memory>

namespace ibr
{
  template <class T> 
  class vector
  {
  private:
    std::unique_ptr<T[]> array_ = nullptr;
    size_t size_ = 0;
    size_t length_ = 0;
  public:
    vector();
    vector(const vector&);
    vector(vector&&);
    vector& operator=(const vector&);
    vector& operator=(vector&&);
    ~vector();
  };
} // namespace ibr

int main()
{
  std::cout << "test\n";
  return 0;
}

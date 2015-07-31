#ifndef TEST_HPP
#define TEST_HPP

#include <vector>

template <typename T, template<typename U, typename... Args> class ArrayType = std::vector>
class Test {
public:
    Test() : c{ArrayType<T>{}} {}
    Test(const ArrayType<T>& ct) : c{ct} {}
    
    const ArrayType<T> get_data() const {
        return c;
    }
    
    const T& operator[](size_t i) {
        return c[i];
    }
    
private:
    ArrayType<T> c;
};

#endif // TEST_H
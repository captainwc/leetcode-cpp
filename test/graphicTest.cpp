//
// Created by shuaikai on 24-2-25.
//

#include "graphic/graphic.h"
#include "utils/utils.h"

int main() {
    // 字符串输出
    auto matrix1 = get_vector_2d(5, 30);
    auto matrix2 = get_vector_2d(5, 5);
    show_graphic(matrix1, PRINT_INT);
    std::cout << std::endl;
    show_graphic(matrix2, PRINT_CHAR_PIVOT);
    return 0;
}

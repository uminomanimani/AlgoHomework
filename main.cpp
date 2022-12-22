#include "Datastructure.h"
#include "stdafx.h"
#include "Solution.h"
#include "Dataset.h"

/// @brief 主函数哈哈哈哈哈哈哈
/// @param argc 命令行参数的个数，没什么用
/// @param argv 命令行参数，没什么用
/// @return 返回给操作系统，要不是0就看看代码哪里crash了
int main(int argc, char** argv)
{
    for (auto& x : datasets)
    {
        std::cout << x.first << ":" << std::endl;
        auto boxes = transform(x.second);
        firstFit(boxes, 587, 233, 220, false);
    }
    return 0;
}
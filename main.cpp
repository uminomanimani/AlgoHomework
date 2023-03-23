#include "headers/Datastructure.h"
#include "headers/stdafx.h"
#include "headers/Solution.h"
#include "headers/Dataset.h"

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
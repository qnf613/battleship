#include "logic.h"
#include <cstdlib>
#include <iostream>

int main() {
    bool **b = create_board(6, 6);
    place_ships(b, 3, 6, 6);
        
    Coordinates *test = find_ships(b, 6, 6, 3);
    std::cout << "Found ship at " << test->x << ", " << test->y << std::endl;

    destroy_board(b, 6);
}
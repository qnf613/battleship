#pragma once
#include <string>

struct Coordinates {
  int x, y;
};

enum ResponseType { HIT, MISS, NEAR_MISS };

/// Board Initializer
bool **create_board(const int width, const int height);

/// Board Destructor
void destroy_board(bool **board, const int height);

// place ships function
void place_ships(bool **board, const int ship_count, const int width, const int height);

// find ships function
Coordinates *find_ships(bool **board, const int width, const int height, const int ship_count);

ResponseType guess(bool **board, const int height, const int width, const int x, const int y);

//for debugging guess()
std::string ResponseOut(ResponseType r);

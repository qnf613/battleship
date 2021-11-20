CC = g++
CFLAGS = -I. -Wall -g -Wextra -Werror -pedantic -std=c++11 -fbounds-check
DEPS = logic.hpp
OBJ =  main.o logic.o

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

app: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean
clean:
	rm *.o app
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Werror -Wpedantic

all: main

main: test.o
	$(CXX) $(CXXFLAGS) test.o -o main

test.o: test.cpp
	$(CXX) $(CXXFLAGS) -c test.cpp

clean:
	rm test.o main
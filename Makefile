SRC = main.cpp

all: $(SRC)
	$(CXX) $< -o test -std=c++14 -O2
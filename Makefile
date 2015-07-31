INC = Catch/include
SRC = main.cpp

all: $(SRC)
	$(CXX) $< -o test -std=c++11 -O2 -I $(INC)
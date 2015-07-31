INC = Catch/include
SRC = main.cpp

all: $(SRC)
	$(CXX) $< $(CXX_FLAGS) -o test -std=c++11 -O2 -I $(INC)
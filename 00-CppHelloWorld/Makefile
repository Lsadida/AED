SOURCE = hello.cpp
BIN = hello
OBJ = hello.o
CXX = g++
CXXFLAGS = -std=c++20

$(BIN): $(OBJ)
	$(CXX) $(OBJ) -o $(BIN) $(CXXFLAGS)
	
run: $(BIN)
	$(BIN)
	
$(OBJ): $(SOURCE)
	$(CXX) -c $(SOURCE) -o $(OBJ) $(CXXFLAGS)

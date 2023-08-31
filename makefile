
CXX = g++
# Compiler flags
CXXFLAGS = -Wall -Wextra -std=c++11
DEBUG_FLAGS = -g

OPTIMIZE_FLAGS = -O3

# Source files
SRC = a1.cpp

DEBUG_BIN = debug_binary
OPTIMIZE_BIN = optimize_binary

# Default target
all: debug optimize

debug: $(SRC) $(HEADER)
	$(CXX) $(CXXFLAGS) $(DEBUG_FLAGS) $(SRC) -o $(DEBUG_BIN)

optimize: $(SRC) $(HEADER)
	$(CXX) $(CXXFLAGS) $(OPTIMIZE_FLAGS) $(SRC) -o $(OPTIMIZE_BIN)


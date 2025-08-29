CXX = g++
CXXFLAGS = -std=c++17 -Wall
TARGET = BANK_PRJ_TEST

SRC = main.cpp\
	  Cust_Data/Cust_Data.cpp

all : $(TARGET)

$(TARGET) : $(SRC)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(TARGET)
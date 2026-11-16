CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -Iinclude
SRC = $(wildcard src/*.c)
TARGET = programa

.PHONY: all clean
all: $(TARGET)

$(TARGET): $(SRC) $(wildcard include/*.h)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET) $(TARGET).exe

CC = gcc
CCFLAGS = -Oz
TARGET = pure
SOURCE = $(TARGET).c

all: $(TARGET)

$(TARGET): $(SOURCE)
	$(CC) $(CCFLAGS) $(SOURCE) -o $(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all clean

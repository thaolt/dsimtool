CC      = gcc
CFLAGS  = -g
LIBS    = -lserialport

TARGET  = dsimtool

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) $(LIBS) -o $(TARGET) $(TARGET).c

clean:
	$(RM) $(TARGET)
	$(RM) *.o

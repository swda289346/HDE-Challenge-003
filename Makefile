PROG = square
RM = rm -rf
CFLAGS = -std=gnu99

.phony: all clean

all: $(PROG)

clean:
	$(RM) $(PROG)


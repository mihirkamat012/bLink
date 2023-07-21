
CC = gcc

CFLAGS_DIALECT_STRICT = -Wall -Wextra -Werror

CFLAGS_DEBUG = -g

CFLAGS_RELEASE = -O2 

all: debug release

debug:
	$(CC) $(CFLAGS_DIALECT_STRICT) $(CFLAGS_DEBUG) *.c -o bin/deb/blink

release:
	$(CC) $(CFLAGS_DIALECT_STRICT) $(CFLAGS_RELEASE) *.c -o bin/rel/blink

clean:
	rm bin/*/blink

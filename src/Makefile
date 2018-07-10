all: test test2 test3

CC     = gcc
CFLAGS = -I/usr/local/include/freetype2 -I/usr/include/freetype2 -I/usr/include -Werror
LIBS   = -lfreetype

test: test.cc
	$(CC) $(CFLAGS) $< $(LIBS) -o $@
	strip $@

test2: test2.cc
	$(CC) $< -o $@
	strip $@

test3: epd_driver.cc test3.cc
	$(CC) $^ -o $@ -lwiringPi
	strip $@
clean:
	rm -f test test2 test3

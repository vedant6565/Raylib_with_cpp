CFLAGS = -DUSE_WAYLAND_DISPLAY=TRUE
LDFLAGS = -lraylib -lGL -lm -lpthread -ldl -lrt

a.out: main.cpp
	g++ ${CFLAGS} main.cpp ${LDFLAGS}

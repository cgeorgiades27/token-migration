CC = g++-10
CFLAGS = -Wall -Wextra -Iinclude -std=c++20

SRCDIR = src
INCDIR = include
BUILDDIR = build
TARGET = migration.x

SRCS = $(wildcard $(SRCDIR)/*.cpp)
OBJS = $(patsubst $(SRCDIR)/%.cpp, $(BUILDDIR)/%.o, $(SRCS))
DEPS = $(wildcard $(INCDIR)/*.h)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) $^ -o $@

$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp $(DEPS)
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@

.PHONY: clean

clean:
	rm -f $(OBJS) $(TARGET)

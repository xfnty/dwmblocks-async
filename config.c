#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
    {"dwmblocks-memory",    3,      0},
    {"dwmblocks-backlight", 0,      1},
    {"dwmblocks-time",      1,      0},
    {"dwmblocks-battery",   60,     0},
};

const unsigned short blockCount = LEN(blocks);

#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
//    {"dwmblocks-memory",  10,   1 },
    {"dwmblocks-time",    1,    2},
    {"dwmblocks-backlight",    3,    4},
    {"dwmblocks-battery",    60,    3},
};

const unsigned short blockCount = LEN(blocks);

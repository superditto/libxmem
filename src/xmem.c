#include <stdint.h>

uint8_t togglebit(uint8_t* byte, uint8_t pos) {
    *byte |= (1 << pos);
    return *byte;
}

uint8_t getbit(uint8_t* byte, uint8_t pos) {
    if (pos < 0 || pos > 7)
        return 0;
    return (*byte & (1 << pos)) != 0;
}

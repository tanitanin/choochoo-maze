#pragma once

#include <vector>

namespace choochoo::maze {

    class bitarray;

    class MazeData {
    public:
        MazeData(const size_t width, const size_t height);
    private:
        const size_t width;
        const size_t height;
        std::vector<bitarray> vertical_walls;
        std::vector<bitarray> horizontal_walls;
    };

    class bitarray {
    public:
        bitarray(size_t size = 0);
        bool operator[](const size_t index);
    private:
        struct bitfield {
            union {
                unsigned char d;
                struct {
                    bool w0: 1;
                    bool w1: 1;
                    bool w2: 1;
                    bool w3: 1;
                    bool w4: 1;
                    bool w5: 1;
                    bool w6: 1;
                    bool w7: 1;
                };
            };
        };
        std::vector<bitfield> data;
    };

}

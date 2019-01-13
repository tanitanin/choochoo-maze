#include "choochoo-maze/mazedata.h"

namespace choochoo::maze {
   
    MazeData::MazeData(const size_t width, const size_t height)
    : width(width), height(height) {
        
    }

    bitarray::bitarray(size_t size) : data((size / 8) + 1) {}
    
    bool bitarray::operator[](const size_t index) {
        switch (index % 8) {
            case 0: return data[index / 8].w0;
            case 1: return data[index / 8].w1;
            case 2: return data[index / 8].w2;
            case 3: return data[index / 8].w3;
            case 4: return data[index / 8].w4;
            case 5: return data[index / 8].w5;
            case 6: return data[index / 8].w6;
            case 7: return data[index / 8].w7;
        }
    }

}

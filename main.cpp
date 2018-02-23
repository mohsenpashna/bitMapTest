#include <iostream>
#include "../bitMap/cmake-build-debug/source/bitmap_image.hpp"
#include <string>

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;

            const unsigned int dim = 1000;

        bitmap_image image(512,512);

        cout << " Image pixel count: " << image.pixel_count() << flush;
//    checkered_pattern(64,64,220,bitmap_image::red_plane,image);
    image.clear();

    double c1 = 0.9;
    double c2 = 0.5;
    double c3 = 0.3;
    double c4 = 0.7;

    srand(0xA5AA5AA);
    plasma(image,0,0,image.width(),image.height(),c1,c2,c3,c4,3.0,jet_colormap);
    /*
        for (unsigned int x = 0; x < 640; ++x)
        {
            for (unsigned int y = 0; y < 480; ++y)
            {
//                rgb_t col = jet_colormap[(x + y) % dim];
//                image.set_pixel(x,y,col.red,col.green,col.blue);

            }
        }

        */

//        image.
        image.save_image("test09_color_map_image.bmp");


    return 0;
}
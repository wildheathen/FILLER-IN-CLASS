#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image_write.h"
#include <stdio.h>

#define __STDC_LIB_EXT1__

int main()
{
    const char* binaries_path = "C:\\Users\\david\\RiderProjects\\FILLER-IN-CLASS\\x64\\Debug\\";
    
    const char* file_name = "C:\\Users\\david\\RiderProjects\\FILLER-IN-CLASS\\x64\\Debug\\red16x16.png";
    int width, height, channels;
    
    unsigned char* data = stbi_load(file_name,&width,&height, &channels, 0);

    printf("width : %d, height: %d, channels: %d \n", width, height, channels);
    int size = width * height * channels;
    printf("size: %d\n", size);

    //stbi_image_free(data);
    
    stbi_write_png("C:\\Users\\david\\RiderProjects\\FILLER-IN-CLASS\\x64\\Debug\\newfile16x16.png", width, height, channels, data, 0);
    
    return 0;
}
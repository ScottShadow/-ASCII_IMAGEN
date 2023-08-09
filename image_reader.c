#include <stdio.h>
#include <stdlib.h>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image/stb_image.h"

#define NUM_CHARACTERS 9
#define CHARACTER_MAPPING ".0#*+=-:@ "

int main()
{
    printf("Welcome to ASCII_IMAGEN\n");

    // Load image
    int width, height, channels;
    unsigned char *img = stbi_load("1286409.jpg", &width, &height, &channels, 0);
    if (img == NULL)
    {
        printf("Error loading the image\n");
        exit(1);
    }
    printf("Loaded image with a width of %dpx, a height of %dpx, and %d channels\n", width, height, channels);

    // Console dimensions
    int consoleWidth = 80;  // Adjust based on your console's width
    int consoleHeight = 24; // Adjust based on your console's height

    // Calculate scaling factors
    double xScale = (double)width / consoleWidth;
    double yScale = (double)height / consoleHeight;

    // file output
    FILE *outputFile = fopen("output.txt", "w");
    if (outputFile == NULL)
    {
        printf("Error opening output.txt for writing\n");
        exit(1);
    }

    // Generate ASCII art and display
    for (int y = 0; y < consoleHeight; y++)
    {
        for (int x = 0; x < consoleWidth; x++)
        {
            int imageX = (int)(x * xScale);
            int imageY = (int)(y * yScale);
            int pixel_offset = (imageY * width + imageX) * channels;
            unsigned char r = img[pixel_offset];
            unsigned char g = img[pixel_offset + 1];
            unsigned char b = img[pixel_offset + 2];
            unsigned char intensity = (r + g + b) / 3;

            // Map intensity to character based on ranges
            int range = intensity * NUM_CHARACTERS / 255;
            printf("%c", CHARACTER_MAPPING[range]);
            fputc(CHARACTER_MAPPING[range], outputFile);
        }
        fputc('\n', outputFile);
        printf("\n");
    }

    stbi_image_free(img); // Free image data

    fclose(outputFile); // Close the output file

    return 0;
}

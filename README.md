# ASCII Image Viewer Documentation

## Table of Contents

1. Introduction
2. Installation
3. Usage
4. Features
5. Configuration
6. Troubleshooting
7. Contributing
8. License

## 1. Introduction

The ASCII Image Viewer is a simple command-line application that allows you to view images in the console using ASCII characters. It converts the color intensity of each pixel in an image to a corresponding ASCII character, creating a visual representation of the image. This documentation provides information on how to install, use, and configure the application.

## 2. Installation

To use the ASCII Image Viewer, follow these steps:

1. Clone or download the repository to your local machine.
2. Ensure you have the `stb_image` library included in the project directory. You can find it at https://github.com/nothings/stb.
3. Compile the source code using a C compiler. For example:
   ```
   gcc ascii_image_viewer.c -o ascii_image_viewer -lm
   ```

## 3. Usage

To use the ASCII Image Viewer, follow these steps:

1. Under the load image comment, you can replace the "image_name" with the name of your image, make sure the image is in the same directory
2. The application will load the image, convert it to ASCII art, and display the result in the console and make an output.txt file
3. image_reader2 is my attempt at using a gui library for improved UX, still under development

## 4. Features

- Displays images as ASCII art in the console.
- Supports grayscale and color images.
- Saves the generated ASCII art to an output text file.

## 5. Configuration

You can configure the following parameters in the `imager_reader.c` file:

- `NUM_CHARACTERS`: The number of characters in the `CHARACTER_MAPPING` array. You can adjust this to change the granularity of the intensity mapping.
- `CHARACTER_MAPPING`: An array of characters used to represent different intensity levels. You can modify this array to use characters that suit your aesthetic preferences.

## 6. Troubleshooting

- If you encounter any errors related to missing dependencies, make sure you have the `stb_image` library included in the project directory.

## 7. Contributing

Contributions to the ASCII Image Viewer are welcome! If you find issues or have suggestions for improvements, feel free to create a pull request or submit an issue on the project's repository.

## 8. License

This project is licensed under the [MIT License](LICENSE).

---

Feel free to customize this documentation to match your project's details and specifications. Additionally, you might want to include sections like "Examples" or "Frequently Asked Questions" to provide more detailed information to users.

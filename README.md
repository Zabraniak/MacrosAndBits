# Macros and Bits

![C](https://img.shields.io/badge/C-v3.7%2B-blue)
![License](https://img.shields.io/badge/license-MIT-green)

## Table of Contents

- [Description](#description)
- [Prerequisites](#prerequisites)
- [Usage](#usage)
- [Screenshots](#screenshots)
- [Contributing](#contributing)
- [License](#license)
- [Info](#info)

## Description

Designed to perform binary bit manipulation on an integer. It provides a menu-driven interface that allows the user to toggle, set, or clear individual bits within an integer. Additionally, it can display the binary representation of the integer and the integer value itself.

The program utilizes predefined macros and logic to simplify bit manipulation operations, making it a handy tool for visualizing and manipulating binary data.

## Prerequisites

Before running the application, you'll need to have the following installed:

A C compiler (e.g., GCC)
Standard C libraries

## Usage

1. Clone the repository:

   ```sh
   git clone https://github.com/Zabraniak/MacrosAndBits.git

2. Compile the C program:

   ```sh
   gcc -o binary_manipulation main.c

3. Run the program:

   ```sh
   ./binary_manipulation

4. Follow the on-screen instructions to provide an integer input and select bit manipulation options. The program will guide you through the process of toggling, setting, clearing bits, and displaying binary representations.

5. Exit the program by selecting the appropriate option in the menu.

## Screenshots

| TOGGLE | SET |
| ----- | ----- |
| ![MacrosAndBitsTOGGLE](https://i.imgur.com/Av8bX1r.png) | ![MacrosAndBitsSET](https://i.imgur.com/iEhqK39.png) |

| CLEAR | SHOW |
| ----- | ----- |
| ![MacrosAndBitsCLEAR](https://i.imgur.com/3PeCzJP.png) | ![MacrosAndBitsSHOW](https://i.imgur.com/9nt2qua.png) |

## Contributing
Contributions are welcome! If you have any improvements or new features to add, feel free to fork this repository, make your changes, and submit a pull request.

## License
This project is licensed under the MIT License.

## Info
This project can help people understand how bits: setting/clearing/toggling works or how a number can be described by a binary system. It uses macros to do almost everything - it's not necessary but it was more interesting to implement it this way. The nice addition is a loading bar that imitates the "processing" progress.

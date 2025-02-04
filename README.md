# File Organizer

A simple **C++** program that organizes files into folders based on their extensions (e.g., `.txt`, `.jpg`, `.mp3`). It helps keep your directories tidy and your files organized.

### Features

- Organizes files by extension (e.g., `.txt` → **TextFiles**, `.jpg` → **Images**).
- Creates subdirectories if they don't exist.
- Moves files to corresponding folders.

### Supported File Types

- `.txt` - TextFiles
- `.jpg`, `.png`, `.jpeg` - Images
- `.mp3`, `.wav` - Music
- `.mp4`, `.mkv` - Videos
- `.pdf`,`.docx` - Documents

### Prerequisites

- **C++17** or later compiler (supports **`<filesystem>`** library).
- **Visual Studio**, **GCC**, or any C++17 compatible IDE.

### Getting Started

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/your-username/File-Organizer.git


2. **Set C++17 Standard**:
    In **Visual Studio**, follow these steps to set the C++17 standard:
    1. Go to **Project > Properties**.
    2. Under **C/C++**, navigate to **Language**.
    3. Select **C++ Language Standard** and choose **C++17** or **C++latest**.

3. **Compile & Run**:
    After setting up your project, compile and run the program using the following commands:

    ```bash
        g++ -std=c++17 -o file_organizer main.cpp
        ./file_organizer


### Example Output :
    MyDirectory/
        ├── TextFiles/
        │   └── document.txt
        ├── Images/
        │   └── image.jpg
        ├── Music/
        │   └── song.mp3
        └── Documents/
            └── report.pdf

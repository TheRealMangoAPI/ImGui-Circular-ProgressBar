# Circular ProgressBar made with ImGui

![Circular ProgressBar](https://github.com/TheRealMangoAPI/ImGui-Circular-ProgressBar/assets/108872008/1fa2bf3f-3bf4-4d61-b48f-0af53414f87a)

A customizable and stylish circular progress bar created with ImGui, perfect for displaying progress in your graphical user interface applications.

## Features

- Beautiful and smooth circular progress visualization.
- Customizable appearance to match your application's design.
- Easily integrate into your ImGui-based projects.

## Usage

To integrate the Circular ProgressBar into your ImGui project, follow these simple steps:

1. Clone or download this repository.
2. Include the necessary files in your ImGui project.
3. Add the Circular ProgressBar to your ImGui window by calling `CircularProgressBar()` with the appropriate parameters.
4. Customize the appearance and behavior as needed.

Here's a basic example of how to use the Circular ProgressBar in your code:

```cpp
#include "CircularProgressBar.h"

// ...

// Inside your ImGui render loop:

ImGui::Begin("My Window");

float progress = 0.75f; // Set your progress value here (0.0 to 1.0)
CircularProgressBar("CircularProgressBar", progress, ImVec2(100, 100), ImVec4(0.2f, 0.7f, 0.2f, 1.0f));

ImGui::End();

// ...

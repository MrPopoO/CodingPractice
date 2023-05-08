#include <cstdlib> // Required for the system() function
#include <string>
int main() {
    const char* url = "https://www.google.com";
    
    // Open the URL in the default web browser
    system(("open " + std::string(url)).c_str()); // For macOS
    // system(("start " + std::string(url)).c_str()); // For Windows
    
    return 0;
}

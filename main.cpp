#include <string>
#include <debug.h>
#include <unistd.h>


// If these two lines are here, the code doesn't work fine
// If you move these lines into main(), the code works fine
auto str = std::string("Hello1");
std::string str2 = "Hello2";

int main(int argc, char *argv[])
{   
    auto str3 = std::string("Hello3");
    init_scr(); // Initialize the debug screen
	scr_printf("\n\n\n STATIC INIT example!\n\n\n");
    scr_printf("---\n");
    scr_printf(str.c_str()); // Print nothing or lot of spaces
    scr_printf("\n---\n");
    scr_printf(str2.c_str()); // Print nothing or lot of spaces
    scr_printf("\n---\n");
    scr_printf(str3.c_str()); // Print "Hello3"
    while (true)
    {
        sleep(10);
    }
}

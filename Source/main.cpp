#include <string>
#include <pspkernel.h>
#include <pspdisplay.h>
// #include "psp/callbacks.h"

PSP_MODULE_INFO("PSP VARIABLE ISSUE", 0, 1, 0);
PSP_MAIN_THREAD_ATTR(THREAD_ATTR_USER);

// If these two lines are here, the code doesn't work fine
// If you move these lines into main(), the code works fine
auto str = std::string("Hello1");
std::string str2 = "Hello2";

int main(int argc, char *argv[])
{
    // SetupCallbacks();
    
    auto str3 = std::string("Hello3");
    pspDebugScreenInit(); // Initialize the debug screen
    pspDebugScreenPrintf("---\n");
    pspDebugScreenPrintf(str.c_str()); // Print nothing or lot of spaces
    pspDebugScreenPrintf("\n---\n");
    pspDebugScreenPrintf(str2.c_str()); // Print nothing or lot of spaces
    pspDebugScreenPrintf("\n---\n");
    pspDebugScreenPrintf(str3.c_str()); // Print "Hello3"
    while (true)
    {
        sceDisplayWaitVblankStart();
    }
}

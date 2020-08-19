//
//  main.cpp
//  cmd_line_tool
//
//  Created by Alexandru Chiculita on 8/19/20.
//

#include <fstream>

int main(int argc, const char** args) {
    if (argc != 2) {
        return -1;
    }

    // This is a lot more complicated on the actual build and
    // cannot be replaced with a command line argument.

    std::ofstream f(args[1]);
    f << "const char* get_arch() {\n"
         "    return \"";
#ifdef TARGET_ARM
    f << "ARM";
#endif
#ifdef TARGET_X86
    f << "x86";
#endif
    f << "\";\n"
         "}\n";
    f.close();

    return 0;
}

#include <iostream>
#include <fstream>
#include <string>

#include <mpss2015-version.h>
#include <ofextract/BroxOpticalFlow.h>

int main(int argc, char* argv[])
{
    std::cout << "Version: " << MPSS2015_VERSION << std::endl;

    if (argc == 4)
    {
        ofextract::BroxOpticalFlow* broxOpticalFlow = new ofextract::BroxOpticalFlow(
            argv[1],
            argv[2],
            atoi(argv[3])
            );

        broxOpticalFlow->runAll();
    } else {
        std::cout << "usage: <source_root_dir> <optical_flow_root_dir> <gpu_device>" << std::endl;

        //ofextract::BroxOpticalFlow* broxOpticalFlow = new ofextract::BroxOpticalFlow();

        //broxOpticalFlow->runAll();
    }
    return 0;
}

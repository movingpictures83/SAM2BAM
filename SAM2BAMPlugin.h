#ifndef SAM2BAMLUGIN_H
#define SAM2BAMPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class SAM2BAMPlugin : public Plugin
{
public: 
 std::string toString() {return "SAM2BAM";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif

#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "SAM2BAMPlugin.h"

void SAM2BAMPlugin::input(std::string file) {
 inputfile = file;
}

void SAM2BAMPlugin::run() {
   
}

void SAM2BAMPlugin::output(std::string file) {
 // alpha_diversity.py -i filtered_otu_table.biom -m observed_species,chao1,shannon,PD_whole_tree -t rep_set.tre -o alpha.txt
   //std::string command = "samtools sort " + inputfile + " > "+file;
	std::string command = "samtools view -Sb " + inputfile + " -o " + file;
	std::cout << command << std::endl;

 system(command.c_str());
}

PluginProxy<SAM2BAMPlugin> SAM2BAMPluginProxy = PluginProxy<SAM2BAMPlugin>("SAM2BAM", PluginManager::getInstance());

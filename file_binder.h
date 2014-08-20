#ifndef FILE_BINDER_H
#define FILE_BINDER_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <math.h>
#include <boost/foreach.hpp>
#include <boost/tokenizer.hpp>

class FileBinder
{
	public:
    void init(
        const std::string &img_name_file,
        const std::string &timestamp_file,
        const std::string &gps_file);
 
    void get_img_coord(std::vector<double> &img_lat,
        std::vector<double> &img_lon);
    void write_to_file(const std::string &file_name);

private:
	void read_images(const std::string &img_name_file);
	void read_timestamps(const std::string &timestamp_file);
	void read_gps(const std::string &gps_file);
    void relate_gps2img(const std::string &file_out);

    std::vector<std::string> img_names_;
    std::vector<double> img_times_;
    std::vector<double> gps_lon_;
    std::vector<double> gps_lat_;
    std::vector<double> gps_times_;
    std::vector<double> img_lon_;
    std::vector<double> img_lat_;

};

#endif //FILE_BINDER_H
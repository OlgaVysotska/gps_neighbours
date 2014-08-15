#ifndef GPS_NEIGHBOUR_H
#define GPS_NEIGHBOUR_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>


struct Database
{
    std::vector<std::string> img_names_;
    std::vector<double> timestamps_;
    std::vector<double> gps_lon_;
    std::vector<double> gps_lat_;

    void init(std::string img_name_file, std::string timestamp_file, std::string gps_file);

private:
	void read_images(std::string img_name_file);
	void read_timestamps(std::string timestamp_file);
	void read_gps(std::string gps_file);

};

#endif //GPS_NEIGHBOUR_H

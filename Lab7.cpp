#include <iostream>
#include <fstream>
#include <string>
#include <vector>

void saveToFile(const std::string& filename, const std::vector<std::string>& data) {
	std::fstream inp;
	inp.open(filename, std::ios::app);
	for (int i = 0; i < data.size(); ++i) {
		inp << data[i] << "\n";
	}
	inp.close();

}

int main() {

	std::string prom, filename;
	std::vector<std::string> data;
	std::cin >> filename;
	std::cin >> prom;

	while (prom != "0") {
		data.push_back(prom);
		std::cin >> prom;
	}

	saveToFile(filename, data);
}
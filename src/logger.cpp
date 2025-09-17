#include "logger.h"
#include <string>
#include <iostream>

// ======================= TODOs =======================

void addReading(const std::string& label, double value,
                std::string labels[], double values[],
                int& size, int capacity) {
	if(size == capacity){
		throw "Full";
	} else {
		labels[size] = label;
		values[size] = value;
		++size;
	}
    // TODO: throw "Full" if size == capacity, else insert and ++size
}

void updateValue(double* valuePtr, double newValue) {
    // TODO: write through pointer
    	*valuePtr = newValue;
}

void printReading(const std::string& label, const double& value) {
    // TODO: pretty-print one reading
    	std::cout << label << ": " << value << std::endl;
}

double average(const double values[], int size) {
    // TODO: throw "Empty" if size==0, else compute average
    	if(size==0){
		throw "Empty";
	}
	else{
		double sum = 0;
		for(double d: values){
			sum+=d;
		}
		return sum/size;
	}
    return 0.0;
}

double minValue(const double values[], int size) {
    // TODO: throw "Empty" if size==0, else compute min
    	if(size==0){
		throw "Empty";
	}
	else{
		double min = values[0];
		for(double d: values){
			if(d < min){
				min = d;
			}
		}
		return min;
	}
    return 0.0;
}

double maxValue(const double values[], int size) {
    // TODO: throw "Empty" if size==0, else compute max
    	if(size==0){
		throw "Empty";
	}
	else{
		double max = values[0];
		for(double d: values){
			if(d > max){
				max = d;
			}
		}
		return max;
	}
    return 0.0;
}

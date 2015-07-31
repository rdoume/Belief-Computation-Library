#ifndef _dsvector_h_
#define _dsvector_h_

#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <map>
#include <algorithm>

class DSVector
{
	public:
		DSVector(void);
		DSVector(int singletons);
		void debugOn(void);
		void debugOff(void);
		void getSingletons(void);
		int calFocalIndexAnyOrder(void);
		int calFocalIndexAscending(void);
		void fillingBeliefVecAnyOrder(void);
		void fillingBeliefVecAscending(void);
		void fillingPlausibilityVecAnyOrder(void);
		void fillingPlausibilityVecAscending(void);
		void fillingBeliefInvVecAnyOrder(void);
		void fillingBeliefInvVecAscending(void);
		void genRandomMassValues(void);
		void genIncreasingMassValues(void);
		double accessFocalElement(int index);
		double calBelief(void);
		double calPlausibility(void);
		void removeFocalEleSingleton(void);
		void addFocalEleSingleton(void);
		void printFocalElements(void);
		void printFocalElementsNormalized(void);
		void printSingletonVector(void);

	private:
		int no_singletons, no_sin_focalele, no_sin_belief, no_sin_plausibility;
		std::vector<std::string> singleton;                               // vector of singleton names
		std::vector<std::string>::iterator it_str;
		std::vector<int> belief_ele_vec;                             // integer value of singletons in a "belief"
		std::vector<int> plausibility_ele_vec;                       // integer value of singletons in a "plausibility"
		std::vector<int> belief_inv_ele_vec;                         // integer value of singletons in a "belief complement"
		std::vector<float> focal_element;                            // 1048576 focal elements from 20 singletons
		std::vector<int> focal_index;
		double normalize_const;
		bool debug;
		clock_t begin, end;
		double time_spent;
};

#endif //_dsvector_h_

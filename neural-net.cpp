//cpp-neural-net
#include<iostream>
#include<vector>
using namespace std;
class Neuron {};

typedef vector<Neuron> Layer;
class Net {
public:
	Net(vector<int> &topology);
	void feedForward(const vector<double> &inputVals) {};
	void backProp(const vector<double> &targetVals) {};
	void getResults(vector<double> &resultVals) {};
private: 
	vector<Layer> mLayers;
};
Net :: Net(vector<int> &topology) {
	for (int i = 0; i < topology.size(); i++) {
		mLayers.push_back(Layer());
		for (int j = 0; j <= topology[i]; j++) {
			mLayers.back().push_back(Neuron());
			cout << "Made a New Neuron\n";
		}
	}
}
int main() {

	// e.g .. {3,2,1} input layer ,Hidden layer,Output ayer
	vector<int> topology;
	topology.push_back(3);
	topology.push_back(2);
	topology.push_back(1);

	Net mNet(topology);
	vector<double> inputVals;
	mNet.feedForward(inputVals);

	vector<double> targetVals;
	mNet.backProp(targetVals);

	vector<double> resultVals;
	mNet.getResults(resultVals);
}

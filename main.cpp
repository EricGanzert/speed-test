    #include <algorithm>
    #include <vector>
    #include <chrono>
    #include <iostream>
     
    using namespace std;
     
    int main() {
     
    	vector<uint8_t> map(250000, 0u);
    	auto before = chrono::steady_clock::now();
     
    	any_of(map.cbegin(), map.cend(), [](const uint8_t val){return val > 0;});
     
    	auto after = chrono::steady_clock::now();
     
    	cout << "time elapsed: " << chrono::duration_cast<chrono::nanoseconds>(after - before).count() << " nanoseconds" << endl;
     
    	return 0;
    }
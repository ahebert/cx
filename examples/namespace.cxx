#include io

namespace std {
	int f(int i){
		return (i * 5);
	}
}

int main () {

	std::puts(std::f(3).to_str);

    return 0;
}
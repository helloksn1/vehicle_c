#include <stdio.h>

class Vehicle {
// The abstract base class
private:
	int numOfWheels;
public:
	Vehicle(int num) {
		numOfWheels = num;
	}
	virtual void Horn() = 0;
	void setNumOfWheels(int num) {
		numOfWheels = num;
	}
	int getNumOfWheels() {
		return numOfWheels;
	}
};

class Motorcycle: public Vehicle {
// Derived from abstract class
private:
	bool isElectricity;
public:
	Motorcycle(bool type = 0): Vehicle(2) {
		isElectricity = type;
	}
	void setType(bool type) {
		isElectricity = type;
	}
	bool getType() {
		return isElectricity;
	}
	void ChangeType() {
		isElectricity = !isElectricity;
	}
	void Horn() {
		puts("dududu, dududu");
	}
};

class Truck: public Vehicle {
// Derived from abstract class
private:
	float load;
public:
	Truck(float val): Vehicle(4) {
		load = val;
	}
	void setLoad(float newLoad) {
		load = newLoad;
	}
	float getLoad() {
		return load;
	}
	void Horn() {
		puts("longlong, longlong");
	}
};

int main() { 
	Motorcycle mm;
	puts("--- Motocycle ---");
	printf("Is electricity? ");
	if (mm.getType()) puts("YES");
	else puts("NO");
	mm.ChangeType();
	puts("Changed Type.");
	printf("Is electricity? ");
	if (mm.getType()) puts("YES");
	else puts("NO");
	printf("Motorcycle horn: ");
	mm.Horn();
	printf("Motorcycle wheel count: %d\n", mm.getNumOfWheels());

	Truck tt(5.5);
	puts("--- Truck ---");
	printf("load: %.2f\n", tt.getLoad());
	tt.setLoad((float)10.2);
	puts("Set load as 10.2");
	printf("load: %.2f\n", tt.getLoad());
	printf("Truck horn: ");
	tt.Horn();
	printf("Truck wheel count: %d\n", tt.getNumOfWheels());
	return 0;
}
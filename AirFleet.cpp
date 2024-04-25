#include "AirFleet.h"

AirFleet::AirFleet() {
    fleet = new AirVehicle*[5];
    fleet[0] = new AirPlane(20, 10);
    fleet[1] = new Helicopter(10000, "BlackHawk");
    fleet[2] = new AirVehicle(5000);
    fleet[3] = new Helicopter(100, "WhiteHawk");
    fleet[4] = new AirPlane(15, 20);
}

AirVehicle **AirFleet::get_fleet() const {
    return fleet;
}
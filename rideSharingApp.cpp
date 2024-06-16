#include<bits/stdc++.h>
#include "traveler.hpp"
#include "travelerCompanion.cpp"
#include "admin.hpp"
#include "common.hpp"
#include "trip.hpp"
#include "tripMgr.hpp"
using namespace std;

int main()
{
    // Creating Users.
    Traveler* traveler1 = new Traveler("Abhiram", "8919578343", "AP5588");
    TravelerCompanion* tc1 = new TravelerCompanion("Alpha", "XYZ");

    // creating a TripManager (System).
    TripManager* tripManager = TripManager::getTripManagerInstance();

    // Traveler Interacting with System to create a Trip.
    string tripId = tripManager->createTrip(traveler1, new Location(5,5), new Location(10,10));

    // TravelerCompanion Interacting with System to get all the Available Trips.
    vector<string> trips = tripManager->getAvailableTrips();

    // TravelerCompanion choose one of the available Trips. 
    tripManager->addTravelerCompanion(trips[0], tc1);

    // Traveler choose to strat the trip.
    tripManager->startTrip(trips[0]);

    // Traveler giving updates to participates of the trip.
    tripManager->notifyUpdatesToTravelerCompanions(trips[0], "Almost reached to destination");

    // Traveler completed the trip.
    tripManager->completeTrip(trips[0]);

    return(0);
}
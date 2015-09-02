//Infantry targetable helicopters by Gaia (http://gsmod.wz.cz)
//02-07-2005
//Created for Celoush
#define TEast 0
#define TWest 1
#define TGuerrila 2
#define TCivilian 3
#define TSideUnknown 4
#define TEnemy 5
#define TFriendly 6
#define TLogic 7

#define true 1
#define false 0

#define VSoft 0
#define VArmor 1
#define VAir 2

#define private 0
#define protected 1
#define public 2

//--------------------------------------------------------//
class CfgPatches
{
	class celoush_addon
	{
		units[] = {};
		weapons[] = {};
		worlds[] = {};
		requiredVersion = 1.75;
		requiredAddons[]={};
	};
};

//--------------------------------------------------------//
//Vehicles                                                //
//--------------------------------------------------------//
class CfgVehicles
{
	class All{};
	class AllVehicles: All{};
	class Air: AllVehicles {};
	class Helicopter: Air {};
	class Cobra: Helicopter {};
	class Ch47D: Helicopter {};
	class UH60: Helicopter {};
	class UH60MG: UH60 {};
	class OH58: Helicopter {};
	class Mi24: Helicopter {};
	class Kamov: Mi24 {};
	class Mi17: Helicopter {};

	class celoush_cobra: Cobra
	{
		accuracy=5;
		threat[]={1,0.050000,0.050000};
		vehicleClass="Celoush addons";
	};
	class celoush_Ch47D: Ch47D
	{
		accuracy=5;
		threat[]={1,0.050000,0.050000};
		vehicleClass="Celoush addons";
	};
	class celoush_UH60: UH60
	{
		accuracy=5;
		threat[]={1,0.050000,0.050000};
		vehicleClass="Celoush addons";
	};
	class celoush_UH60MG: UH60MG
	{
		accuracy=5;
		threat[]={1,0.050000,0.050000};
		vehicleClass="Celoush addons";
	};
	class celoush_OH58: OH58
	{
		accuracy=5;
		threat[]={1,0.050000,0.050000};
		vehicleClass="Celoush addons";
	};
	class celoush_Mi24: Mi24
	{
		accuracy=5;
		threat[]={1,0.050000,0.050000};
		vehicleClass="Celoush addons";
	};
	class celoush_Kamov: Kamov
	{
		accuracy=5;
		threat[]={1,0.050000,0.050000};
		vehicleClass="Celoush addons";
	};
	class celoush_Mi17: Mi17
	{
		accuracy=5;
		threat[]={1,0.050000,0.050000};
		vehicleClass="Celoush addons";
	};
};

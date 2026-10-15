#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECPGBDINBAB;
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }

#define ECPGBDINBAB___C__DISPLAYCLASS94_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1330CDC0)
#define ECPGBDINBAB___C__DISPLAYCLASS94_0___LOOKATCHAMPIONCAT_B__0_OFFSET UNITYSDK_OFFSET(0x1330D5E0)
#define ECPGBDINBAB___C__DISPLAYCLASS94_0___LOOKATCHAMPIONCAT_B__1_OFFSET UNITYSDK_OFFSET(0x1330D670)

	class ECPGBDINBAB___c__DisplayClass94_0 : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* championCatView; // 0x10
		::ECPGBDINBAB* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB___C__DISPLAYCLASS94_0_CTOR_OFFSET))(this);
		}

		::System::Void __LookAtChampionCat_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB___C__DISPLAYCLASS94_0___LOOKATCHAMPIONCAT_B__0_OFFSET))(this);
		}

		::System::Void __LookAtChampionCat_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB___C__DISPLAYCLASS94_0___LOOKATCHAMPIONCAT_B__1_OFFSET))(this);
		}

	};

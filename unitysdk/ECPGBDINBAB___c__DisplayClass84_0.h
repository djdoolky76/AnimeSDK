#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECPGBDINBAB;
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }

#define ECPGBDINBAB___C__DISPLAYCLASS84_0_CTOR_OFFSET UNITYSDK_OFFSET(0x13307630)
#define ECPGBDINBAB___C__DISPLAYCLASS84_0___TRYLOOKATCHAMPIONCAT_B__0_OFFSET UNITYSDK_OFFSET(0x13308800)

inline static constexpr unsigned int ECPGBDINBAB___c__DisplayClass84_0_TypeDefinitionIndex = 78019;

	class ECPGBDINBAB___c__DisplayClass84_0 : public ::System::Object
	{
	public:
		::ECPGBDINBAB* __4__this; // 0x10
		::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* championCatView; // 0x18
		::System::UInt32 championCatID; // 0x20
		::System::UInt32 runnerUpID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB___C__DISPLAYCLASS84_0_CTOR_OFFSET))(this);
		}

		::System::Void __TryLookAtChampionCat_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB___C__DISPLAYCLASS84_0___TRYLOOKATCHAMPIONCAT_B__0_OFFSET))(this);
		}

	};

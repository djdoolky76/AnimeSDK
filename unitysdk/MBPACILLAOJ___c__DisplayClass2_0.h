#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }

#define MBPACILLAOJ___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC0D72D0)
#define MBPACILLAOJ___C__DISPLAYCLASS2_0___PLAYKAFKAUSE_B__1_OFFSET UNITYSDK_OFFSET(0xC0D72E0)

inline static constexpr unsigned int MBPACILLAOJ___c__DisplayClass2_0_TypeDefinitionIndex = 80736;

	class MBPACILLAOJ___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* catView; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPACILLAOJ___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Void __PlayKafkaUse_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPACILLAOJ___C__DISPLAYCLASS2_0___PLAYKAFKAUSE_B__1_OFFSET))(this);
		}

	};

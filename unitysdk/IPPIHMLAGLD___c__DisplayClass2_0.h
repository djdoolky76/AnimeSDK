#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }

#define IPPIHMLAGLD___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0x16519180)
#define IPPIHMLAGLD___C__DISPLAYCLASS2_0___PLAYICESTORM_B__1_OFFSET UNITYSDK_OFFSET(0x16519190)

inline static constexpr unsigned int IPPIHMLAGLD___c__DisplayClass2_0_TypeDefinitionIndex = 78002;

	class IPPIHMLAGLD___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* catView; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPPIHMLAGLD___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Void __PlayIceStorm_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPPIHMLAGLD___C__DISPLAYCLASS2_0___PLAYICESTORM_B__1_OFFSET))(this);
		}

	};

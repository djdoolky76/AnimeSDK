#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElfTakeOutState.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }

#define CPBBEAKPGGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA13900)

inline static constexpr unsigned int CPBBEAKPGGA_TypeDefinitionIndex = 42118;

	class CPBBEAKPGGA : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* LPIINKCPJPO; // 0x10
		::System::UInt32 CLDPGBHMEOB; // 0x18
		::RPG::GameCore::ElfTakeOutState MEPFOEEGBEA; // 0x1C
		::System::Single LKKHEOOEGMG; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPBBEAKPGGA_CTOR_OFFSET))(this);
		}

	};

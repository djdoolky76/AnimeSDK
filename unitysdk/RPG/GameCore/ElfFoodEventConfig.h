#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RestaurantEmployeeAbility.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfFoodEventConfig; }

#define RPG_GAMECORE_ELFFOODEVENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D636410)
#define RPG_GAMECORE_ELFFOODEVENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D636290)

namespace RPG::GameCore
{
	class ElfFoodEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::RestaurantEmployeeAbility Ability; // 0x10
		::System::Single Chance; // 0x14
		::System::UInt32 AbilityID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFFOODEVENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfFoodEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfFoodEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFFOODEVENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

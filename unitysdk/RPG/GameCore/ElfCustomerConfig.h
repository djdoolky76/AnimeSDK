#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfCustomerConfig; }

#define RPG_GAMECORE_ELFCUSTOMERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D634CD0)
#define RPG_GAMECORE_ELFCUSTOMERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D634970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfCustomerConfig_TypeDefinitionIndex = 18469;

	class ElfCustomerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single CustomerOrderTime; // 0x10
		::System::Single ExtraPayChance; // 0x14
		::System::Single ExtraPayRatio; // 0x18
		::System::Single CustomerWaitBloodRatio; // 0x1C
		::System::Single CustomerWaitTime; // 0x20
		::System::Single CustomerEatTime; // 0x24
		::System::Single CustomerSpeed; // 0x28
		::System::Single EscapeBillSpeed; // 0x2C
		::System::Single CustomerDrinkTime; // 0x30
		::System::Single CustomerExtraPayTime; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFCUSTOMERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfCustomerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfCustomerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFCUSTOMERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

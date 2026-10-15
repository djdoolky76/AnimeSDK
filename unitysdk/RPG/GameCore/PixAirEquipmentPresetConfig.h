#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PixAirEnchantmentType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirEquipmentPresetConfig; }

#define RPG_GAMECORE_PIXAIREQUIPMENTPRESETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8EE1C0)
#define RPG_GAMECORE_PIXAIREQUIPMENTPRESETCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8EE040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirEquipmentPresetConfig_TypeDefinitionIndex = 16246;

	class PixAirEquipmentPresetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 EquipID; // 0x10
		::System::UInt32 EquipLevel; // 0x14
		::RPG::GameCore::PixAirEnchantmentType EnchantType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREQUIPMENTPRESETCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PixAirEquipmentPresetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PixAirEquipmentPresetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREQUIPMENTPRESETCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

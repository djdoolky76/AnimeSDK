#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirEquipmentPresetConfig; }
namespace RPG::GameCore { class PixAirPlanePresetConfig; }

#define RPG_GAMECORE_PIXAIRPLANEPRESETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8EF530)
#define RPG_GAMECORE_PIXAIRPLANEPRESETCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8EE750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirPlanePresetConfig_TypeDefinitionIndex = 16247;

	class PixAirPlanePresetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint HP; // 0x10
		::RPG::GameCore::PixAirEquipmentPresetConfig* Slot1; // 0x18
		::RPG::GameCore::PixAirEquipmentPresetConfig* Slot2; // 0x20
		::RPG::GameCore::PixAirEquipmentPresetConfig* Slot3; // 0x28
		::RPG::GameCore::PixAirEquipmentPresetConfig* Slot4; // 0x30
		::RPG::GameCore::PixAirEquipmentPresetConfig* Slot5; // 0x38
		::RPG::GameCore::PixAirEquipmentPresetConfig* Slot6; // 0x40
		::RPG::GameCore::PixAirEquipmentPresetConfig* Slot7; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRPLANEPRESETCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PixAirPlanePresetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PixAirPlanePresetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRPLANEPRESETCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

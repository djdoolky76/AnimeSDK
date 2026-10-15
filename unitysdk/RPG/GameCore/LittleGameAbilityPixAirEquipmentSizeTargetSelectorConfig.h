#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"
#include "unitysdk/RPG/GameCore/PixAirSlotType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameAbilityPixAirEquipmentSizeTargetSelectorConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTSIZETARGETSELECTORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7AB4D0)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTSIZETARGETSELECTORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7AB4E0)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTSIZETARGETSELECTORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7AB480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirEquipmentSizeTargetSelectorConfig_TypeDefinitionIndex = 21378;

	class LittleGameAbilityPixAirEquipmentSizeTargetSelectorConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::RPG::GameCore::PixAirSlotType Size; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTSIZETARGETSELECTORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentSizeTargetSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentSizeTargetSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTSIZETARGETSELECTORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentSizeTargetSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentSizeTargetSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTSIZETARGETSELECTORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

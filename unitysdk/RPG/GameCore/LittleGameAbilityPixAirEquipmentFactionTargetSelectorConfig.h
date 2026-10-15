#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"
#include "unitysdk/RPG/GameCore/LittleGamePixAirEquipmentFaction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameAbilityPixAirEquipmentFactionTargetSelectorConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTFACTIONTARGETSELECTORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7D8C80)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTFACTIONTARGETSELECTORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7D8C90)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTFACTIONTARGETSELECTORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7D8C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirEquipmentFactionTargetSelectorConfig_TypeDefinitionIndex = 21376;

	class LittleGameAbilityPixAirEquipmentFactionTargetSelectorConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::RPG::GameCore::LittleGamePixAirEquipmentFaction Faction; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTFACTIONTARGETSELECTORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentFactionTargetSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentFactionTargetSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTFACTIONTARGETSELECTORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentFactionTargetSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentFactionTargetSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREQUIPMENTFACTIONTARGETSELECTORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

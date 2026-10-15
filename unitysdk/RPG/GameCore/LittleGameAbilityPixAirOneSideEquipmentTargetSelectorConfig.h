#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameAbilityPixAirOneSideEquipmentTargetSelectorConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRONESIDEEQUIPMENTTARGETSELECTORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7AC4F0)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRONESIDEEQUIPMENTTARGETSELECTORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7AC500)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRONESIDEEQUIPMENTTARGETSELECTORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7AC3F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirOneSideEquipmentTargetSelectorConfig_TypeDefinitionIndex = 21380;

	class LittleGameAbilityPixAirOneSideEquipmentTargetSelectorConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::System::Boolean IsAlly; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRONESIDEEQUIPMENTTARGETSELECTORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityPixAirOneSideEquipmentTargetSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityPixAirOneSideEquipmentTargetSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRONESIDEEQUIPMENTTARGETSELECTORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityPixAirOneSideEquipmentTargetSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityPixAirOneSideEquipmentTargetSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRONESIDEEQUIPMENTTARGETSELECTORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameAbilityTargetSelectorLastAttackerConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORLASTATTACKERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DAA10)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORLASTATTACKERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7DAA20)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORLASTATTACKERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7DA980)

namespace RPG::GameCore
{
	class LittleGameAbilityTargetSelectorLastAttackerConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORLASTATTACKERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorLastAttackerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTargetSelectorLastAttackerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORLASTATTACKERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorLastAttackerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTargetSelectorLastAttackerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORLASTATTACKERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

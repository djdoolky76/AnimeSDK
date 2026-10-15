#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameAbilityTargetSelectorCasterConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORCASTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DA3D0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORCASTERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7DA3E0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORCASTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7DA340)

namespace RPG::GameCore
{
	class LittleGameAbilityTargetSelectorCasterConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORCASTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorCasterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTargetSelectorCasterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORCASTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorCasterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTargetSelectorCasterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORCASTERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

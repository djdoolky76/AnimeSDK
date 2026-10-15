#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class LittleGameAbilityTargetSelectorExcludeConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTOREXCLUDECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DA490)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTOREXCLUDECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7DA4A0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTOREXCLUDECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7DA440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTargetSelectorExcludeConfig_TypeDefinitionIndex = 21370;

	class LittleGameAbilityTargetSelectorExcludeConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* From; // 0x10
		::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* Exclude; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTOREXCLUDECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorExcludeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTargetSelectorExcludeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTOREXCLUDECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorExcludeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTargetSelectorExcludeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTOREXCLUDECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

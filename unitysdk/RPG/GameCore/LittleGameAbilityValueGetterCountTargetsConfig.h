#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityValueGetterConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class LittleGameAbilityValueGetterCountTargetsConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCOUNTTARGETSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DCE10)
#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCOUNTTARGETSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7DCE20)
#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCOUNTTARGETSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7DCD50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityValueGetterCountTargetsConfig_TypeDefinitionIndex = 21387;

	class LittleGameAbilityValueGetterCountTargetsConfig : public ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* TargetSelector; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCOUNTTARGETSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityValueGetterCountTargetsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityValueGetterCountTargetsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCOUNTTARGETSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityValueGetterCountTargetsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityValueGetterCountTargetsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCOUNTTARGETSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

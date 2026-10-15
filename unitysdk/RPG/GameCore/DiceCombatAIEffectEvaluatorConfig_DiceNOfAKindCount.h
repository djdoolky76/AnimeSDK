#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAIEffectEvaluatorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceNOfAKindCount; }

#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICENOFAKINDCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D6D30)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICENOFAKINDCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5D6D40)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICENOFAKINDCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D7790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatAIEffectEvaluatorConfig_DiceNOfAKindCount_TypeDefinitionIndex = 16170;

	class DiceCombatAIEffectEvaluatorConfig_DiceNOfAKindCount : public ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig
	{
	public:
		::System::UInt32 Num; // 0x10
		::System::UInt32 Content; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICENOFAKINDCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceNOfAKindCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceNOfAKindCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICENOFAKINDCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceNOfAKindCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceNOfAKindCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICENOFAKINDCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

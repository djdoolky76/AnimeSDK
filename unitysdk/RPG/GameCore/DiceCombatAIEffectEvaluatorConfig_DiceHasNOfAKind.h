#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAIEffectEvaluatorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceHasNOfAKind; }

#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEHASNOFAKIND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6045F0)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEHASNOFAKIND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D604600)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEHASNOFAKIND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D605110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatAIEffectEvaluatorConfig_DiceHasNOfAKind_TypeDefinitionIndex = 16169;

	class DiceCombatAIEffectEvaluatorConfig_DiceHasNOfAKind : public ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig
	{
	public:
		::System::UInt32 Num; // 0x10
		::System::UInt32 Content; // 0x14
		::System::UInt32 Count; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEHASNOFAKIND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceHasNOfAKind* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceHasNOfAKind*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEHASNOFAKIND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceHasNOfAKind* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceHasNOfAKind*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEHASNOFAKIND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

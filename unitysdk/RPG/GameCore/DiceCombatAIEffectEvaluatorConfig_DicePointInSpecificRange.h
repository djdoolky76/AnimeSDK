#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAIEffectEvaluatorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DicePointInSpecificRange; }

#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEPOINTINSPECIFICRANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D7000)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEPOINTINSPECIFICRANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5D7010)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEPOINTINSPECIFICRANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D7930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatAIEffectEvaluatorConfig_DicePointInSpecificRange_TypeDefinitionIndex = 16174;

	class DiceCombatAIEffectEvaluatorConfig_DicePointInSpecificRange : public ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig
	{
	public:
		::System::UInt32 Min; // 0x10
		::System::UInt32 Max; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEPOINTINSPECIFICRANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DicePointInSpecificRange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DicePointInSpecificRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEPOINTINSPECIFICRANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DicePointInSpecificRange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DicePointInSpecificRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEPOINTINSPECIFICRANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAIEffectEvaluatorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceSelectCount; }

#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICESELECTCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D7200)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICESELECTCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5D7210)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICESELECTCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D7AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatAIEffectEvaluatorConfig_DiceSelectCount_TypeDefinitionIndex = 16176;

	class DiceCombatAIEffectEvaluatorConfig_DiceSelectCount : public ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig
	{
	public:
		::System::UInt32 Count; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICESELECTCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceSelectCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceSelectCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICESELECTCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceSelectCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceSelectCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICESELECTCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

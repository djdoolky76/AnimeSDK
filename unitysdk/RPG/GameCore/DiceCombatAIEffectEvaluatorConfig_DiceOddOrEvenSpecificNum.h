#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAIEffectEvaluatorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenSpecificNum; }

#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEODDOREVENSPECIFICNUM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D604980)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEODDOREVENSPECIFICNUM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D604990)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEODDOREVENSPECIFICNUM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D605370)

namespace RPG::GameCore
{
	class DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenSpecificNum : public ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig
	{
	public:
		::System::Boolean IsOdd; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 Num; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEODDOREVENSPECIFICNUM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenSpecificNum* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenSpecificNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEODDOREVENSPECIFICNUM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenSpecificNum* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenSpecificNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEODDOREVENSPECIFICNUM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

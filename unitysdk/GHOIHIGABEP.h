#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PNECKGBKMEL.h"
class KAAMFILLIND;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DicePointSameWithEnemy; }

#define GHOIHIGABEP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C63EED0)
#define GHOIHIGABEP_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C63EEE0)

	class GHOIHIGABEP : public ::PNECKGBKMEL
	{
	public:
		::KAAMFILLIND* EEFMDEHLLFI; // 0x10
		::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DicePointSameWithEnemy* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DicePointSameWithEnemy* a1, ::KAAMFILLIND* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DicePointSameWithEnemy*, ::KAAMFILLIND*))((::PBYTE)hIl2Cpp + GHOIHIGABEP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single KFGJEKJHIMB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GHOIHIGABEP_KFGJEKJHIMB_OFFSET))(this);
		}

	};

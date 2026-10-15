#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PNECKGBKMEL.h"
class KAAMFILLIND;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceSelectCount; }

#define MCMJBKACPDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7425C0)
#define MCMJBKACPDA_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C748900)

	class MCMJBKACPDA : public ::PNECKGBKMEL
	{
	public:
		::KAAMFILLIND* EEFMDEHLLFI; // 0x10
		::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceSelectCount* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceSelectCount* a1, ::KAAMFILLIND* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceSelectCount*, ::KAAMFILLIND*))((::PBYTE)hIl2Cpp + MCMJBKACPDA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single KFGJEKJHIMB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMJBKACPDA_KFGJEKJHIMB_OFFSET))(this);
		}

	};

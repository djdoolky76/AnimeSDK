#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PNECKGBKMEL.h"
class KAAMFILLIND;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceAllOddOrEven; }

#define HANBKLPHHHK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C65BF90)
#define HANBKLPHHHK_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C65BFA0)

	class HANBKLPHHHK : public ::PNECKGBKMEL
	{
	public:
		::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllOddOrEven* IGHAHBNLIJA; // 0x10
		::KAAMFILLIND* EEFMDEHLLFI; // 0x18
		::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllOddOrEven* a1, ::KAAMFILLIND* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllOddOrEven*, ::KAAMFILLIND*))((::PBYTE)hIl2Cpp + HANBKLPHHHK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single KFGJEKJHIMB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HANBKLPHHHK_KFGJEKJHIMB_OFFSET))(this);
		}

	};

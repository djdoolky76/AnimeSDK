#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PNECKGBKMEL.h"
class KAAMFILLIND;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceHasSequence; }

#define CCJNPJHALAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5C9DA0)
#define CCJNPJHALAL_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C5C9DB0)

inline static constexpr unsigned int CCJNPJHALAL_TypeDefinitionIndex = 36215;

	class CCJNPJHALAL : public ::PNECKGBKMEL
	{
	public:
		::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceHasSequence* IGHAHBNLIJA; // 0x10
		::KAAMFILLIND* EEFMDEHLLFI; // 0x18
		::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceHasSequence* a1, ::KAAMFILLIND* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceHasSequence*, ::KAAMFILLIND*))((::PBYTE)hIl2Cpp + CCJNPJHALAL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single KFGJEKJHIMB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJNPJHALAL_KFGJEKJHIMB_OFFSET))(this);
		}

	};

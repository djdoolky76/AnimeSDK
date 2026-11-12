#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PNECKGBKMEL.h"
class KAAMFILLIND;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceHasSequence; }

#define CCJNPJHALAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D74B620)
#define CCJNPJHALAL_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1D74B630)

inline static constexpr unsigned int CCJNPJHALAL_TypeDefinitionIndex = 37143;

	class CCJNPJHALAL : public ::PNECKGBKMEL
	{
	public:
		::KAAMFILLIND* EEFMDEHLLFI; // 0x10
		::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceHasSequence* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceHasSequence* a1, ::KAAMFILLIND* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceHasSequence*, ::KAAMFILLIND*))((::PBYTE)hIl2Cpp + CCJNPJHALAL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single KFGJEKJHIMB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJNPJHALAL_KFGJEKJHIMB_OFFSET))(this);
		}

	};

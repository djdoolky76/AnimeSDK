#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PNECKGBKMEL.h"
class KAAMFILLIND;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceHasNOfAKind; }

#define KFMPAJHEGGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6E1070)
#define KFMPAJHEGGM_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C6E1080)

inline static constexpr unsigned int KFMPAJHEGGM_TypeDefinitionIndex = 36213;

	class KFMPAJHEGGM : public ::PNECKGBKMEL
	{
	public:
		::KAAMFILLIND* EEFMDEHLLFI; // 0x10
		::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceHasNOfAKind* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceHasNOfAKind* a1, ::KAAMFILLIND* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceHasNOfAKind*, ::KAAMFILLIND*))((::PBYTE)hIl2Cpp + KFMPAJHEGGM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single KFGJEKJHIMB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMPAJHEGGM_KFGJEKJHIMB_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PNECKGBKMEL.h"
class KAAMFILLIND;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceNOfAKindCount; }

#define LJKBMMNPFCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C73CAF0)
#define LJKBMMNPFCK_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C73CB00)

	class LJKBMMNPFCK : public ::PNECKGBKMEL
	{
	public:
		::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceNOfAKindCount* IGHAHBNLIJA; // 0x10
		::KAAMFILLIND* EEFMDEHLLFI; // 0x18
		::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceNOfAKindCount* a1, ::KAAMFILLIND* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceNOfAKindCount*, ::KAAMFILLIND*))((::PBYTE)hIl2Cpp + LJKBMMNPFCK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single KFGJEKJHIMB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LJKBMMNPFCK_KFGJEKJHIMB_OFFSET))(this);
		}

	};

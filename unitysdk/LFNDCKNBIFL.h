#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PNECKGBKMEL.h"
class KAAMFILLIND;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceAllSequence; }

#define LFNDCKNBIFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C73B160)
#define LFNDCKNBIFL_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C73B170)

inline static constexpr unsigned int LFNDCKNBIFL_TypeDefinitionIndex = 36222;

	class LFNDCKNBIFL : public ::PNECKGBKMEL
	{
	public:
		::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllSequence* IGHAHBNLIJA; // 0x10
		::KAAMFILLIND* EEFMDEHLLFI; // 0x18
		::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllSequence* a1, ::KAAMFILLIND* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllSequence*, ::KAAMFILLIND*))((::PBYTE)hIl2Cpp + LFNDCKNBIFL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single KFGJEKJHIMB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LFNDCKNBIFL_KFGJEKJHIMB_OFFSET))(this);
		}

	};

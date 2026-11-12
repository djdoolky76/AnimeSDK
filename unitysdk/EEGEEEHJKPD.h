#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PNECKGBKMEL.h"
class KAAMFILLIND;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceRerollCount; }

#define EEGEEEHJKPD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D77CAF0)
#define EEGEEEHJKPD_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1D77CB00)

inline static constexpr unsigned int EEGEEEHJKPD_TypeDefinitionIndex = 37147;

	class EEGEEEHJKPD : public ::PNECKGBKMEL
	{
	public:
		::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceRerollCount* IGHAHBNLIJA; // 0x10
		::KAAMFILLIND* EEFMDEHLLFI; // 0x18
		::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceRerollCount* a1, ::KAAMFILLIND* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceRerollCount*, ::KAAMFILLIND*))((::PBYTE)hIl2Cpp + EEGEEEHJKPD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single KFGJEKJHIMB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EEGEEEHJKPD_KFGJEKJHIMB_OFFSET))(this);
		}

	};

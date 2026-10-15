#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PNECKGBKMEL.h"
class KAAMFILLIND;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenSpecificNum; }

#define JDAAKFGIEKI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6C6180)
#define JDAAKFGIEKI_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C6C6190)

inline static constexpr unsigned int JDAAKFGIEKI_TypeDefinitionIndex = 36211;

	class JDAAKFGIEKI : public ::PNECKGBKMEL
	{
	public:
		::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenSpecificNum* IGHAHBNLIJA; // 0x10
		::KAAMFILLIND* EEFMDEHLLFI; // 0x18
		::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenSpecificNum* a1, ::KAAMFILLIND* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenSpecificNum*, ::KAAMFILLIND*))((::PBYTE)hIl2Cpp + JDAAKFGIEKI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single KFGJEKJHIMB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAAKFGIEKI_KFGJEKJHIMB_OFFSET))(this);
		}

	};

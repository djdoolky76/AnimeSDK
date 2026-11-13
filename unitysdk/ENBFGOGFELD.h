#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PNECKGBKMEL.h"
class KAAMFILLIND;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenCount; }

#define ENBFGOGFELD_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA8B630)
#define ENBFGOGFELD_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1BA8B640)

inline static constexpr unsigned int ENBFGOGFELD_TypeDefinitionIndex = 37138;

	class ENBFGOGFELD : public ::PNECKGBKMEL
	{
	public:
		::KAAMFILLIND* EEFMDEHLLFI; // 0x10
		::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenCount* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenCount* a1, ::KAAMFILLIND* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenCount*, ::KAAMFILLIND*))((::PBYTE)hIl2Cpp + ENBFGOGFELD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single KFGJEKJHIMB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ENBFGOGFELD_KFGJEKJHIMB_OFFSET))(this);
		}

	};

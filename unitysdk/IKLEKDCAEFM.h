#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PNECKGBKMEL.h"
class KAAMFILLIND;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceAllDiff; }

#define IKLEKDCAEFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6B3560)
#define IKLEKDCAEFM_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C6B3570)

inline static constexpr unsigned int IKLEKDCAEFM_TypeDefinitionIndex = 36221;

	class IKLEKDCAEFM : public ::PNECKGBKMEL
	{
	public:
		::KAAMFILLIND* EEFMDEHLLFI; // 0x10
		::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllDiff* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllDiff* a1, ::KAAMFILLIND* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllDiff*, ::KAAMFILLIND*))((::PBYTE)hIl2Cpp + IKLEKDCAEFM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single KFGJEKJHIMB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLEKDCAEFM_KFGJEKJHIMB_OFFSET))(this);
		}

	};

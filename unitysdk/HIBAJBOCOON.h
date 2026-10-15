#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PNECKGBKMEL.h"
class KAAMFILLIND;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DicePointInSpecificRange; }

#define HIBAJBOCOON_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6674A0)
#define HIBAJBOCOON_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C6674B0)

inline static constexpr unsigned int HIBAJBOCOON_TypeDefinitionIndex = 36218;

	class HIBAJBOCOON : public ::PNECKGBKMEL
	{
	public:
		::KAAMFILLIND* EEFMDEHLLFI; // 0x10
		::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DicePointInSpecificRange* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DicePointInSpecificRange* a1, ::KAAMFILLIND* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DicePointInSpecificRange*, ::KAAMFILLIND*))((::PBYTE)hIl2Cpp + HIBAJBOCOON_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single KFGJEKJHIMB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HIBAJBOCOON_KFGJEKJHIMB_OFFSET))(this);
		}

	};

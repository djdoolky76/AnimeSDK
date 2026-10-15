#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PNECKGBKMEL.h"
class KAAMFILLIND;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceAllSame; }

#define LKPPJOFFHAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C70EB30)
#define LKPPJOFFHAM_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C70EB40)

inline static constexpr unsigned int LKPPJOFFHAM_TypeDefinitionIndex = 36212;

	class LKPPJOFFHAM : public ::PNECKGBKMEL
	{
	public:
		::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllSame* IGHAHBNLIJA; // 0x10
		::KAAMFILLIND* EEFMDEHLLFI; // 0x18
		::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllSame* a1, ::KAAMFILLIND* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllSame*, ::KAAMFILLIND*))((::PBYTE)hIl2Cpp + LKPPJOFFHAM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single KFGJEKJHIMB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPPJOFFHAM_KFGJEKJHIMB_OFFSET))(this);
		}

	};

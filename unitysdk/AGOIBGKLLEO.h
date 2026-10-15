#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PNECKGBKMEL.h"
class KAAMFILLIND;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceDiffCount; }

#define AGOIBGKLLEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C587C30)
#define AGOIBGKLLEO_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C587C40)

	class AGOIBGKLLEO : public ::PNECKGBKMEL
	{
	public:
		::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceDiffCount* IGHAHBNLIJA; // 0x10
		::KAAMFILLIND* EEFMDEHLLFI; // 0x18
		::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceDiffCount* a1, ::KAAMFILLIND* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceDiffCount*, ::KAAMFILLIND*))((::PBYTE)hIl2Cpp + AGOIBGKLLEO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single KFGJEKJHIMB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOIBGKLLEO_KFGJEKJHIMB_OFFSET))(this);
		}

	};

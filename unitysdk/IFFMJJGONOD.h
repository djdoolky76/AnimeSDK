#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHOHBHGLHHF.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatPredicateConfig_HasSelectDicePointCompare; }

#define IFFMJJGONOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C69A060)
#define IFFMJJGONOD_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C69A080)

inline static constexpr unsigned int IFFMJJGONOD_TypeDefinitionIndex = 36356;

	class IFFMJJGONOD : public ::HHOHBHGLHHF
	{
	public:
		::RPG::GameCore::DiceCombatPredicateConfig_HasSelectDicePointCompare* BADLCEENHMJ; // 0x30
		::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_HasSelectDicePointCompare* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_HasSelectDicePointCompare*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + IFFMJJGONOD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFMJJGONOD_KFGJEKJHIMB_OFFSET))(this);
		}

	};

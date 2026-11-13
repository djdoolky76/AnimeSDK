#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHOHBHGLHHF.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatPredicateConfig_DiceAllOdd; }

#define MLIKEIJOJJP_CTOR_OFFSET UNITYSDK_OFFSET(0x16061C60)
#define MLIKEIJOJJP_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x16061C80)

inline static constexpr unsigned int MLIKEIJOJJP_TypeDefinitionIndex = 37270;

	class MLIKEIJOJJP : public ::HHOHBHGLHHF
	{
	public:
		::RPG::GameCore::DiceCombatPredicateConfig_DiceAllOdd* JAOLMKCJJMD; // 0x30
		::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_DiceAllOdd* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllOdd*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + MLIKEIJOJJP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MLIKEIJOJJP_KFGJEKJHIMB_OFFSET))(this);
		}

	};

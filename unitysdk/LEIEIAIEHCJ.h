#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHOHBHGLHHF.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect; }

#define LEIEIAIEHCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C73A8F0)
#define LEIEIAIEHCJ_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C73A910)

	class LEIEIAIEHCJ : public ::HHOHBHGLHHF
	{
	public:
		::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect* GJAFNAOCMBC; // 0x30
		::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + LEIEIAIEHCJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIEIAIEHCJ_KFGJEKJHIMB_OFFSET))(this);
		}

	};

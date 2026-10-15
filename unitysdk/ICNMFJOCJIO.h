#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHOHBHGLHHF.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatPredicateConfig_IsChallenger; }

#define ICNMFJOCJIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6927F0)
#define ICNMFJOCJIO_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C692810)

	class ICNMFJOCJIO : public ::HHOHBHGLHHF
	{
	public:
		::RPG::GameCore::DiceCombatPredicateConfig_IsChallenger* EJJEEJENLDA; // 0x30
		::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_IsChallenger* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_IsChallenger*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + ICNMFJOCJIO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNMFJOCJIO_KFGJEKJHIMB_OFFSET))(this);
		}

	};

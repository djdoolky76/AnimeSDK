#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHOHBHGLHHF.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatPredicateConfig_IsChallenger; }

#define ICNMFJOCJIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C94CA80)
#define ICNMFJOCJIO_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C94CAA0)

inline static constexpr unsigned int ICNMFJOCJIO_TypeDefinitionIndex = 37278;

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

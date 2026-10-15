#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHOHBHGLHHF.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatPredicateConfig_CurrentTurnCompare; }

#define EPIJPBHONKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5E0D50)
#define EPIJPBHONKN_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C610A50)

inline static constexpr unsigned int EPIJPBHONKN_TypeDefinitionIndex = 36354;

	class EPIJPBHONKN : public ::HHOHBHGLHHF
	{
	public:
		::RPG::GameCore::DiceCombatPredicateConfig_CurrentTurnCompare* ENCICFDHPHD; // 0x30
		::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_CurrentTurnCompare* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_CurrentTurnCompare*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + EPIJPBHONKN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIJPBHONKN_KFGJEKJHIMB_OFFSET))(this);
		}

	};

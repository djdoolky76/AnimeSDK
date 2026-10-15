#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHOHBHGLHHF.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatPredicateConfig_IsPVE; }

#define PGGNOHACHHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7BEB80)
#define PGGNOHACHHM_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C7BEBA0)

inline static constexpr unsigned int PGGNOHACHHM_TypeDefinitionIndex = 36351;

	class PGGNOHACHHM : public ::HHOHBHGLHHF
	{
	public:
		::RPG::GameCore::DiceCombatPredicateConfig_IsPVE* EJJEEJENLDA; // 0x30
		::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_IsPVE* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_IsPVE*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + PGGNOHACHHM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGNOHACHHM_KFGJEKJHIMB_OFFSET))(this);
		}

	};

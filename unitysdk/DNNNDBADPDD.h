#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHOHBHGLHHF.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatPredicateConfig_IsBoss; }

#define DNNNDBADPDD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5E0010)
#define DNNNDBADPDD_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C5F9900)

inline static constexpr unsigned int DNNNDBADPDD_TypeDefinitionIndex = 36349;

	class DNNNDBADPDD : public ::HHOHBHGLHHF
	{
	public:
		::RPG::GameCore::DiceCombatPredicateConfig_IsBoss* EJJEEJENLDA; // 0x30
		::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_IsBoss* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_IsBoss*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + DNNNDBADPDD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNNDBADPDD_KFGJEKJHIMB_OFFSET))(this);
		}

	};

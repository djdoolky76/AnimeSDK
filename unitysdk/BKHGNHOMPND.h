#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHOHBHGLHHF.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatPredicateConfig_HPFull; }

#define BKHGNHOMPND_CTOR_OFFSET UNITYSDK_OFFSET(0x1C591500)
#define BKHGNHOMPND_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C591520)

inline static constexpr unsigned int BKHGNHOMPND_TypeDefinitionIndex = 36347;

	class BKHGNHOMPND : public ::HHOHBHGLHHF
	{
	public:
		::RPG::GameCore::DiceCombatPredicateConfig_HPFull* BIFIHFKJMMI; // 0x30
		::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_HPFull* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_HPFull*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + BKHGNHOMPND_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHGNHOMPND_KFGJEKJHIMB_OFFSET))(this);
		}

	};

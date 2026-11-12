#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHOHBHGLHHF.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatPredicateConfig_Or; }

#define JMFFPBBDAJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D888280)
#define JMFFPBBDAJE_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1D8882A0)

inline static constexpr unsigned int JMFFPBBDAJE_TypeDefinitionIndex = 37292;

	class JMFFPBBDAJE : public ::HHOHBHGLHHF
	{
	public:
		::RPG::GameCore::DiceCombatPredicateConfig_Or* IGHAHBNLIJA; // 0x30
		::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_Or* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_Or*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + JMFFPBBDAJE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMFFPBBDAJE_KFGJEKJHIMB_OFFSET))(this);
		}

	};

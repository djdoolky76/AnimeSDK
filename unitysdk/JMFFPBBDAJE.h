#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHOHBHGLHHF.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatPredicateConfig_Or; }

#define JMFFPBBDAJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7067C0)
#define JMFFPBBDAJE_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C7067E0)

inline static constexpr unsigned int JMFFPBBDAJE_TypeDefinitionIndex = 36364;

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

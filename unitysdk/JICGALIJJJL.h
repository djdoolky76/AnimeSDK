#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHOHBHGLHHF.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatPredicateConfig_DicePointCountCompare; }

#define JICGALIJJJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F55A0)
#define JICGALIJJJL_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C6F55C0)

	class JICGALIJJJL : public ::HHOHBHGLHHF
	{
	public:
		::RPG::GameCore::DiceCombatPredicateConfig_DicePointCountCompare* IGHAHBNLIJA; // 0x30
		::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_DicePointCountCompare* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_DicePointCountCompare*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + JICGALIJJJL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JICGALIJJJL_KFGJEKJHIMB_OFFSET))(this);
		}

	};

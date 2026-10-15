#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHOHBHGLHHF.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatPredicateConfig_HasModifier; }

#define FCHLJBHDFKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5E10D0)
#define FCHLJBHDFKO_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C6131A0)

	class FCHLJBHDFKO : public ::HHOHBHGLHHF
	{
	public:
		::RPG::GameCore::DiceCombatPredicateConfig_HasModifier* KAHEOAGLBJN; // 0x30
		::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_HasModifier* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_HasModifier*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + FCHLJBHDFKO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHLJBHDFKO_KFGJEKJHIMB_OFFSET))(this);
		}

	};

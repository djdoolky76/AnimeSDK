#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHOHBHGLHHF.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatPredicateConfig_CurrentHPCompare; }

#define EBNODINBEOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5E0E40)
#define EBNODINBEOD_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C5FAE10)

	class EBNODINBEOD : public ::HHOHBHGLHHF
	{
	public:
		::RPG::GameCore::DiceCombatPredicateConfig_CurrentHPCompare* OIEPINLOJNB; // 0x30
		::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_CurrentHPCompare* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_CurrentHPCompare*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + EBNODINBEOD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBNODINBEOD_KFGJEKJHIMB_OFFSET))(this);
		}

	};

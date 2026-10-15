#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHOHBHGLHHF.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatPredicateConfig_CustomValueCompareEX; }

#define MAABFBBEMNI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C746650)
#define MAABFBBEMNI_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C746670)

inline static constexpr unsigned int MAABFBBEMNI_TypeDefinitionIndex = 36360;

	class MAABFBBEMNI : public ::HHOHBHGLHHF
	{
	public:
		::RPG::GameCore::DiceCombatPredicateConfig_CustomValueCompareEX* IGHAHBNLIJA; // 0x30
		::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_CustomValueCompareEX* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_CustomValueCompareEX*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + MAABFBBEMNI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAABFBBEMNI_KFGJEKJHIMB_OFFSET))(this);
		}

	};

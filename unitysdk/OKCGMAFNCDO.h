#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHOHBHGLHHF.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatPredicateConfig_DiceIncludeAnyContent; }

#define OKCGMAFNCDO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7A22D0)
#define OKCGMAFNCDO_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C7A22F0)

inline static constexpr unsigned int OKCGMAFNCDO_TypeDefinitionIndex = 36345;

	class OKCGMAFNCDO : public ::HHOHBHGLHHF
	{
	public:
		::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnyContent* IBFKCPNCAOE; // 0x30
		::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnyContent* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnyContent*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + OKCGMAFNCDO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKCGMAFNCDO_KFGJEKJHIMB_OFFSET))(this);
		}

	};

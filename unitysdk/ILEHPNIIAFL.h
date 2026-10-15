#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHOHBHGLHHF.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatPredicateConfig_DiceAllEven; }

#define ILEHPNIIAFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6B37D0)
#define ILEHPNIIAFL_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C6B37F0)

inline static constexpr unsigned int ILEHPNIIAFL_TypeDefinitionIndex = 36343;

	class ILEHPNIIAFL : public ::HHOHBHGLHHF
	{
	public:
		::RPG::GameCore::DiceCombatPredicateConfig_DiceAllEven* JAIMFOLALLI; // 0x30
		::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_DiceAllEven* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllEven*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + ILEHPNIIAFL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEHPNIIAFL_KFGJEKJHIMB_OFFSET))(this);
		}

	};

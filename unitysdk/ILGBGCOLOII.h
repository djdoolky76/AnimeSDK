#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHOHBHGLHHF.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatPredicateConfig_HasDiceSequence; }

#define ILGBGCOLOII_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6B3B40)
#define ILGBGCOLOII_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C6B3B60)

inline static constexpr unsigned int ILGBGCOLOII_TypeDefinitionIndex = 36341;

	class ILGBGCOLOII : public ::HHOHBHGLHHF
	{
	public:
		::RPG::GameCore::DiceCombatPredicateConfig_HasDiceSequence* FONADBEIAEO; // 0x30
		::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_HasDiceSequence* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_HasDiceSequence*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + ILGBGCOLOII_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGBGCOLOII_KFGJEKJHIMB_OFFSET))(this);
		}

	};

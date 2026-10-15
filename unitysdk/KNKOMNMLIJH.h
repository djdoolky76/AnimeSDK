#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHOHBHGLHHF.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatPredicateConfig_HasDicePair; }

#define KNKOMNMLIJH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C71C090)
#define KNKOMNMLIJH_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C71C0B0)

inline static constexpr unsigned int KNKOMNMLIJH_TypeDefinitionIndex = 36339;

	class KNKOMNMLIJH : public ::HHOHBHGLHHF
	{
	public:
		::RPG::GameCore::DiceCombatPredicateConfig_HasDicePair* CIABIONJMJD; // 0x30
		::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_HasDicePair* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_HasDicePair*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + KNKOMNMLIJH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKOMNMLIJH_KFGJEKJHIMB_OFFSET))(this);
		}

	};

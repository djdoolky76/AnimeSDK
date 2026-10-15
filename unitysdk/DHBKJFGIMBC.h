#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHOHBHGLHHF.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatPredicateConfig_HasDiceTriple; }

#define DHBKJFGIMBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5DF970)
#define DHBKJFGIMBC_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C5ED7E0)

inline static constexpr unsigned int DHBKJFGIMBC_TypeDefinitionIndex = 36340;

	class DHBKJFGIMBC : public ::HHOHBHGLHHF
	{
	public:
		::RPG::GameCore::DiceCombatPredicateConfig_HasDiceTriple* EBGNGMOIPDD; // 0x30
		::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_HasDiceTriple* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_HasDiceTriple*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + DHBKJFGIMBC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBKJFGIMBC_KFGJEKJHIMB_OFFSET))(this);
		}

	};

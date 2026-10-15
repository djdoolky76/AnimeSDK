#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHOHBHGLHHF.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatPredicateConfig_IsDefender; }

#define KILHECEIOGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C711240)
#define KILHECEIOGE_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C711260)

inline static constexpr unsigned int KILHECEIOGE_TypeDefinitionIndex = 36353;

	class KILHECEIOGE : public ::HHOHBHGLHHF
	{
	public:
		::RPG::GameCore::DiceCombatPredicateConfig_IsDefender* ACAALMEBIPC; // 0x30
		::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_IsDefender* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_IsDefender*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + KILHECEIOGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KILHECEIOGE_KFGJEKJHIMB_OFFSET))(this);
		}

	};

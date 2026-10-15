#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHOHBHGLHHF.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatPredicateConfig_TotalDamageTakenCompare; }

#define MPLBCPOFDKI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7589A0)
#define MPLBCPOFDKI_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C7589C0)

inline static constexpr unsigned int MPLBCPOFDKI_TypeDefinitionIndex = 36357;

	class MPLBCPOFDKI : public ::HHOHBHGLHHF
	{
	public:
		::RPG::GameCore::DiceCombatPredicateConfig_TotalDamageTakenCompare* LMFCGJDLCHM; // 0x30
		::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_TotalDamageTakenCompare* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_TotalDamageTakenCompare*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + MPLBCPOFDKI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MPLBCPOFDKI_KFGJEKJHIMB_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHOHBHGLHHF.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatPredicateConfig_DiceAllSame; }

#define NGHPNNNKDCN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C795FC0)
#define NGHPNNNKDCN_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C795FE0)

inline static constexpr unsigned int NGHPNNNKDCN_TypeDefinitionIndex = 36344;

	class NGHPNNNKDCN : public ::HHOHBHGLHHF
	{
	public:
		::RPG::GameCore::DiceCombatPredicateConfig_DiceAllSame* OMKDKMFHOHM; // 0x30
		::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_DiceAllSame* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllSame*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + NGHPNNNKDCN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHPNNNKDCN_KFGJEKJHIMB_OFFSET))(this);
		}

	};

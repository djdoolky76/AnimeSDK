#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHOHBHGLHHF.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatPredicateConfig_AttackerCompareDefender; }

#define EAALPKHAKED_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA657E0)
#define EAALPKHAKED_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1BA80EA0)

inline static constexpr unsigned int EAALPKHAKED_TypeDefinitionIndex = 37244;

	class EAALPKHAKED : public ::HHOHBHGLHHF
	{
	public:
		::RPG::GameCore::DiceCombatPredicateConfig_AttackerCompareDefender* MLDMHGBPDGK; // 0x30
		::EHMBINMCDGN* JFBABKALCPJ; // 0x38
		::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_AttackerCompareDefender* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_AttackerCompareDefender*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + EAALPKHAKED_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAALPKHAKED_KFGJEKJHIMB_OFFSET))(this);
		}

	};

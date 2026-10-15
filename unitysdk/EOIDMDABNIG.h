#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHOHBHGLHHF.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatPredicateConfig_CustomValueCompare; }

#define EOIDMDABNIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5B2D80)
#define EOIDMDABNIG_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C5D9AA0)

inline static constexpr unsigned int EOIDMDABNIG_TypeDefinitionIndex = 36359;

	class EOIDMDABNIG : public ::HHOHBHGLHHF
	{
	public:
		::RPG::GameCore::DiceCombatPredicateConfig_CustomValueCompare* PCBELGJOKHB; // 0x30
		::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_CustomValueCompare* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_CustomValueCompare*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + EOIDMDABNIG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EOIDMDABNIG_KFGJEKJHIMB_OFFSET))(this);
		}

	};

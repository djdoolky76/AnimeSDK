#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHOHBHGLHHF.h"
class DHAIADCDCCG;
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatPredicateConfig_ChallengerHasSameConfirmPoint; }

#define JIGJCJFNANP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F6CD0)
#define JIGJCJFNANP_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C6F6CF0)
#define JIGJCJFNANP_NMKCIBDLHJE_OFFSET UNITYSDK_OFFSET(0x1C6F6F00)

	class JIGJCJFNANP : public ::HHOHBHGLHHF
	{
	public:
		::RPG::GameCore::DiceCombatPredicateConfig_ChallengerHasSameConfirmPoint* EJJEEJENLDA; // 0x30
		::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_ChallengerHasSameConfirmPoint* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_ChallengerHasSameConfirmPoint*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + JIGJCJFNANP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGJCJFNANP_KFGJEKJHIMB_OFFSET))(this);
		}

		::System::Boolean NMKCIBDLHJE(::DHAIADCDCCG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DHAIADCDCCG*))((::PBYTE)hIl2Cpp + JIGJCJFNANP_NMKCIBDLHJE_OFFSET))(this, a1);
		}

	};

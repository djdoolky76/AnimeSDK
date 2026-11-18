#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JIDCGMLKKJP.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CPIOFALHLMD;

#define MOLEMOLE_ACTIVITYOVAGOMAINBATTLECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11A350B0)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityOVAGOMainBattleContext_TypeDefinitionIndex = 84797;

	class ActivityOVAGOMainBattleContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::CPIOFALHLMD* battleLevelItemData; // 0x28
		::JIDCGMLKKJP type; // 0x30
		::System::Int32 storyConfigID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYOVAGOMAINBATTLECONTEXT__CTOR_OFFSET))(this);
		}
	};
}

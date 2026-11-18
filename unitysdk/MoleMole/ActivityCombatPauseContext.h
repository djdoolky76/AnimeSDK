#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADDEBPHFFIF_EGCGFAGAFPD.h"
#include "unitysdk/MoleMole/UIActivityCombatPausePageController_PageState.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_ACTIVITYCOMBATPAUSECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1274F020)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityCombatPauseContext_TypeDefinitionIndex = 73465;

	class ActivityCombatPauseContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 activityID; // 0x28
		::MoleMole::UIActivityCombatPausePageController_PageState pageState; // 0x2C
		::ADDEBPHFFIF_EGCGFAGAFPD activityBattleType; // 0x30
		::System::Int32 questID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYCOMBATPAUSECONTEXT__CTOR_OFFSET))(this);
		}
	};
}

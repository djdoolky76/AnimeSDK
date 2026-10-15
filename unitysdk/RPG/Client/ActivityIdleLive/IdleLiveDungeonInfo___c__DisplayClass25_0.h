#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPFNEECKCMK;
namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonData; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO___C__DISPLAYCLASS25_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC4C8760)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO___C__DISPLAYCLASS25_0___INITGAMEPLAYCONTEXT_B__0_OFFSET UNITYSDK_OFFSET(0xC4C8CF0)

namespace RPG::Client::ActivityIdleLive
{
	class IdleLiveDungeonInfo___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::CPFNEECKCMK* rsp; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO___C__DISPLAYCLASS25_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __InitGamePlayContext_b__0(::RPG::Client::ActivityIdleLive::IdleLiveDungeonData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO___C__DISPLAYCLASS25_0___INITGAMEPLAYCONTEXT_B__0_OFFSET))(this, a1);
		}

	};
}

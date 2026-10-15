#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IMissionIcon; }

#define RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD718B90)
#define RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS7_0__ISPLAYERCLOSETOSUBMISSIONWAYPOINT_B__0_OFFSET UNITYSDK_OFFSET(0xD71DA80)

namespace RPG::Client
{
	class MissionUtils___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::UInt32 submissionID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsPlayerCloseToSubMissionWaypoint_b__0(::RPG::Client::IMissionIcon* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IMissionIcon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS7_0__ISPLAYERCLOSETOSUBMISSIONWAYPOINT_B__0_OFFSET))(this, a1);
		}

	};
}

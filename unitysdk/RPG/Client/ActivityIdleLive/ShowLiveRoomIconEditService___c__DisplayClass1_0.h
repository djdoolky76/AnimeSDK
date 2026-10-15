#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityIdleLive { class LiveRoomIconUiData; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_SHOWLIVEROOMICONEDITSERVICE___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC513570)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SHOWLIVEROOMICONEDITSERVICE___C__DISPLAYCLASS1_0___FINDDEFAULTICONIDBYHEROAVATAR_B__0_OFFSET UNITYSDK_OFFSET(0xC5135B0)

namespace RPG::Client::ActivityIdleLive
{
	class ShowLiveRoomIconEditService___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::String* itemIconPath; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SHOWLIVEROOMICONEDITSERVICE___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __FindDefaultIconIdByHeroAvatar_b__0(::RPG::Client::ActivityIdleLive::LiveRoomIconUiData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::LiveRoomIconUiData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SHOWLIVEROOMICONEDITSERVICE___C__DISPLAYCLASS1_0___FINDDEFAULTICONIDBYHEROAVATAR_B__0_OFFSET))(this, a1);
		}

	};
}

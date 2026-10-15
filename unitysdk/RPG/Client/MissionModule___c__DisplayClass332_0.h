#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MainMissionData; }

#define RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS332_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD6F6840)
#define RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS332_0__GETSHOWMAINMISSIONCOUNTBYCHAPTERID_B__0_OFFSET UNITYSDK_OFFSET(0xD708830)

namespace RPG::Client
{
	class MissionModule___c__DisplayClass332_0 : public ::System::Object
	{
	public:
		::System::UInt32 chapterID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS332_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetShowMainMissionCountByChapterID_b__0(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS332_0__GETSHOWMAINMISSIONCOUNTBYCHAPTERID_B__0_OFFSET))(this, a1);
		}

	};
}

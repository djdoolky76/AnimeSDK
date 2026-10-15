#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MainMissionData; }
namespace RPG::Client { class MissionModule; }
namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS341_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD6F8BD0)
#define RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS341_0__GETMAINMISSIONDATAWITHPROMISE_B__0_OFFSET UNITYSDK_OFFSET(0xD7088B0)

namespace RPG::Client
{
	class MissionModule___c__DisplayClass341_0 : public ::System::Object
	{
	public:
		::RPG::Client::MissionModule* __4__this; // 0x10
		::RPG::Client::Promises::Promise* promise; // 0x18
		::System::UInt32 mainMissionID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS341_0_CTOR_OFFSET))(this);
		}

		::System::Void _GetMainMissionDataWithPromise_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS341_0__GETMAINMISSIONDATAWITHPROMISE_B__0_OFFSET))(this);
		}

	};
}

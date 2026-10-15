#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MissionModule; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS346_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD6F94C0)
#define RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS346_0__GETSUBMISSIONDATAWITHPROMISE_B__0_OFFSET UNITYSDK_OFFSET(0xD708C10)

namespace RPG::Client
{
	class MissionModule___c__DisplayClass346_0 : public ::System::Object
	{
	public:
		::RPG::Client::MissionModule* __4__this; // 0x10
		::RPG::Client::Promises::Promise* promise; // 0x18
		::System::UInt32 subMissionID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS346_0_CTOR_OFFSET))(this);
		}

		::System::Void _GetSubMissionDataWithPromise_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS346_0__GETSUBMISSIONDATAWITHPROMISE_B__0_OFFSET))(this);
		}

	};
}

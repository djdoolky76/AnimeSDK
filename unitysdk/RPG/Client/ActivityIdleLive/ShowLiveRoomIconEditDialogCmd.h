#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"

#define RPG_CLIENT_ACTIVITYIDLELIVE_SHOWLIVEROOMICONEDITDIALOGCMD_CTOR_OFFSET UNITYSDK_OFFSET(0xC512FB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SHOWLIVEROOMICONEDITDIALOGCMD_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xC512A20)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int ShowLiveRoomIconEditDialogCmd_TypeDefinitionIndex = 75364;

	class ShowLiveRoomIconEditDialogCmd : public ::MLKDDLHNNHH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SHOWLIVEROOMICONEDITDIALOGCMD_CTOR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SHOWLIVEROOMICONEDITDIALOGCMD_ONEXECUTE_OFFSET))(this);
		}

	};
}

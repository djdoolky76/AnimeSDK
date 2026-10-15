#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	enum class MHYSDKC_Console_ExclusiveLeaderPrivilege : ::System::Int32
	{
		Kick = 1,
		UpdateJoinableUserType = 2,
		UpdateInvitableUserType = 4,
		PromoteToLeader = 8,
	};
}

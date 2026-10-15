#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	enum class MHYSDKC_Console_JoinRestriction : ::System::Int32
	{
		CXPublic = 0,
		CXInviteOnly = 1,
		CXFollowed = 2,
		PSNotSet = 0,
		PSNoOne = 1,
		PSFriends = 2,
		PSFriendsOfFriends = 3,
		PSAnyOne = 4,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	enum class MHYSDKC_Console_AnonymousUserType : ::System::Int32
	{
		Unknown = 0,
		CrossNetworkUser = 1,
		CrossNetworkFriend = 2,
	};
}

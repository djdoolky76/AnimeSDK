#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	enum class AuthTicketThirdParty : ::System::Int32
	{
		NONE = 0,
		FACEBOOK = 1,
		TWITTER = 2,
		GOOGLE = 3,
		APPLE = 4,
	};
}

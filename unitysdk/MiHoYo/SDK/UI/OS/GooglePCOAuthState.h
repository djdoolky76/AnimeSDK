#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::UI::OS
{
	enum class GooglePCOAuthState : ::System::Int32
	{
		GoToGooglePlay = 0,
		CheckAndAuthorized = 1,
	};
}

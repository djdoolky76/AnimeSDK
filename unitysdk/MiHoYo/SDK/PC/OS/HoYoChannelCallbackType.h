#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::PC::OS
{
	enum class HoYoChannelCallbackType : ::System::Int32
	{
		MicroTxn = 0,
		GameOverlayActivated = 1,
		AuthStatusChanged = 2,
		SocialUpdate = 3,
		InviteReceived = 4,
	};
}

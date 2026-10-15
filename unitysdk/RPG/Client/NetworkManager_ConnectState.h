#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class NetworkManager_ConnectState : ::System::Int32
	{
		None = 0,
		Connected = 1,
		Disconnected = 2,
		Reconnecting = 3,
	};
}

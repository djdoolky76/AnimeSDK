#pragma once
#include "unitysdk/unitysdk.h"

namespace Hdg
{
	enum class RemoteDebugServer_State : ::System::Int32
	{
		None = 0,
		Waiting = 1,
		Connecting = 2,
		Connected = 3,
		Disconnected = 4,
		Max = 5,
	};
}

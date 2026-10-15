#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	enum class SecurityTunnel_TunnelState : ::System::Int32
	{
		Disconnected = 0,
		Connecting = 1,
		ExchangingSecret = 2,
		Connected = 3,
	};
}

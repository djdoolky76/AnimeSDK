#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Network
{
	enum class SessionType : ::System::Int32
	{
		Tcp = 0,
		Kcp = 1,
	};
}

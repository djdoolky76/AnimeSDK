#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class PacketStatus : ::System::Int32
	{
		PACKET_CORRECT = 1,
		PACKET_NOT_COMPLETE = 2,
		PACKET_NOT_CORRECT = 3,
	};
}

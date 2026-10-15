#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/XInputDotNetPure/GamePadState_RawState_GamePad.h"

namespace XInputDotNetPure
{
	struct alignas(4) GamePadState_RawState
	{
		::System::UInt32 dwPacketNumber; // 0x10
		::XInputDotNetPure::GamePadState_RawState_GamePad Gamepad; // 0x14
	};
}

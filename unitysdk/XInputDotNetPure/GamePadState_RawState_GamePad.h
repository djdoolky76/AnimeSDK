#pragma once
#include "unitysdk/unitysdk.h"

namespace XInputDotNetPure
{
	struct alignas(4) GamePadState_RawState_GamePad
	{
		::System::UInt16 dwButtons; // 0x10
		::System::Byte bLeftTrigger; // 0x12
		::System::Byte bRightTrigger; // 0x13
		::System::Int16 sThumbLX; // 0x14
		::System::Int16 sThumbLY; // 0x16
		::System::Int16 sThumbRX; // 0x18
		::System::Int16 sThumbRY; // 0x1A
	};
}

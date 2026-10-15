#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::Protobuf
{
	enum class WireFormat_WireType : ::System::UInt32
	{
		Varint = 0,
		Fixed64 = 1,
		LengthDelimited = 2,
		StartGroup = 3,
		EndGroup = 4,
		Fixed32 = 5,
	};
}

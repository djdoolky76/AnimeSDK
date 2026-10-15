#pragma once
#include "unitysdk/unitysdk.h"

namespace MessagePack
{
	enum class MessagePackPrimitives_DecodeResult : ::System::Int32
	{
		Success = 0,
		TokenMismatch = 1,
		EmptyBuffer = 2,
		InsufficientBuffer = 3,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Numerics
{
	enum class BigInteger_GetBytesMode : ::System::Int32
	{
		AllocateArray = 0,
		Count = 1,
		Span = 2,
	};
}

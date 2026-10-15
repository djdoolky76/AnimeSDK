#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	enum class DecompressionMethods : ::System::Int32
	{
		None = 0,
		GZip = 1,
		Deflate = 2,
	};
}

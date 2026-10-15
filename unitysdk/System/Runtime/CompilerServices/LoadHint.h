#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::CompilerServices
{
	enum class LoadHint : ::System::Int32
	{
		Default = 0,
		Always = 1,
		Sometimes = 2,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	enum class UriIdnScope : ::System::Int32
	{
		None = 0,
		AllExceptIntranet = 1,
		All = 2,
	};
}

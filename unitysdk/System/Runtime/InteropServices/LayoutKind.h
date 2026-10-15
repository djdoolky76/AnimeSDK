#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::InteropServices
{
	enum class LayoutKind : ::System::Int32
	{
		Sequential = 0,
		Explicit = 2,
		Auto = 3,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Threading
{
	enum class LockRecursionPolicy : ::System::Int32
	{
		NoRecursion = 0,
		SupportsRecursion = 1,
	};
}

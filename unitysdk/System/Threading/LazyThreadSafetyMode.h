#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Threading
{
	enum class LazyThreadSafetyMode : ::System::Int32
	{
		None = 0,
		PublicationOnly = 1,
		ExecutionAndPublication = 2,
	};
}

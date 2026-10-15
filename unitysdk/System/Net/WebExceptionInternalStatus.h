#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	enum class WebExceptionInternalStatus : ::System::Int32
	{
		RequestFatal = 0,
		ServicePointFatal = 1,
		Recoverable = 2,
		Isolated = 3,
	};
}

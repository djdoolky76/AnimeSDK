#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics::Tracing
{
	enum class EventProvider_WriteEventErrorCode : ::System::Int32
	{
		NoError = 0,
		NoFreeBuffers = 1,
		EventTooBig = 2,
		NullInput = 3,
		TooManyArgs = 4,
		Other = 5,
	};
}

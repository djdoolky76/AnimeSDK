#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	enum class Exception_ExceptionMessageKind : ::System::Int32
	{
		ThreadAbort = 1,
		ThreadInterrupted = 2,
		OutOfMemory = 3,
	};
}

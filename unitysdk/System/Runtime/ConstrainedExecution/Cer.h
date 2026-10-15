#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::ConstrainedExecution
{
	enum class Cer : ::System::Int32
	{
		None = 0,
		MayFail = 1,
		Success = 2,
	};
}

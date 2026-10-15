#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Reflection
{
	enum class ExceptionHandlingClauseOptions : ::System::Int32
	{
		Clause = 0,
		Filter = 1,
		Finally = 2,
		Fault = 4,
	};
}

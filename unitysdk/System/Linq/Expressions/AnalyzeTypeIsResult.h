#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Linq::Expressions
{
	enum class AnalyzeTypeIsResult : ::System::Int32
	{
		KnownFalse = 0,
		KnownTrue = 1,
		KnownAssignable = 2,
		Unknown = 3,
	};
}

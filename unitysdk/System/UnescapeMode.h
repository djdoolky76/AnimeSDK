#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	enum class UnescapeMode : ::System::Int32
	{
		CopyOnly = 0,
		Escape = 1,
		Unescape = 2,
		EscapeUnescape = 3,
		V1ToStringFlag = 4,
		UnescapeAll = 8,
		UnescapeAllOrThrow = 24,
	};
}

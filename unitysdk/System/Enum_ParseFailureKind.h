#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	enum class Enum_ParseFailureKind : ::System::Int32
	{
		None = 0,
		Argument = 1,
		ArgumentNull = 2,
		ArgumentWithParameter = 3,
		UnhandledException = 4,
	};
}

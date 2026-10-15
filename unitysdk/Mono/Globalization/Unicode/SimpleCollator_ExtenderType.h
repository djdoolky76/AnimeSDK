#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Globalization::Unicode
{
	enum class SimpleCollator_ExtenderType : ::System::Int32
	{
		None = 0,
		Simple = 1,
		Voiced = 2,
		Conditional = 3,
		Buggy = 4,
	};
}

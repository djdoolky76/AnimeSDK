#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::Serialization::Formatters::Binary
{
	enum class InternalObjectPositionE : ::System::Int32
	{
		Empty = 0,
		Top = 1,
		Child = 2,
		Headers = 3,
	};
}

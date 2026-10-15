#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::Serialization::Formatters::Binary
{
	enum class InternalObjectTypeE : ::System::Int32
	{
		Empty = 0,
		Object = 1,
		Array = 2,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::Serialization::Formatters::Binary
{
	enum class InternalArrayTypeE : ::System::Int32
	{
		Empty = 0,
		Single = 1,
		Jagged = 2,
		Rectangular = 3,
		Base64 = 4,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::Serialization::Formatters::Binary
{
	enum class InternalMemberValueE : ::System::Int32
	{
		Empty = 0,
		InlineValue = 1,
		Nested = 2,
		Reference = 3,
		Null = 4,
	};
}

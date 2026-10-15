#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::Serialization::Formatters::Binary
{
	enum class InternalMemberTypeE : ::System::Int32
	{
		Empty = 0,
		Header = 1,
		Field = 2,
		Item = 3,
	};
}

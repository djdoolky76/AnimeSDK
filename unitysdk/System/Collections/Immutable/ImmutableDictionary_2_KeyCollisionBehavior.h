#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Immutable
{
	enum class ImmutableDictionary_2_KeyCollisionBehavior : ::System::Int32
	{
		SetValue = 0,
		Skip = 1,
		ThrowIfValueDifferent = 2,
		ThrowAlways = 3,
	};
}

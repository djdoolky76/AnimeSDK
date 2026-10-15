#pragma once
#include "unitysdk/unitysdk.h"

namespace Collections::Pooled
{
	enum class PooledDictionary_2_InsertionBehavior : ::System::Byte
	{
		None = 0,
		OverwriteExisting = 1,
		ThrowOnExisting = 2,
	};
}

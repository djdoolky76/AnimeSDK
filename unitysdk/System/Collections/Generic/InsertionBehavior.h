#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Generic
{
	enum class InsertionBehavior : ::System::Byte
	{
		None = 0,
		OverwriteExisting = 1,
		ThrowOnExisting = 2,
	};
}

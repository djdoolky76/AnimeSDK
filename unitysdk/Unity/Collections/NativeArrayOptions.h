#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::Collections
{
	enum class NativeArrayOptions : ::System::Int32
	{
		UninitializedMemory = 0,
		ClearMemory = 1,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace BNative
{
	inline static constexpr unsigned int BNativeDebug_LogLevel_TypeDefinitionIndex = 60875;

	enum class BNativeDebug_LogLevel : ::System::Int32
	{
		Error = 2,
		None = 4,
		Exception = 3,
		Log = 0,
		Warning = 1,
	};
}

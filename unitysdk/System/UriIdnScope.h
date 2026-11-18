#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int UriIdnScope_TypeDefinitionIndex = 2673;

	enum class UriIdnScope : ::System::Int32
	{
		None = 0,
		AllExceptIntranet = 1,
		All = 2,
	};
}

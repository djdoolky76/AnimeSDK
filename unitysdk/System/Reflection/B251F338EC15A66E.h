#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Reflection
{
	inline static constexpr unsigned int B251F338EC15A66E_TypeDefinitionIndex = 10420;

	enum class B251F338EC15A66E : ::System::Int32
	{
		None = 0,
		In = 1,
		Out = 2,
		Lcid = 4,
		Retval = 8,
		Optional = 16,
		HasDefault = 4096,
		HasFieldMarshal = 8192,
		Reserved3 = 16384,
		Reserved4 = 32768,
		ReservedMask = 61440,
	};
}

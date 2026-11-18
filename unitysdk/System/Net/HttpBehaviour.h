#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int HttpBehaviour_TypeDefinitionIndex = 3319;

	enum class HttpBehaviour : ::System::Byte
	{
		Unknown = 0,
		HTTP10 = 1,
		HTTP11PartiallyCompliant = 2,
		HTTP11 = 3,
	};
}

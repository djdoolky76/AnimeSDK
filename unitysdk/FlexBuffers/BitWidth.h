#pragma once
#include "unitysdk/unitysdk.h"

namespace FlexBuffers
{
	inline static constexpr unsigned int BitWidth_TypeDefinitionIndex = 6747;

	enum class BitWidth : ::System::Byte
	{
		Width8 = 0,
		Width16 = 1,
		Width32 = 2,
		Width64 = 3,
	};
}

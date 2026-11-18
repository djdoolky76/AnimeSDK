#pragma once
#include "unitysdk/unitysdk.h"

namespace FlexBuffers
{
	inline static constexpr unsigned int FlexBuffer_Options_TypeDefinitionIndex = 6751;

	enum class FlexBuffer_Options : ::System::Byte
	{
		None = 0,
		ShareKeys = 1,
		ShareStrings = 2,
		ShareKeyVectors = 4,
	};
}

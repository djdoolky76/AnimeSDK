#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int BundleType_TypeDefinitionIndex = 7894;

	enum class BundleType : ::System::Byte
	{
		Block = 0,
		Bundle = 1,
	};
}

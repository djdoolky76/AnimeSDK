#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int BundleLocationIndex_TypeDefinitionIndex = 8622;

	enum class BundleLocationIndex : ::System::Byte
	{
		None = 0,
		InBuildBundle = 4,
		PersistentBlock = 1,
		PersistentBundle = 3,
		InBuildBlock = 2,
	};
}

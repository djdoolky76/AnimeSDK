#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int BundleLocation_TypeDefinitionIndex = 8248;

	enum class BundleLocation : ::System::Byte
	{
		NotExists = 2,
		Persistent = 0,
		InBuild = 1,
	};
}

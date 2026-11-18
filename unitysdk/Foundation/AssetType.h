#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int AssetType_TypeDefinitionIndex = 8676;

	enum class AssetType : ::System::Int32
	{
		UI = 1,
		Effect = 2,
		Default = 0,
	};
}

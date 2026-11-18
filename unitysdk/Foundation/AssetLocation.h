#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int AssetLocation_TypeDefinitionIndex = 8650;

	enum class AssetLocation : ::System::Byte
	{
		Internal = 1,
		Streaming = 3,
		External = 5,
		None = 2,
		Medium = 4,
		EditorOnly = 0,
	};
}

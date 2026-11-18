#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadNodeToken.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int AssetLoadNodeToken_1_TypeDefinitionIndex = 8255;

	template <typename T>
	struct alignas(4) AssetLoadNodeToken_1
	{
		::Foundation::AssetLoadGraph::AssetLoadNodeToken _token; // 0x0
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int RenderLayerOrderMode_TypeDefinitionIndex = 95048;

	enum class RenderLayerOrderMode : ::System::Int32
	{
		CompactSort = 0,
		AppendOnly = 1,
		SharedOrder = 2,
	};
}

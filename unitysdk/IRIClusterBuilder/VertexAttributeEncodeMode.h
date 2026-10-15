#pragma once
#include "unitysdk/unitysdk.h"

namespace IRIClusterBuilder
{
	enum class VertexAttributeEncodeMode : ::System::Int32
	{
		Raw = 0,
		Float4_4 = 1,
		Float4_2 = 2,
		Float4_1 = 3,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Data
{
	inline static constexpr unsigned int RBTree_1_NodePath_TypeDefinitionIndex = 37328;

	template <typename T>
	struct alignas(4) RBTree_1_NodePath
	{
		::System::Int32 _nodeID; // 0x0
		::System::Int32 _mainTreeNodeID; // 0x0
	};
}

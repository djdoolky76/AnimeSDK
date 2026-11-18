#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int HierarchicalHashGrid2DView_2_Item_TypeDefinitionIndex = 9047;

	template <typename T1, typename T2>
	struct alignas(8) HierarchicalHashGrid2DView_2_Item
	{
		T1 Id; // 0x0
		::System::Int64 Next; // 0x0
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Geometry { template <typename T> class IBezierControlPointPolicy_1; }

namespace Foundation::Geometry
{
	inline static constexpr unsigned int BezierControlPointWithPolicy_1_TypeDefinitionIndex = 8763;

	template <typename T>
	struct alignas(8) BezierControlPointWithPolicy_1
	{
		T _value; // 0x0
		::Foundation::Geometry::IBezierControlPointPolicy_1<T>* _policy; // 0x0
	};
}

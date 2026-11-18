#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Geometry/ConicSection2D.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Geometry
{
	inline static constexpr unsigned int ConicSection2D_1_TypeDefinitionIndex = 8780;

	template <typename T>
	struct alignas(8) ConicSection2D_1
	{
		::Foundation::Geometry::ConicSection2D Expression; // 0x0
		T Shape; // 0x0
	};
}

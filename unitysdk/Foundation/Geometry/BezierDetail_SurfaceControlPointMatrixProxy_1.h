#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Geometry
{
	inline static constexpr unsigned int BezierDetail_SurfaceControlPointMatrixProxy_1_TypeDefinitionIndex = 8791;

	template <typename T>
	struct alignas(8) BezierDetail_SurfaceControlPointMatrixProxy_1
	{
		::System::ReadOnlySpan_1_F48FB86071006F3E<T> _controlPoints; // 0x0
		::System::Int32 _m; // 0x0
		::System::Int32 _n; // 0x0
		::System::Int32 _row; // 0x0
		::System::Int32 _column; // 0x0
	};
}

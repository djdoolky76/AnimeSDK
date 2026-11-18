#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_GEOMETRY_BEZIERDETAIL_SURFACEBERNSTEINMATRIXPROXY_GET_OFFSET UNITYSDK_OFFSET(0x9A4A20)
#define FOUNDATION_GEOMETRY_BEZIERDETAIL_SURFACEBERNSTEINMATRIXPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x4037A0)

namespace Foundation::Geometry
{
	inline static constexpr unsigned int BezierDetail_SurfaceBernsteinMatrixProxy_TypeDefinitionIndex = 8792;

	struct alignas(8) BezierDetail_SurfaceBernsteinMatrixProxy
	{
		::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Single> _u; // 0x10
		::System::Byte _padding0[0x10];
		::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Single> _v; // 0x28

		::System::Void _ctor(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Single> u, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Single> v)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Single>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Single>))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_BEZIERDETAIL_SURFACEBERNSTEINMATRIXPROXY__CTOR_OFFSET))(this, u, v);
		}

		::System::Single Get(::System::Int32 i, ::System::Int32 j)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_BEZIERDETAIL_SURFACEBERNSTEINMATRIXPROXY_GET_OFFSET))(this, i, j);
		}
	};
}

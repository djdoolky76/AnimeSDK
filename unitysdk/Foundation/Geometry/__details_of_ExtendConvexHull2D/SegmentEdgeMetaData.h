#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/Geometry/ExtendConvexHull2D/Edge.h"
#include "unitysdk/Foundation/Geometry/Segment2D.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define FOUNDATION_GEOMETRY___DETAILS_OF_EXTENDCONVEXHULL2D_SEGMENTEDGEMETADATA_GENERATE_OFFSET UNITYSDK_OFFSET(0x975360)
#define FOUNDATION_GEOMETRY___DETAILS_OF_EXTENDCONVEXHULL2D_SEGMENTEDGEMETADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace Foundation::Geometry::__details_of_ExtendConvexHull2D
{
	inline static constexpr unsigned int SegmentEdgeMetaData_TypeDefinitionIndex = 9080;

	struct alignas(4) SegmentEdgeMetaData
	{
		::System::Void _ctor(::Foundation::Geometry::Segment2D _)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Geometry::Segment2D))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY___DETAILS_OF_EXTENDCONVEXHULL2D_SEGMENTEDGEMETADATA__CTOR_OFFSET))(this, _);
		}

		::Foundation::Geometry::ExtendConvexHull2D::Edge Generate(::UnityEngine::Vector2 start, ::UnityEngine::Vector2 end)
		{
			return ((::Foundation::Geometry::ExtendConvexHull2D::Edge(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY___DETAILS_OF_EXTENDCONVEXHULL2D_SEGMENTEDGEMETADATA_GENERATE_OFFSET))(this, start, end);
		}
	};
}

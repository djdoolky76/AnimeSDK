#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Geometry/__details_of_ExtendConvexHull2D/EllipseArcEdgeMetaData.h"
#include "unitysdk/Foundation/Geometry/__details_of_ExtendConvexHull2D/SegmentEdgeMetaData.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Geometry::__details_of_ExtendConvexHull2D
{
	inline static constexpr unsigned int EdgeMetaDataStorage_TypeDefinitionIndex = 8855;

	struct alignas(4) EdgeMetaDataStorage
	{
		::Foundation::Geometry::__details_of_ExtendConvexHull2D::SegmentEdgeMetaData Segment; // 0x10
		::Foundation::Geometry::__details_of_ExtendConvexHull2D::EllipseArcEdgeMetaData EllipseArc; // 0x10
	};
}

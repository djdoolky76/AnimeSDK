#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyMetadataBase_Point.h"

#define FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_POINT_EMPTY_GET_DRAWGIZMOSBYSELF_OFFSET UNITYSDK_OFFSET(0x1F9AFD10)
#define FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_POINT_EMPTY_SET_DRAWGIZMOSBYSELF_OFFSET UNITYSDK_OFFSET(0x1F9AFD20)
#define FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_POINT_EMPTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9AFD30)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyMetadataBase_Point_Empty_TypeDefinitionIndex = 37488;

	class CurvyMetadataBase_Point_Empty : public ::FluffyUnderware::Curvy::CurvyMetadataBase_Point
	{
	public:
		::System::Boolean _DrawGizmosBySelf_k__BackingField; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_POINT_EMPTY__CTOR_OFFSET))(this);
		}

		::System::Boolean get_DrawGizmosBySelf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_POINT_EMPTY_GET_DRAWGIZMOSBYSELF_OFFSET))(this);
		}

		::System::Void set_DrawGizmosBySelf(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_POINT_EMPTY_SET_DRAWGIZMOSBYSELF_OFFSET))(this, value);
		}
	};
}

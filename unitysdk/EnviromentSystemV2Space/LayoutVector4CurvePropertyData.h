#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/EnvCallbackCurveType.h"
class GGJFAFONDHN;

#define ENVIROMENTSYSTEMV2SPACE_LAYOUTVECTOR4CURVEPROPERTYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1564A0C0)
#define ENVIROMENTSYSTEMV2SPACE_LAYOUTVECTOR4CURVEPROPERTYDATA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x15649F90)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int LayoutVector4CurvePropertyData_TypeDefinitionIndex = 49377;

	class LayoutVector4CurvePropertyData
	{
	public:
		::EnviromentSystemV2Space::EnvCallbackCurveType callbackCurveType; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTVECTOR4CURVEPROPERTYDATA_CTOR_OFFSET))(this);
		}

		::GGJFAFONDHN* FCMDLFKMBMH()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTVECTOR4CURVEPROPERTYDATA_FCMDLFKMBMH_OFFSET))(this);
		}

	};
}

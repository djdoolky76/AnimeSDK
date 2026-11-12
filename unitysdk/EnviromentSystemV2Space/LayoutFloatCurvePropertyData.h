#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/EnvCallbackCurveType.h"
class GGJFAFONDHN;

#define ENVIROMENTSYSTEMV2SPACE_LAYOUTFLOATCURVEPROPERTYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x16568A30)
#define ENVIROMENTSYSTEMV2SPACE_LAYOUTFLOATCURVEPROPERTYDATA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x16568950)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int LayoutFloatCurvePropertyData_TypeDefinitionIndex = 50451;

	class LayoutFloatCurvePropertyData
	{
	public:
		::EnviromentSystemV2Space::EnvCallbackCurveType callbackCurveType; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTFLOATCURVEPROPERTYDATA_CTOR_OFFSET))(this);
		}

		::GGJFAFONDHN* FCMDLFKMBMH()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTFLOATCURVEPROPERTYDATA_FCMDLFKMBMH_OFFSET))(this);
		}

	};
}

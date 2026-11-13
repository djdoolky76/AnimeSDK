#pragma once
#include "unitysdk/unitysdk.h"
class GGJFAFONDHN;

#define ENVIROMENTSYSTEMV2SPACE_LAYOUTFLOATPROPERTYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x136D00B0)
#define ENVIROMENTSYSTEMV2SPACE_LAYOUTFLOATPROPERTYDATA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x136D0020)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int LayoutFloatPropertyData_TypeDefinitionIndex = 50445;

	class LayoutFloatPropertyData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTFLOATPROPERTYDATA_CTOR_OFFSET))(this);
		}

		::GGJFAFONDHN* FCMDLFKMBMH()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTFLOATPROPERTYDATA_FCMDLFKMBMH_OFFSET))(this);
		}

	};
}

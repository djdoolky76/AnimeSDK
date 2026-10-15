#pragma once
#include "unitysdk/unitysdk.h"
class GGJFAFONDHN;

#define ENVIROMENTSYSTEMV2SPACE_FLOATPROPERTYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x15647D10)
#define ENVIROMENTSYSTEMV2SPACE_FLOATPROPERTYDATA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x15647C80)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int FloatPropertyData_TypeDefinitionIndex = 49385;

	class FloatPropertyData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_FLOATPROPERTYDATA_CTOR_OFFSET))(this);
		}

		::GGJFAFONDHN* FCMDLFKMBMH()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_FLOATPROPERTYDATA_FCMDLFKMBMH_OFFSET))(this);
		}

	};
}

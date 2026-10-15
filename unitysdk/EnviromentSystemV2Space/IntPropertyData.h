#pragma once
#include "unitysdk/unitysdk.h"
class GGJFAFONDHN;

#define ENVIROMENTSYSTEMV2SPACE_INTPROPERTYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x15654040)
#define ENVIROMENTSYSTEMV2SPACE_INTPROPERTYDATA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x15653FB0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int IntPropertyData_TypeDefinitionIndex = 49384;

	class IntPropertyData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_INTPROPERTYDATA_CTOR_OFFSET))(this);
		}

		::GGJFAFONDHN* FCMDLFKMBMH()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_INTPROPERTYDATA_FCMDLFKMBMH_OFFSET))(this);
		}

	};
}

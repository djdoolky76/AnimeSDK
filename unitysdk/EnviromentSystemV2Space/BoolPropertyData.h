#pragma once
#include "unitysdk/unitysdk.h"
class GGJFAFONDHN;

#define ENVIROMENTSYSTEMV2SPACE_BOOLPROPERTYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x16547C80)
#define ENVIROMENTSYSTEMV2SPACE_BOOLPROPERTYDATA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x16547BF0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int BoolPropertyData_TypeDefinitionIndex = 50462;

	class BoolPropertyData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_BOOLPROPERTYDATA_CTOR_OFFSET))(this);
		}

		::GGJFAFONDHN* FCMDLFKMBMH()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_BOOLPROPERTYDATA_FCMDLFKMBMH_OFFSET))(this);
		}

	};
}

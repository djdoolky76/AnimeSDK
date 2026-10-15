#pragma once
#include "unitysdk/unitysdk.h"
class GGJFAFONDHN;

#define ENVIROMENTSYSTEMV2SPACE_BOOLPROPERTYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x15634950)
#define ENVIROMENTSYSTEMV2SPACE_BOOLPROPERTYDATA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x156348C0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int BoolPropertyData_TypeDefinitionIndex = 49386;

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

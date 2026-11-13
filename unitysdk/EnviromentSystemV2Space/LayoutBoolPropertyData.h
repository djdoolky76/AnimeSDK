#pragma once
#include "unitysdk/unitysdk.h"
class GGJFAFONDHN;

#define ENVIROMENTSYSTEMV2SPACE_LAYOUTBOOLPROPERTYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x136CFF00)
#define ENVIROMENTSYSTEMV2SPACE_LAYOUTBOOLPROPERTYDATA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x136CFE70)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int LayoutBoolPropertyData_TypeDefinitionIndex = 50446;

	class LayoutBoolPropertyData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTBOOLPROPERTYDATA_CTOR_OFFSET))(this);
		}

		::GGJFAFONDHN* FCMDLFKMBMH()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTBOOLPROPERTYDATA_FCMDLFKMBMH_OFFSET))(this);
		}

	};
}

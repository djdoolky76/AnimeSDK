#pragma once
#include "unitysdk/unitysdk.h"
class GGJFAFONDHN;

#define ENVIROMENTSYSTEMV2SPACE_LAYOUTINTPROPERTYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x136D02F0)
#define ENVIROMENTSYSTEMV2SPACE_LAYOUTINTPROPERTYDATA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x136D0260)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int LayoutIntPropertyData_TypeDefinitionIndex = 50444;

	class LayoutIntPropertyData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTINTPROPERTYDATA_CTOR_OFFSET))(this);
		}

		::GGJFAFONDHN* FCMDLFKMBMH()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTINTPROPERTYDATA_FCMDLFKMBMH_OFFSET))(this);
		}

	};
}

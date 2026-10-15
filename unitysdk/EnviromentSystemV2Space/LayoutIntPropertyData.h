#pragma once
#include "unitysdk/unitysdk.h"
class GGJFAFONDHN;

#define ENVIROMENTSYSTEMV2SPACE_LAYOUTINTPROPERTYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x15649CE0)
#define ENVIROMENTSYSTEMV2SPACE_LAYOUTINTPROPERTYDATA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x15649C50)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int LayoutIntPropertyData_TypeDefinitionIndex = 49368;

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

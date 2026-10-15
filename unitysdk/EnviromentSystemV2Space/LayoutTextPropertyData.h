#pragma once
#include "unitysdk/unitysdk.h"
class GGJFAFONDHN;

#define ENVIROMENTSYSTEMV2SPACE_LAYOUTTEXTPROPERTYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x15649E90)
#define ENVIROMENTSYSTEMV2SPACE_LAYOUTTEXTPROPERTYDATA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x15649DF0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int LayoutTextPropertyData_TypeDefinitionIndex = 49372;

	class LayoutTextPropertyData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTTEXTPROPERTYDATA_CTOR_OFFSET))(this);
		}

		::GGJFAFONDHN* FCMDLFKMBMH()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTTEXTPROPERTYDATA_FCMDLFKMBMH_OFFSET))(this);
		}

	};
}

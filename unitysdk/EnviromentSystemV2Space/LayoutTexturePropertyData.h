#pragma once
#include "unitysdk/unitysdk.h"
class GGJFAFONDHN;

#define ENVIROMENTSYSTEMV2SPACE_LAYOUTTEXTUREPROPERTYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x15655C20)
#define ENVIROMENTSYSTEMV2SPACE_LAYOUTTEXTUREPROPERTYDATA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x15655B60)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int LayoutTexturePropertyData_TypeDefinitionIndex = 49373;

	class LayoutTexturePropertyData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTTEXTUREPROPERTYDATA_CTOR_OFFSET))(this);
		}

		::GGJFAFONDHN* FCMDLFKMBMH()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTTEXTUREPROPERTYDATA_FCMDLFKMBMH_OFFSET))(this);
		}

	};
}

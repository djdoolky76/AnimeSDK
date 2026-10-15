#pragma once
#include "unitysdk/unitysdk.h"
class GGJFAFONDHN;

#define ENVIROMENTSYSTEMV2SPACE_LAYOUTVECTOR4PROPERTYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x15655E40)
#define ENVIROMENTSYSTEMV2SPACE_LAYOUTVECTOR4PROPERTYDATA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x15655D90)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int LayoutVector4PropertyData_TypeDefinitionIndex = 49371;

	class LayoutVector4PropertyData
	{
	public:
		::System::Int32 useDim; // 0x48
		::System::Boolean isColor; // 0x4C
		::System::Boolean HDRColor; // 0x4D
		::System::Boolean linearColor; // 0x4E
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTVECTOR4PROPERTYDATA_CTOR_OFFSET))(this);
		}

		::GGJFAFONDHN* FCMDLFKMBMH()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTVECTOR4PROPERTYDATA_FCMDLFKMBMH_OFFSET))(this);
		}

	};
}

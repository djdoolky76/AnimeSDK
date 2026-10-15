#pragma once
#include "unitysdk/unitysdk.h"
class GGJFAFONDHN;
namespace EnviromentSystemV2Space { class PropertyDataBase; }

#define ENVIROMENTSYSTEMV2SPACE_VECTOR4PROPERTYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x15658CF0)
#define ENVIROMENTSYSTEMV2SPACE_VECTOR4PROPERTYDATA_EIOEKCFAIMG_OFFSET UNITYSDK_OFFSET(0x15658B60)
#define ENVIROMENTSYSTEMV2SPACE_VECTOR4PROPERTYDATA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x15658C50)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int Vector4PropertyData_TypeDefinitionIndex = 49387;

	class Vector4PropertyData
	{
	public:
		::System::Int32 usrData; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_VECTOR4PROPERTYDATA_CTOR_OFFSET))(this);
		}

		::System::Boolean EIOEKCFAIMG(::EnviromentSystemV2Space::PropertyDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_VECTOR4PROPERTYDATA_EIOEKCFAIMG_OFFSET))(this, a1);
		}

		::GGJFAFONDHN* FCMDLFKMBMH()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_VECTOR4PROPERTYDATA_FCMDLFKMBMH_OFFSET))(this);
		}

	};
}

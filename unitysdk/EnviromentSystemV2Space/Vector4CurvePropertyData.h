#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/EnvCallbackCurveType.h"
class GGJFAFONDHN;
namespace EnviromentSystemV2Space { class PropertyDataBase; }

#define ENVIROMENTSYSTEMV2SPACE_VECTOR4CURVEPROPERTYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x15658B40)
#define ENVIROMENTSYSTEMV2SPACE_VECTOR4CURVEPROPERTYDATA_EIOEKCFAIMG_OFFSET UNITYSDK_OFFSET(0x156589A0)
#define ENVIROMENTSYSTEMV2SPACE_VECTOR4CURVEPROPERTYDATA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x15658A10)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int Vector4CurvePropertyData_TypeDefinitionIndex = 49394;

	class Vector4CurvePropertyData
	{
	public:
		::System::Int32 usrData; // 0x30
		::EnviromentSystemV2Space::EnvCallbackCurveType callbackCurveType; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_VECTOR4CURVEPROPERTYDATA_CTOR_OFFSET))(this);
		}

		::System::Boolean EIOEKCFAIMG(::EnviromentSystemV2Space::PropertyDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_VECTOR4CURVEPROPERTYDATA_EIOEKCFAIMG_OFFSET))(this, a1);
		}

		::GGJFAFONDHN* FCMDLFKMBMH()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_VECTOR4CURVEPROPERTYDATA_FCMDLFKMBMH_OFFSET))(this);
		}

	};
}

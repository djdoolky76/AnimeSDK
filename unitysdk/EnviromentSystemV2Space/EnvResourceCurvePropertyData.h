#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/EnvCallbackCurveType.h"
class GGJFAFONDHN;
namespace EnviromentSystemV2Space { class PropertyDataBase; }
namespace System { class String; }

#define ENVIROMENTSYSTEMV2SPACE_ENVRESOURCECURVEPROPERTYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1563F260)
#define ENVIROMENTSYSTEMV2SPACE_ENVRESOURCECURVEPROPERTYDATA_EIOEKCFAIMG_OFFSET UNITYSDK_OFFSET(0x1563F030)
#define ENVIROMENTSYSTEMV2SPACE_ENVRESOURCECURVEPROPERTYDATA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1563F140)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int EnvResourceCurvePropertyData_TypeDefinitionIndex = 49390;

	class EnvResourceCurvePropertyData
	{
	public:
		::System::String* valueTypeInfo; // 0x30
		::EnviromentSystemV2Space::EnvCallbackCurveType callbackCurveType; // 0x38
		::System::Int32 usrData; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVRESOURCECURVEPROPERTYDATA_CTOR_OFFSET))(this);
		}

		::System::Boolean EIOEKCFAIMG(::EnviromentSystemV2Space::PropertyDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVRESOURCECURVEPROPERTYDATA_EIOEKCFAIMG_OFFSET))(this, a1);
		}

		::GGJFAFONDHN* FCMDLFKMBMH()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVRESOURCECURVEPROPERTYDATA_FCMDLFKMBMH_OFFSET))(this);
		}

	};
}

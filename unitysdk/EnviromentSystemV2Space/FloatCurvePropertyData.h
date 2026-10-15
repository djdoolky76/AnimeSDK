#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/EnvCallbackCurveType.h"
class GGJFAFONDHN;
namespace EnviromentSystemV2Space { class PropertyDataBase; }

#define ENVIROMENTSYSTEMV2SPACE_FLOATCURVEPROPERTYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x15653910)
#define ENVIROMENTSYSTEMV2SPACE_FLOATCURVEPROPERTYDATA_EIOEKCFAIMG_OFFSET UNITYSDK_OFFSET(0x15653740)
#define ENVIROMENTSYSTEMV2SPACE_FLOATCURVEPROPERTYDATA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x15653830)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int FloatCurvePropertyData_TypeDefinitionIndex = 49393;

	class FloatCurvePropertyData
	{
	public:
		::EnviromentSystemV2Space::EnvCallbackCurveType callbackCurveType; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_FLOATCURVEPROPERTYDATA_CTOR_OFFSET))(this);
		}

		::System::Boolean EIOEKCFAIMG(::EnviromentSystemV2Space::PropertyDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_FLOATCURVEPROPERTYDATA_EIOEKCFAIMG_OFFSET))(this, a1);
		}

		::GGJFAFONDHN* FCMDLFKMBMH()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_FLOATCURVEPROPERTYDATA_FCMDLFKMBMH_OFFSET))(this);
		}

	};
}

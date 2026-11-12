#pragma once
#include "unitysdk/unitysdk.h"
class GGJFAFONDHN;
namespace EnviromentSystemV2Space { class PropertyDataBase; }

#define ENVIROMENTSYSTEMV2SPACE_GRADIENTPROPERTYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x16566F10)
#define ENVIROMENTSYSTEMV2SPACE_GRADIENTPROPERTYDATA_EIOEKCFAIMG_OFFSET UNITYSDK_OFFSET(0x16566DE0)
#define ENVIROMENTSYSTEMV2SPACE_GRADIENTPROPERTYDATA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x16566E50)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int GradientPropertyData_TypeDefinitionIndex = 50471;

	class GradientPropertyData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_GRADIENTPROPERTYDATA_CTOR_OFFSET))(this);
		}

		::System::Boolean EIOEKCFAIMG(::EnviromentSystemV2Space::PropertyDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_GRADIENTPROPERTYDATA_EIOEKCFAIMG_OFFSET))(this, a1);
		}

		::GGJFAFONDHN* FCMDLFKMBMH()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_GRADIENTPROPERTYDATA_FCMDLFKMBMH_OFFSET))(this);
		}

	};
}

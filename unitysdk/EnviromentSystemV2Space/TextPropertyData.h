#pragma once
#include "unitysdk/unitysdk.h"
class GGJFAFONDHN;
namespace EnviromentSystemV2Space { class PropertyDataBase; }

#define ENVIROMENTSYSTEMV2SPACE_TEXTPROPERTYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x136B6DA0)
#define ENVIROMENTSYSTEMV2SPACE_TEXTPROPERTYDATA_EIOEKCFAIMG_OFFSET UNITYSDK_OFFSET(0x136D2780)
#define ENVIROMENTSYSTEMV2SPACE_TEXTPROPERTYDATA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x136D2850)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int TextPropertyData_TypeDefinitionIndex = 50464;

	class TextPropertyData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TEXTPROPERTYDATA_CTOR_OFFSET))(this);
		}

		::System::Boolean EIOEKCFAIMG(::EnviromentSystemV2Space::PropertyDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TEXTPROPERTYDATA_EIOEKCFAIMG_OFFSET))(this, a1);
		}

		::GGJFAFONDHN* FCMDLFKMBMH()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TEXTPROPERTYDATA_FCMDLFKMBMH_OFFSET))(this);
		}

	};
}

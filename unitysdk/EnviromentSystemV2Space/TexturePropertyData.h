#pragma once
#include "unitysdk/unitysdk.h"
class GGJFAFONDHN;
namespace EnviromentSystemV2Space { class PropertyDataBase; }

#define ENVIROMENTSYSTEMV2SPACE_TEXTUREPROPERTYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x15658160)
#define ENVIROMENTSYSTEMV2SPACE_TEXTUREPROPERTYDATA_EIOEKCFAIMG_OFFSET UNITYSDK_OFFSET(0x15657FD0)
#define ENVIROMENTSYSTEMV2SPACE_TEXTUREPROPERTYDATA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x156580A0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int TexturePropertyData_TypeDefinitionIndex = 49391;

	class TexturePropertyData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TEXTUREPROPERTYDATA_CTOR_OFFSET))(this);
		}

		::System::Boolean EIOEKCFAIMG(::EnviromentSystemV2Space::PropertyDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TEXTUREPROPERTYDATA_EIOEKCFAIMG_OFFSET))(this, a1);
		}

		::GGJFAFONDHN* FCMDLFKMBMH()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TEXTUREPROPERTYDATA_FCMDLFKMBMH_OFFSET))(this);
		}

	};
}

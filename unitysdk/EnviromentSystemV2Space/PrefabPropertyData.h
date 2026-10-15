#pragma once
#include "unitysdk/unitysdk.h"
class GGJFAFONDHN;
namespace EnviromentSystemV2Space { class PropertyDataBase; }
namespace System { class String; }

#define ENVIROMENTSYSTEMV2SPACE_PREFABPROPERTYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x15657200)
#define ENVIROMENTSYSTEMV2SPACE_PREFABPROPERTYDATA_EIOEKCFAIMG_OFFSET UNITYSDK_OFFSET(0x156574C0)
#define ENVIROMENTSYSTEMV2SPACE_PREFABPROPERTYDATA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x156575C0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int PrefabPropertyData_TypeDefinitionIndex = 49392;

	class PrefabPropertyData
	{
	public:
		::System::String* AssemblyQualifiedName; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PREFABPROPERTYDATA_CTOR_OFFSET))(this);
		}

		::System::Boolean EIOEKCFAIMG(::EnviromentSystemV2Space::PropertyDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PREFABPROPERTYDATA_EIOEKCFAIMG_OFFSET))(this, a1);
		}

		::GGJFAFONDHN* FCMDLFKMBMH()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PREFABPROPERTYDATA_FCMDLFKMBMH_OFFSET))(this);
		}

	};
}

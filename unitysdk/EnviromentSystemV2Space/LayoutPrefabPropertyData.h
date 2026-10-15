#pragma once
#include "unitysdk/unitysdk.h"
class GGJFAFONDHN;
namespace System { class String; }

#define ENVIROMENTSYSTEMV2SPACE_LAYOUTPREFABPROPERTYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x15649DC0)
#define ENVIROMENTSYSTEMV2SPACE_LAYOUTPREFABPROPERTYDATA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x15649D00)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int LayoutPrefabPropertyData_TypeDefinitionIndex = 49374;

	class LayoutPrefabPropertyData
	{
	public:
		::System::String* AssemblyQualifiedName; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTPREFABPROPERTYDATA_CTOR_OFFSET))(this);
		}

		::GGJFAFONDHN* FCMDLFKMBMH()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTPREFABPROPERTYDATA_FCMDLFKMBMH_OFFSET))(this);
		}

	};
}

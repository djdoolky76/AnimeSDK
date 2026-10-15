#pragma once
#include "unitysdk/unitysdk.h"
class GGJFAFONDHN;
namespace System { class String; }

#define ENVIROMENTSYSTEMV2SPACE_LAYOUTPREFABPROPERTYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x15655A70)
#define ENVIROMENTSYSTEMV2SPACE_LAYOUTPREFABPROPERTYDATA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x156559B0)

namespace EnviromentSystemV2Space
{
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

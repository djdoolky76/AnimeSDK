#pragma once
#include "unitysdk/unitysdk.h"
class GGJFAFONDHN;
namespace EnviromentSystemV2Space { class PropertyDataBase; }
namespace System { class String; }

#define ENVIROMENTSYSTEMV2SPACE_ENVRESOURCEDATAADAPTERPROPERTYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x16552770)
#define ENVIROMENTSYSTEMV2SPACE_ENVRESOURCEDATAADAPTERPROPERTYDATA_EIOEKCFAIMG_OFFSET UNITYSDK_OFFSET(0x165525B0)
#define ENVIROMENTSYSTEMV2SPACE_ENVRESOURCEDATAADAPTERPROPERTYDATA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x165526B0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int EnvResourceDataAdapterPropertyData_TypeDefinitionIndex = 50465;

	class EnvResourceDataAdapterPropertyData
	{
	public:
		::System::String* typeInfo; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVRESOURCEDATAADAPTERPROPERTYDATA_CTOR_OFFSET))(this);
		}

		::System::Boolean EIOEKCFAIMG(::EnviromentSystemV2Space::PropertyDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVRESOURCEDATAADAPTERPROPERTYDATA_EIOEKCFAIMG_OFFSET))(this, a1);
		}

		::GGJFAFONDHN* FCMDLFKMBMH()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVRESOURCEDATAADAPTERPROPERTYDATA_FCMDLFKMBMH_OFFSET))(this);
		}

	};
}

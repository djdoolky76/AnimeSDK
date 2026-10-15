#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGJFAFONDHN;
namespace EnviromentSystemV2Space { class PropertyDataBase; }
namespace System { class String; }

#define ENVIROMENTSYSTEMV2SPACE_PROPERTYDATABASE_CTOR_OFFSET UNITYSDK_OFFSET(0x15657710)
#define ENVIROMENTSYSTEMV2SPACE_PROPERTYDATABASE_EIOEKCFAIMG_OFFSET UNITYSDK_OFFSET(0x15657680)
#define ENVIROMENTSYSTEMV2SPACE_PROPERTYDATABASE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x156576D0)

namespace EnviromentSystemV2Space
{
	class PropertyDataBase : public ::System::Object
	{
	public:
		::System::Int32 serId; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* internalName; // 0x18
		::System::Int32 metaInfo; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PROPERTYDATABASE_CTOR_OFFSET))(this);
		}

		::System::Boolean EIOEKCFAIMG(::EnviromentSystemV2Space::PropertyDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PROPERTYDATABASE_EIOEKCFAIMG_OFFSET))(this, a1);
		}

		::GGJFAFONDHN* FCMDLFKMBMH()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PROPERTYDATABASE_FCMDLFKMBMH_OFFSET))(this);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJKLCFNAHBH;
namespace System { class String; }

#define OKOBELFNAKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC3BCC0)
#define OKOBELFNAKC_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0x1EC3BC40)
#define OKOBELFNAKC_SET_OFFSET UNITYSDK_OFFSET(0x1EC3BBC0)

	class OKOBELFNAKC : public ::System::Object
	{
	public:
		::System::Boolean EEKHKKMMBHB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOBELFNAKC_CTOR_OFFSET))(this);
		}

		::System::Void Set(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OKOBELFNAKC_SET_OFFSET))(this, a1);
		}

		static ::System::Boolean MNGGAOFNGIP(::AJKLCFNAHBH* a1)
		{
			return ((::System::Boolean(*)(::AJKLCFNAHBH*))((::PBYTE)hIl2Cpp + OKOBELFNAKC_MNGGAOFNGIP_OFFSET))(a1);
		}

	};

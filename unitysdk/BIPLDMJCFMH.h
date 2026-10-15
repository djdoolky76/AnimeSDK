#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define BIPLDMJCFMH_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB7960B0)
#define BIPLDMJCFMH_CTOR_OFFSET UNITYSDK_OFFSET(0xB7960A0)

	class BIPLDMJCFMH : public ::System::Attribute
	{
	public:
		::System::String* EKIJFPIPCKF; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIPLDMJCFMH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BIPLDMJCFMH_CTOR_1_OFFSET))(this, a1);
		}

	};

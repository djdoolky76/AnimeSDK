#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define OKNONGBAAEM_EKCPJMBFHAO_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)
#define OKNONGBAAEM_EKCPJMBFHAO_EQUALS_OFFSET UNITYSDK_OFFSET(0xAF50)
#define OKNONGBAAEM_EKCPJMBFHAO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE620)
#define OKNONGBAAEM_EKCPJMBFHAO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C36440)

	struct alignas(4) OKNONGBAAEM_EKCPJMBFHAO
	{
		::System::UInt32 LIOHFOJKBFC; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OKNONGBAAEM_EKCPJMBFHAO_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKNONGBAAEM_EKCPJMBFHAO_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::OKNONGBAAEM_EKCPJMBFHAO a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OKNONGBAAEM_EKCPJMBFHAO))((::PBYTE)hIl2Cpp + OKNONGBAAEM_EKCPJMBFHAO_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKNONGBAAEM_EKCPJMBFHAO_GETHASHCODE_OFFSET))(this);
		}

	};

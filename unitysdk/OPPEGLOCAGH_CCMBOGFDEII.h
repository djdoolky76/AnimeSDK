#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define OPPEGLOCAGH_CCMBOGFDEII_CTOR_OFFSET UNITYSDK_OFFSET(0x10480)

	struct alignas(8) OPPEGLOCAGH_CCMBOGFDEII
	{
		::System::String* OENAMINOLLF; // 0x10
		::System::String* IPKCFNKIDMB; // 0x18
		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + OPPEGLOCAGH_CCMBOGFDEII_CTOR_OFFSET))(this, a1, a2);
		}

	};

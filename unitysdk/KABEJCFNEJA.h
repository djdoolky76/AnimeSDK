#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define KABEJCFNEJA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C900)

	struct alignas(8) KABEJCFNEJA
	{
		::System::UInt64 ONIGBGONALF; // 0x10
		::System::UInt32 FDKPCNBCGEG; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* LMODFJIHGCH; // 0x20
		::System::Void _ctor(::System::UInt64 a1, ::System::UInt32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + KABEJCFNEJA_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define BMKBMOMBOBH_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)
#define BMKBMOMBOBH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x23BF0)

	struct alignas(4) BMKBMOMBOBH
	{
		::System::UInt32 BEOFPCAACEP; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMKBMOMBOBH_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMKBMOMBOBH_TOSTRING_OFFSET))(this);
		}

	};

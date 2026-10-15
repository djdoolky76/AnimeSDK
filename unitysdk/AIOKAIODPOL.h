#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define AIOKAIODPOL_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)
#define AIOKAIODPOL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2305D30)

	struct alignas(4) AIOKAIODPOL
	{
		::System::UInt32 JOIFBHNAAFP; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AIOKAIODPOL_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOKAIODPOL_TOSTRING_OFFSET))(this);
		}

	};

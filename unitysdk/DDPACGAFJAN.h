#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define DDPACGAFJAN_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)
#define DDPACGAFJAN_TOSTRING_OFFSET UNITYSDK_OFFSET(0xF5880)

	struct alignas(4) DDPACGAFJAN
	{
		::System::UInt32 KLOEJIMMPJM; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DDPACGAFJAN_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDPACGAFJAN_TOSTRING_OFFSET))(this);
		}

	};

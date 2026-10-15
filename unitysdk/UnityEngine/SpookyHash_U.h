#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_SPOOKYHASH_U_CTOR_OFFSET UNITYSDK_OFFSET(0x94B0)

namespace UnityEngine
{
	struct alignas(8) SpookyHash_U
	{
		::PVOID p8; // 0x10
		::PVOID p32; // 0x10
		::PVOID p64; // 0x10
		::System::UInt64 i; // 0x10
		::System::Void _ctor(::PVOID a1)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPOOKYHASH_U_CTOR_OFFSET))(this, a1);
		}

	};
}

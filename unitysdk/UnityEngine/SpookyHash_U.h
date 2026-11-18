#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_SPOOKYHASH_U__CTOR_OFFSET UNITYSDK_OFFSET(0x358B00)

namespace UnityEngine
{
	inline static constexpr unsigned int SpookyHash_U_TypeDefinitionIndex = 5283;

	struct alignas(8) SpookyHash_U
	{
		::PVOID p8; // 0x10
		::PVOID p32; // 0x10
		::PVOID p64; // 0x10
		::System::UInt64 i; // 0x10

		::System::Void _ctor(::PVOID p8)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPOOKYHASH_U__CTOR_OFFSET))(this, p8);
		}
	};
}

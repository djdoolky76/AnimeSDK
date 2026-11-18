#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_HASHUNSAFEUTILITIES_COMPUTEHASH128_1_OFFSET UNITYSDK_OFFSET(0x1EC8E490)
#define UNITYENGINE_HASHUNSAFEUTILITIES_COMPUTEHASH128_OFFSET UNITYSDK_OFFSET(0x1EC8E420)

namespace UnityEngine
{
	inline static constexpr unsigned int HashUnsafeUtilities_TypeDefinitionIndex = 5281;

	class HashUnsafeUtilities : public ::System::Object
	{
	public:
		static ::System::Void ComputeHash128(::PVOID data, ::System::UInt64 dataSize, ::PVOID hash1, ::PVOID hash2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASHUNSAFEUTILITIES_COMPUTEHASH128_OFFSET))(data, dataSize, hash1, hash2);
		}

		static ::System::Void ComputeHash128_1(::PVOID data, ::System::UInt64 dataSize, ::PVOID hash)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASHUNSAFEUTILITIES_COMPUTEHASH128_1_OFFSET))(data, dataSize, hash);
		}
	};
}

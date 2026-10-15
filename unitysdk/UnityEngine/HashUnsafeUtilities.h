#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_HASHUNSAFEUTILITIES_COMPUTEHASH128_1_OFFSET UNITYSDK_OFFSET(0x1F3F2E00)
#define UNITYENGINE_HASHUNSAFEUTILITIES_COMPUTEHASH128_OFFSET UNITYSDK_OFFSET(0x1F3F2D90)

namespace UnityEngine
{
	inline static constexpr unsigned int HashUnsafeUtilities_TypeDefinitionIndex = 4207;

	class HashUnsafeUtilities : public ::System::Object
	{
	public:
		static ::System::Void ComputeHash128(::PVOID a1, ::System::UInt64 a2, ::PVOID a3, ::PVOID a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASHUNSAFEUTILITIES_COMPUTEHASH128_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ComputeHash128_1(::PVOID a1, ::System::UInt64 a2, ::PVOID a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASHUNSAFEUTILITIES_COMPUTEHASH128_1_OFFSET))(a1, a2, a3);
		}

	};
}

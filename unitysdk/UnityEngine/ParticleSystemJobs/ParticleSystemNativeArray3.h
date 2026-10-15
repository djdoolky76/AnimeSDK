#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace UnityEngine::ParticleSystemJobs
{
	inline static constexpr unsigned int ParticleSystemNativeArray3_TypeDefinitionIndex = 5293;

	struct alignas(8) ParticleSystemNativeArray3
	{
		::Unity::Collections::NativeArray_1<::System::Single> x; // 0x10
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeArray_1<::System::Single> y; // 0x20
		::System::Byte _padding1[0x8];
		::Unity::Collections::NativeArray_1<::System::Single> z; // 0x30
	};
}

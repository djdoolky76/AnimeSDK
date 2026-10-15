#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace UnityEngine::ParticleSystemJobs
{
	struct alignas(8) ParticleSystemNativeArray4
	{
		::Unity::Collections::NativeArray_1<::System::Single> x; // 0x10
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeArray_1<::System::Single> y; // 0x20
		::System::Byte _padding1[0x8];
		::Unity::Collections::NativeArray_1<::System::Single> z; // 0x30
		::System::Byte _padding2[0x8];
		::Unity::Collections::NativeArray_1<::System::Single> w; // 0x40
	};
}

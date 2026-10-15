#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ParticleSystemJobs
{
	struct alignas(8) NativeParticleData_Array4
	{
		::PVOID x; // 0x10
		::PVOID y; // 0x18
		::PVOID z; // 0x20
		::PVOID w; // 0x28
	};
}

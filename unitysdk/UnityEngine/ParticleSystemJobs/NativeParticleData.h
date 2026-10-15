#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ParticleSystemJobs/NativeParticleData_Array3.h"
#include "unitysdk/UnityEngine/ParticleSystemJobs/NativeParticleData_Array4.h"

namespace UnityEngine::ParticleSystemJobs
{
	inline static constexpr unsigned int NativeParticleData_TypeDefinitionIndex = 5296;

	struct alignas(8) NativeParticleData
	{
		::System::Int32 count; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::ParticleSystemJobs::NativeParticleData_Array3 positions; // 0x18
		::UnityEngine::ParticleSystemJobs::NativeParticleData_Array3 velocities; // 0x30
		::UnityEngine::ParticleSystemJobs::NativeParticleData_Array3 rotations; // 0x48
		::UnityEngine::ParticleSystemJobs::NativeParticleData_Array3 rotationalSpeeds; // 0x60
		::UnityEngine::ParticleSystemJobs::NativeParticleData_Array3 sizes; // 0x78
		::PVOID startColors; // 0x90
		::PVOID aliveTimePercent; // 0x98
		::PVOID inverseStartLifetimes; // 0xA0
		::PVOID randomSeeds; // 0xA8
		::UnityEngine::ParticleSystemJobs::NativeParticleData_Array4 customData1; // 0xB0
		::UnityEngine::ParticleSystemJobs::NativeParticleData_Array4 customData2; // 0xD0
	};
}

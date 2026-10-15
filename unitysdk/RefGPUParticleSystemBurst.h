#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define REFGPUPARTICLESYSTEMBURST_CHHOKFIHNDG_OFFSET UNITYSDK_OFFSET(0x1EBD43E0)
#define REFGPUPARTICLESYSTEMBURST_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBD62B0)

	class RefGPUParticleSystemBurst : public ::System::Object
	{
	public:
		::System::Int32 minBurst; // 0x10
		::System::Int32 maxBurst; // 0x14
		::System::Single burstTime; // 0x18
		::System::Single burstProbability; // 0x1C
		::System::Boolean playOnce; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBURST_CTOR_OFFSET))(this);
		}

		::System::Int32 CHHOKFIHNDG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBURST_CHHOKFIHNDG_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RayFire/RFParticles_B37FA3C1C455C7B0.h"
#include "unitysdk/System/Object.h"

#define RAYFIRE_RFPARTICLEEMISSION_COPYFROM_OFFSET UNITYSDK_OFFSET(0x296C2F0)
#define RAYFIRE_RFPARTICLEEMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x296C330)

namespace RayFire
{
	inline static constexpr unsigned int RFParticleEmission_TypeDefinitionIndex = 15492;

	class RFParticleEmission : public ::System::Object
	{
	public:
		::RayFire::RFParticles_B37FA3C1C455C7B0 burstType; // 0x10
		::System::Int32 burstAmount; // 0x14
		::System::Single distanceRate; // 0x18
		::System::Single duration; // 0x1C
		::System::Single lifeMin; // 0x20
		::System::Single lifeMax; // 0x24
		::System::Single sizeMin; // 0x28
		::System::Single sizeMax; // 0x2C

		::System::Void CopyFrom(::RayFire::RFParticleEmission* AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RFParticleEmission*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLEEMISSION_COPYFROM_OFFSET))(this, AFE8F10692F5139F);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLEEMISSION__CTOR_OFFSET))(this);
		}
	};
}

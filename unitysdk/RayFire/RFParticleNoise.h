#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/F91E26F479949B79.h"

#define RAYFIRE_RFPARTICLENOISE_COPYFROM_OFFSET UNITYSDK_OFFSET(0x29916C0)
#define RAYFIRE_RFPARTICLENOISE__CTOR_OFFSET UNITYSDK_OFFSET(0x2991700)

namespace RayFire
{
	inline static constexpr unsigned int RFParticleNoise_TypeDefinitionIndex = 15528;

	class RFParticleNoise : public ::System::Object
	{
	public:
		::System::Boolean enabled; // 0x10
		::System::Byte _padding0[0x3];
		::UnityEngine::F91E26F479949B79 quality; // 0x14
		::System::Single strengthMin; // 0x18
		::System::Single strengthMax; // 0x1C
		::System::Single frequency; // 0x20
		::System::Single scrollSpeed; // 0x24
		::System::Boolean damping; // 0x28

		::System::Void CopyFrom(::RayFire::RFParticleNoise* AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RFParticleNoise*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLENOISE_COPYFROM_OFFSET))(this, AFE8F10692F5139F);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLENOISE__CTOR_OFFSET))(this);
		}
	};
}

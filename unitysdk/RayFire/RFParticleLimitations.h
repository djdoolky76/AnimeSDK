#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RAYFIRE_RFPARTICLELIMITATIONS_COPYFROM_OFFSET UNITYSDK_OFFSET(0x296C270)
#define RAYFIRE_RFPARTICLELIMITATIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x2A0DC50)

namespace RayFire
{
	inline static constexpr unsigned int RFParticleLimitations_TypeDefinitionIndex = 15882;

	class RFParticleLimitations : public ::System::Object
	{
	public:
		::System::Int32 minParticles; // 0x10
		::System::Int32 maxParticles; // 0x14
		::System::Int32 percentage; // 0x18
		::System::Single sizeThreshold; // 0x1C
		::System::Int32 demolitionDepth; // 0x20

		::System::Void CopyFrom(::RayFire::RFParticleLimitations* AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RFParticleLimitations*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLELIMITATIONS_COPYFROM_OFFSET))(this, AFE8F10692F5139F);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLELIMITATIONS__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RayFire/RFParticles_E13F41C85AF2E86A.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/FF760EDB7BD00746.h"

#define RAYFIRE_RFPARTICLECOLLISIONDUST_COPYFROM_OFFSET UNITYSDK_OFFSET(0x2958B20)
#define RAYFIRE_RFPARTICLECOLLISIONDUST__CTOR_OFFSET UNITYSDK_OFFSET(0x2958B50)

namespace RayFire
{
	inline static constexpr unsigned int RFParticleCollisionDust_TypeDefinitionIndex = 15446;

	class RFParticleCollisionDust : public ::System::Object
	{
	public:
		::RayFire::RFParticles_E13F41C85AF2E86A collidesWith; // 0x10
		::UnityEngine::FF760EDB7BD00746 quality; // 0x14
		::System::Single radiusScale; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLECOLLISIONDUST__CTOR_OFFSET))(this);
		}

		::System::Void CopyFrom(::RayFire::RFParticleCollisionDust* AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RFParticleCollisionDust*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLECOLLISIONDUST_COPYFROM_OFFSET))(this, AFE8F10692F5139F);
		}
	};
}

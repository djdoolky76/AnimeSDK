#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RayFire/RFParticleCollisionDebris_E13F41C85AF2E86A.h"
#include "unitysdk/RayFire/RFParticleCollisionDebris_EDE27B2EA15B52B0.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/FF760EDB7BD00746.h"

namespace RayFire { class RayfireDebris; }

#define RAYFIRE_RFPARTICLECOLLISIONDEBRIS_COPYFROM_OFFSET UNITYSDK_OFFSET(0x29E52E0)
#define RAYFIRE_RFPARTICLECOLLISIONDEBRIS_SETMATERIALPROPS_OFFSET UNITYSDK_OFFSET(0x29E5340)
#define RAYFIRE_RFPARTICLECOLLISIONDEBRIS__CTOR_OFFSET UNITYSDK_OFFSET(0x29E5550)

namespace RayFire
{
	inline static constexpr unsigned int RFParticleCollisionDebris_TypeDefinitionIndex = 15748;

	class RFParticleCollisionDebris : public ::System::Object
	{
	public:
		::RayFire::RFParticleCollisionDebris_E13F41C85AF2E86A collidesWith; // 0x10
		::UnityEngine::FF760EDB7BD00746 quality; // 0x14
		::System::Single radiusScale; // 0x18
		::RayFire::RFParticleCollisionDebris_EDE27B2EA15B52B0 dampenType; // 0x1C
		::System::Single dampenMin; // 0x20
		::System::Single dampenMax; // 0x24
		::RayFire::RFParticleCollisionDebris_EDE27B2EA15B52B0 bounceType; // 0x28
		::System::Single bounceMin; // 0x2C
		::System::Single bounceMax; // 0x30
		::System::Boolean propertiesSet; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLECOLLISIONDEBRIS__CTOR_OFFSET))(this);
		}

		::System::Void CopyFrom(::RayFire::RFParticleCollisionDebris* AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RFParticleCollisionDebris*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLECOLLISIONDEBRIS_COPYFROM_OFFSET))(this, AFE8F10692F5139F);
		}

		::System::Void SetMaterialProps(::RayFire::RayfireDebris* B339D225BCBFDE30)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RayfireDebris*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLECOLLISIONDEBRIS_SETMATERIALPROPS_OFFSET))(this, B339D225BCBFDE30);
		}
	};
}

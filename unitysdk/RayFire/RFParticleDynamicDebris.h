#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RAYFIRE_RFPARTICLEDYNAMICDEBRIS_COPYFROM_OFFSET UNITYSDK_OFFSET(0x2A23880)
#define RAYFIRE_RFPARTICLEDYNAMICDEBRIS__CTOR_OFFSET UNITYSDK_OFFSET(0x2A238C0)

namespace RayFire
{
	inline static constexpr unsigned int RFParticleDynamicDebris_TypeDefinitionIndex = 15960;

	class RFParticleDynamicDebris : public ::System::Object
	{
	public:
		::System::Single speedMin; // 0x10
		::System::Single speedMax; // 0x14
		::System::Single velocityMin; // 0x18
		::System::Single velocityMax; // 0x1C
		::System::Single gravityMin; // 0x20
		::System::Single gravityMax; // 0x24
		::System::Single rotationSpeed; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLEDYNAMICDEBRIS__CTOR_OFFSET))(this);
		}

		::System::Void CopyFrom(::RayFire::RFParticleDynamicDebris* AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RFParticleDynamicDebris*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLEDYNAMICDEBRIS_COPYFROM_OFFSET))(this, AFE8F10692F5139F);
		}
	};
}

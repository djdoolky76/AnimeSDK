#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDC595893C6EE433/A03C29A647E6E839.h"
#include "unitysdk/System/Object.h"

#define RAYFIRE_RFPARTICLERENDERING_COPYFROM_OFFSET UNITYSDK_OFFSET(0x2958B80)
#define RAYFIRE_RFPARTICLERENDERING__CTOR_OFFSET UNITYSDK_OFFSET(0x2958BB0)

namespace RayFire
{
	inline static constexpr unsigned int RFParticleRendering_TypeDefinitionIndex = 15423;

	class RFParticleRendering : public ::System::Object
	{
	public:
		::System::Boolean castShadows; // 0x10
		::System::Boolean receiveShadows; // 0x11
		::System::Byte _padding0[0x2];
		::BDC595893C6EE433::A03C29A647E6E839 lightProbes; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLERENDERING__CTOR_OFFSET))(this);
		}

		::System::Void CopyFrom(::RayFire::RFParticleRendering* AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RFParticleRendering*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLERENDERING_COPYFROM_OFFSET))(this, AFE8F10692F5139F);
		}
	};
}

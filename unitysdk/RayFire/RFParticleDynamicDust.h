#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RAYFIRE_RFPARTICLEDYNAMICDUST_COPYFROM_OFFSET UNITYSDK_OFFSET(0x296C270)
#define RAYFIRE_RFPARTICLEDYNAMICDUST__CTOR_OFFSET UNITYSDK_OFFSET(0x296C2B0)

namespace RayFire
{
	inline static constexpr unsigned int RFParticleDynamicDust_TypeDefinitionIndex = 15494;

	class RFParticleDynamicDust : public ::System::Object
	{
	public:
		::System::Single speedMin; // 0x10
		::System::Single speedMax; // 0x14
		::System::Single rotation; // 0x18
		::System::Single gravityMin; // 0x1C
		::System::Single gravityMax; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLEDYNAMICDUST__CTOR_OFFSET))(this);
		}

		::System::Void CopyFrom(::RayFire::RFParticleDynamicDust* AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RFParticleDynamicDust*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLEDYNAMICDUST_COPYFROM_OFFSET))(this, AFE8F10692F5139F);
		}
	};
}

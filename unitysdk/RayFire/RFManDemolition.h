#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RayFire/RFManDemolition_E0CC5DEED549447F.h"
#include "unitysdk/System/Object.h"

#define RAYFIRE_RFMANDEMOLITION__CTOR_OFFSET UNITYSDK_OFFSET(0x29916A0)

namespace RayFire
{
	inline static constexpr unsigned int RFManDemolition_TypeDefinitionIndex = 15512;

	class RFManDemolition : public ::System::Object
	{
	public:
		::RayFire::RFManDemolition_E0CC5DEED549447F parent; // 0x10
		::System::Int32 maximumAmount; // 0x14
		::System::Int32 badMeshTry; // 0x18
		::System::Single sizeThreshold; // 0x1C
		::System::Int32 currentAmount; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFMANDEMOLITION__CTOR_OFFSET))(this);
		}
	};
}

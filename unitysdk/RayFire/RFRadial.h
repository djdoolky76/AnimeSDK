#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E33DBE3D45A5731A/A44CE0F62A31B794.h"
#include "unitysdk/System/Object.h"

#define RAYFIRE_RFRADIAL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x29E5610)
#define RAYFIRE_RFRADIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x29E55A0)

namespace RayFire
{
	inline static constexpr unsigned int RFRadial_TypeDefinitionIndex = 15742;

	class RFRadial : public ::System::Object
	{
	public:
		::E33DBE3D45A5731A::A44CE0F62A31B794 centerAxis; // 0x10
		::System::Single radius; // 0x14
		::System::Single divergence; // 0x18
		::System::Boolean restrictToPlane; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Int32 rings; // 0x20
		::System::Int32 focus; // 0x24
		::System::Int32 focusStr; // 0x28
		::System::Int32 randomRings; // 0x2C
		::System::Int32 rays; // 0x30
		::System::Int32 randomRays; // 0x34
		::System::Int32 twist; // 0x38

		::System::Void _ctor(::RayFire::RFRadial* BADCD2C933ABE188)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RFRadial*))((::PBYTE)hIl2Cpp + RAYFIRE_RFRADIAL__CTOR_OFFSET))(this, BADCD2C933ABE188);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFRADIAL__CTOR_1_OFFSET))(this);
		}
	};
}

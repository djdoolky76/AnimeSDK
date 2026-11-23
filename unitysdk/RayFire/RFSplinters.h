#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E33DBE3D45A5731A/A44CE0F62A31B794.h"
#include "unitysdk/System/Object.h"

#define RAYFIRE_RFSPLINTERS_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x29F8740)
#define RAYFIRE_RFSPLINTERS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x29F8710)
#define RAYFIRE_RFSPLINTERS__CTOR_OFFSET UNITYSDK_OFFSET(0x29F86C0)

namespace RayFire
{
	inline static constexpr unsigned int RFSplinters_TypeDefinitionIndex = 15778;

	class RFSplinters : public ::System::Object
	{
	public:
		::E33DBE3D45A5731A::A44CE0F62A31B794 axis; // 0x10
		::System::Int32 amount; // 0x14
		::System::Single strength; // 0x18
		::System::Single centerBias; // 0x1C

		::System::Int32 get_Amount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFSPLINTERS_GET_AMOUNT_OFFSET))(this);
		}

		::System::Void _ctor(::RayFire::RFSplinters* BADCD2C933ABE188)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RFSplinters*))((::PBYTE)hIl2Cpp + RAYFIRE_RFSPLINTERS__CTOR_OFFSET))(this, BADCD2C933ABE188);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFSPLINTERS__CTOR_1_OFFSET))(this);
		}
	};
}

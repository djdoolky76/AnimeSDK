#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RayFire/RFTets_E208C9C2D612360E.h"
#include "unitysdk/System/Object.h"

#define RAYFIRE_RFTETS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2972E80)
#define RAYFIRE_RFTETS__CTOR_OFFSET UNITYSDK_OFFSET(0x2972EB0)

namespace RayFire
{
	inline static constexpr unsigned int RFTets_TypeDefinitionIndex = 15496;

	class RFTets : public ::System::Object
	{
	public:
		::RayFire::RFTets_E208C9C2D612360E lattice; // 0x10
		::System::Int32 density; // 0x14
		::System::Int32 noise; // 0x18

		::System::Void _ctor(::RayFire::RFTets* BADCD2C933ABE188)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RFTets*))((::PBYTE)hIl2Cpp + RAYFIRE_RFTETS__CTOR_OFFSET))(this, BADCD2C933ABE188);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFTETS__CTOR_1_OFFSET))(this);
		}
	};
}

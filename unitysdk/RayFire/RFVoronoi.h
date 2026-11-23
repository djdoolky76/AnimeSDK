#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RAYFIRE_RFVORONOI_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x295C370)
#define RAYFIRE_RFVORONOI__CTOR_1_OFFSET UNITYSDK_OFFSET(0x295C310)
#define RAYFIRE_RFVORONOI__CTOR_OFFSET UNITYSDK_OFFSET(0x295C330)

namespace RayFire
{
	inline static constexpr unsigned int RFVoronoi_TypeDefinitionIndex = 15444;

	class RFVoronoi : public ::System::Object
	{
	public:
		::System::Int32 amount; // 0x10
		::System::Single centerBias; // 0x14

		::System::Void _ctor(::RayFire::RFVoronoi* BADCD2C933ABE188)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RFVoronoi*))((::PBYTE)hIl2Cpp + RAYFIRE_RFVORONOI__CTOR_OFFSET))(this, BADCD2C933ABE188);
		}

		::System::Int32 get_Amount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFVORONOI_GET_AMOUNT_OFFSET))(this);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFVORONOI__CTOR_1_OFFSET))(this);
		}
	};
}

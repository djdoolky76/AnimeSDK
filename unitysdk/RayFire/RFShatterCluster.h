#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RAYFIRE_RFSHATTERCLUSTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x29A6700)
#define RAYFIRE_RFSHATTERCLUSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x29A6750)

namespace RayFire
{
	inline static constexpr unsigned int RFShatterCluster_TypeDefinitionIndex = 15603;

	class RFShatterCluster : public ::System::Object
	{
	public:
		::System::Boolean enable; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 count; // 0x14
		::System::Int32 seed; // 0x18
		::System::Single relax; // 0x1C
		::System::Int32 amount; // 0x20
		::System::Int32 layers; // 0x24
		::System::Single scale; // 0x28
		::System::Int32 min; // 0x2C
		::System::Int32 max; // 0x30

		::System::Void _ctor(::RayFire::RFShatterCluster* BADCD2C933ABE188)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RFShatterCluster*))((::PBYTE)hIl2Cpp + RAYFIRE_RFSHATTERCLUSTER__CTOR_OFFSET))(this, BADCD2C933ABE188);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFSHATTERCLUSTER__CTOR_1_OFFSET))(this);
		}
	};
}

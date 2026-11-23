#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define A35E521B7672CA3E_F2C5D21D6F75331B_B45727CDD0C7199E_OFFSET UNITYSDK_OFFSET(0x2269A80)

inline static constexpr unsigned int A35E521B7672CA3E_F2C5D21D6F75331B_TypeDefinitionIndex = 9244;

struct alignas(4) A35E521B7672CA3E_F2C5D21D6F75331B
{
	::System::Int32 EE8B505B9D2B1840; // 0x10
	::System::Int32 B4EF2EBAB328BA3D; // 0x14
	::System::Int32 EF641A76940DB780; // 0x18

	::System::Int32 B45727CDD0C7199E()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + A35E521B7672CA3E_F2C5D21D6F75331B_B45727CDD0C7199E_OFFSET))(this);
	}
};

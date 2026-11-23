#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define E3493B34D9D08CD0_E5753C75A1356FFE__CTOR_OFFSET UNITYSDK_OFFSET(0x3D60520)

inline static constexpr unsigned int E3493B34D9D08CD0_E5753C75A1356FFE_TypeDefinitionIndex = 10995;

struct alignas(8) E3493B34D9D08CD0_E5753C75A1356FFE
{
	::System::Int32 AB8BE3440CEB1F11; // 0x10
	::System::Byte _padding0[0x4];
	::PVOID FF9476F3D687E5AD; // 0x18

	::System::Void _ctor(::System::Boolean A6E7746985B415AC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + E3493B34D9D08CD0_E5753C75A1356FFE__CTOR_OFFSET))(this, A6E7746985B415AC);
	}
};

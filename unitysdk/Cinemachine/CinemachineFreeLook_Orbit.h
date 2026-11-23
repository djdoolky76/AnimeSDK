#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CINEMACHINE_CINEMACHINEFREELOOK_ORBIT__CTOR_OFFSET UNITYSDK_OFFSET(0x2748A90)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineFreeLook_Orbit_TypeDefinitionIndex = 18385;

	struct alignas(4) CinemachineFreeLook_Orbit
	{
		::System::Single m_Height; // 0x10
		::System::Single m_Radius; // 0x14

		::System::Void _ctor(::System::Single B41D6671933F015F, ::System::Single A342D5344F7596A8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_ORBIT__CTOR_OFFSET))(this, B41D6671933F015F, A342D5344F7596A8);
		}
	};
}

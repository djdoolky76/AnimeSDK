#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CINEMACHINE_CINEMACHINETRACKEDDOLLY_AUTODOLLY__CTOR_OFFSET UNITYSDK_OFFSET(0x2A272E0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineTrackedDolly_AutoDolly_TypeDefinitionIndex = 18300;

	struct alignas(4) CinemachineTrackedDolly_AutoDolly
	{
		::System::Boolean m_Enabled; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single m_PositionOffset; // 0x14
		::System::Int32 m_SearchRadius; // 0x18
		::System::Int32 m_SearchResolution; // 0x1C

		::System::Void _ctor(::System::Boolean FBF3AC291087F95C, ::System::Single F279063944BDDE70, ::System::Int32 F6EA62CB8966CEAD, ::System::Int32 A1ACF782C10C8BA4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRACKEDDOLLY_AUTODOLLY__CTOR_OFFSET))(this, FBF3AC291087F95C, F279063944BDDE70, F6EA62CB8966CEAD, A1ACF782C10C8BA4);
		}
	};
}

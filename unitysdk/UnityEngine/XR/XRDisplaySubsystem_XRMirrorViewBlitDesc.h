#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::XR
{
	inline static constexpr unsigned int XRDisplaySubsystem_XRMirrorViewBlitDesc_TypeDefinitionIndex = 27670;

	struct alignas(4) XRDisplaySubsystem_XRMirrorViewBlitDesc
	{
		::System::IntPtr displaySubsystemInstance; // 0x10
		::System::Boolean nativeBlitAvailable; // 0x18
		::System::Boolean nativeBlitInvalidStates; // 0x19
		::System::Byte _padding0[0x2];
		::System::Int32 blitParamsCount; // 0x1C
	};
}

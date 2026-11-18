#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_XR_XRDISPLAYSUBSYSTEMDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF6B420)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int XRDisplaySubsystemDescriptor_TypeDefinitionIndex = 27671;

	class XRDisplaySubsystemDescriptor
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRDISPLAYSUBSYSTEMDESCRIPTOR__CTOR_OFFSET))(this);
		}
	};
}

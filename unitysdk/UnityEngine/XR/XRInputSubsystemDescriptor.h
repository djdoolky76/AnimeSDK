#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_XR_XRINPUTSUBSYSTEMDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF6B5C0)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int XRInputSubsystemDescriptor_TypeDefinitionIndex = 27673;

	class XRInputSubsystemDescriptor
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRINPUTSUBSYSTEMDESCRIPTOR__CTOR_OFFSET))(this);
		}
	};
}

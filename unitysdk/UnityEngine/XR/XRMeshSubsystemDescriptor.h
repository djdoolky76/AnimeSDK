#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_XR_XRMESHSUBSYSTEMDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF6B670)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int XRMeshSubsystemDescriptor_TypeDefinitionIndex = 27680;

	class XRMeshSubsystemDescriptor
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRMESHSUBSYSTEMDESCRIPTOR__CTOR_OFFSET))(this);
		}
	};
}

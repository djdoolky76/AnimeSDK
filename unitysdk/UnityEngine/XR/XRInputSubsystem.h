#pragma once
#include "unitysdk/unitysdk.h"

namespace System { template <typename T> class Action_1; }

#define UNITYENGINE_XR_XRINPUTSUBSYSTEM_INVOKEBOUNDARYCHANGEDEVENT_OFFSET UNITYSDK_OFFSET(0x1FF6B4F0)
#define UNITYENGINE_XR_XRINPUTSUBSYSTEM_INVOKETRACKINGORIGINUPDATEDEVENT_OFFSET UNITYSDK_OFFSET(0x1FF6B440)
#define UNITYENGINE_XR_XRINPUTSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF6B5A0)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int XRInputSubsystem_TypeDefinitionIndex = 27672;

	class XRInputSubsystem
	{
	public:
		::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* trackingOriginUpdated; // 0x20
		::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* boundaryChanged; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRINPUTSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void InvokeTrackingOriginUpdatedEvent(::System::IntPtr internalPtr)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRINPUTSUBSYSTEM_INVOKETRACKINGORIGINUPDATEDEVENT_OFFSET))(internalPtr);
		}

		static ::System::Void InvokeBoundaryChangedEvent(::System::IntPtr internalPtr)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRINPUTSUBSYSTEM_INVOKEBOUNDARYCHANGEDEVENT_OFFSET))(internalPtr);
		}
	};
}

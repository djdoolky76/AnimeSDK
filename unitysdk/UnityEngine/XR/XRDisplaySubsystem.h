#pragma once
#include "unitysdk/unitysdk.h"

namespace System { template <typename T> class Action_1; }

#define UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_INVOKEDISPLAYFOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1FF6B3A0)
#define UNITYENGINE_XR_XRDISPLAYSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF6B400)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int XRDisplaySubsystem_TypeDefinitionIndex = 27668;

	class XRDisplaySubsystem
	{
	public:
		static ::System::Action_1<::System::Boolean>** StaticGet_displayFocusChanged()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(XRDisplaySubsystem_TypeDefinitionIndex)->GetStaticField(0x24E80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRDISPLAYSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void InvokeDisplayFocusChanged(::System::Boolean focus)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_INVOKEDISPLAYFOCUSCHANGED_OFFSET))(focus);
		}
	};
}

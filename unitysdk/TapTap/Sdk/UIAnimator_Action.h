#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define TAPTAP_SDK_UIANIMATOR_ACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define TAPTAP_SDK_UIANIMATOR_ACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F36B60)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int UIAnimator_Action_TypeDefinitionIndex = 20894;

	class UIAnimator_Action : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR_ACTION__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR_ACTION_INVOKE_OFFSET))(this);
		}
	};
}

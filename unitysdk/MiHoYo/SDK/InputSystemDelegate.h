#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class InputSystemDelegate_DelegateGetKeyEvent; }

#define MIHOYO_SDK_INPUTSYSTEMDELEGATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1B69E3E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int InputSystemDelegate_TypeDefinitionIndex = 7568;

	class InputSystemDelegate : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::InputSystemDelegate_DelegateGetKeyEvent** StaticGet_KeyDownHandler()
		{
			return (::MiHoYo::SDK::InputSystemDelegate_DelegateGetKeyEvent**)UnitySDK::FromName("MiHoYo.SDK", "InputSystemDelegate")->GetStaticField(0x1E100);
		}

		static ::MiHoYo::SDK::InputSystemDelegate_DelegateGetKeyEvent** StaticGet_KeyUpHandler()
		{
			return (::MiHoYo::SDK::InputSystemDelegate_DelegateGetKeyEvent**)UnitySDK::FromName("MiHoYo.SDK", "InputSystemDelegate")->GetStaticField(0x1E108);
		}

		static ::MiHoYo::SDK::InputSystemDelegate_DelegateGetKeyEvent** StaticGet_KeyHandler()
		{
			return (::MiHoYo::SDK::InputSystemDelegate_DelegateGetKeyEvent**)UnitySDK::FromName("MiHoYo.SDK", "InputSystemDelegate")->GetStaticField(0x1E110);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEMDELEGATE_CTOR_OFFSET))(this);
		}

	};
}

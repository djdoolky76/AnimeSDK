#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/IMECompositionMode.h"
namespace MiHoYo::SDK { class InputSystemDelegate_DelegateGetIMECompositionMode; }
namespace MiHoYo::SDK { class InputSystemDelegate_DelegateSetIMECompositionMode; }
namespace System { class Object; }

#define MIHOYO_SDK_MIHOYOBASESDK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xAFC3B00)
#define MIHOYO_SDK_MIHOYOBASESDK___C_CTOR_OFFSET UNITYSDK_OFFSET(0xAFC3B30)
#define MIHOYO_SDK_MIHOYOBASESDK___C__REGISTERINPUTSYSTEM_B__59_0_OFFSET UNITYSDK_OFFSET(0xAFC3B40)
#define MIHOYO_SDK_MIHOYOBASESDK___C__REGISTERINPUTSYSTEM_B__59_1_OFFSET UNITYSDK_OFFSET(0xAFC3B90)

namespace MiHoYo::SDK
{
	class MiHoYoBaseSDK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x257B0);
		}

		static ::MiHoYo::SDK::InputSystemDelegate_DelegateGetIMECompositionMode** StaticGet___9__59_0()
		{
			return (::MiHoYo::SDK::InputSystemDelegate_DelegateGetIMECompositionMode**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x257B8);
		}

		static ::MiHoYo::SDK::InputSystemDelegate_DelegateSetIMECompositionMode** StaticGet___9__59_1()
		{
			return (::MiHoYo::SDK::InputSystemDelegate_DelegateSetIMECompositionMode**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x257C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK___C_CTOR_OFFSET))(this);
		}

		::UnityEngine::IMECompositionMode _RegisterInputSystem_b__59_0()
		{
			return ((::UnityEngine::IMECompositionMode(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK___C__REGISTERINPUTSYSTEM_B__59_0_OFFSET))(this);
		}

		::System::Void _RegisterInputSystem_b__59_1(::UnityEngine::IMECompositionMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::IMECompositionMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK___C__REGISTERINPUTSYSTEM_B__59_1_OFFSET))(this, a1);
		}

	};
}

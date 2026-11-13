#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class Web; }
namespace MiHoYo::SDK { class Web_OnWebViewPageBeforeHide; }
namespace System { class Object; }

#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B69C700)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B69C740)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER___C__OPENWEBPAGE_B__7_1_OFFSET UNITYSDK_OFFSET(0x1B69C750)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int WebPageManager___c_TypeDefinitionIndex = 8355;

	class WebPageManager___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Web_OnWebViewPageBeforeHide** StaticGet___9__7_1()
		{
			return (::MiHoYo::SDK::Web_OnWebViewPageBeforeHide**)UnitySDK::FromName("MiHoYo.SDK.HoYoPass", "<>c")->GetStaticField(0x500A0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.HoYoPass", "<>c")->GetStaticField(0x500A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::Void _OpenWebPage_b__7_1(::MiHoYo::SDK::Web* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER___C__OPENWEBPAGE_B__7_1_OFFSET))(this, a1);
		}

	};
}

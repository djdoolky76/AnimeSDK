#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace System { class Object; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_A8D16FAFE05F8D3C_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_A8D16FAFE05F8D3C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE7D60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebView_A8D16FAFE05F8D3C_TypeDefinitionIndex = 15393;

	class MiHoYoSDKWebView_A8D16FAFE05F8D3C : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_A8D16FAFE05F8D3C__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::MiHoYo::SDK::MiHoYoSDKWebView* B8334CB64332323A)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_A8D16FAFE05F8D3C_INVOKE_OFFSET))(this, B8334CB64332323A);
		}
	};
}

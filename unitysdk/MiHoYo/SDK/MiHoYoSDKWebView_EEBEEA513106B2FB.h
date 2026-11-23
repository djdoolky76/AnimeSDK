#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace System { class Object; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_EEBEEA513106B2FB_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_EEBEEA513106B2FB__CTOR_OFFSET UNITYSDK_OFFSET(0x2936F40)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebView_EEBEEA513106B2FB_TypeDefinitionIndex = 15389;

	class MiHoYoSDKWebView_EEBEEA513106B2FB : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_EEBEEA513106B2FB__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::MiHoYo::SDK::MiHoYoSDKWebView* B8334CB64332323A, ::System::Boolean FBF3AC291087F95C)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_EEBEEA513106B2FB_INVOKE_OFFSET))(this, B8334CB64332323A, FBF3AC291087F95C);
		}
	};
}

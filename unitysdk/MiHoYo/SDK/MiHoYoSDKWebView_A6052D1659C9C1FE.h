#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_A6052D1659C9C1FE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_A6052D1659C9C1FE__CTOR_OFFSET UNITYSDK_OFFSET(0x2936B70)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebView_A6052D1659C9C1FE_TypeDefinitionIndex = 15390;

	class MiHoYoSDKWebView_A6052D1659C9C1FE : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_A6052D1659C9C1FE__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::MiHoYo::SDK::MiHoYoSDKWebView* B8334CB64332323A, ::System::String* B960AC235824C6C8)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_A6052D1659C9C1FE_INVOKE_OFFSET))(this, B8334CB64332323A, B960AC235824C6C8);
		}
	};
}

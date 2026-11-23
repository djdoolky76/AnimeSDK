#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class ACCD4AE635058D88;
namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace System { class Object; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_B89A7B0CB23354E7_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_B89A7B0CB23354E7__CTOR_OFFSET UNITYSDK_OFFSET(0x20F9B00)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebView_B89A7B0CB23354E7_TypeDefinitionIndex = 15391;

	class MiHoYoSDKWebView_B89A7B0CB23354E7 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_B89A7B0CB23354E7__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::MiHoYo::SDK::MiHoYoSDKWebView* B8334CB64332323A, ::ACCD4AE635058D88* EE043FFE6C44A0FD)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::ACCD4AE635058D88*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_B89A7B0CB23354E7_INVOKE_OFFSET))(this, B8334CB64332323A, EE043FFE6C44A0FD);
		}
	};
}

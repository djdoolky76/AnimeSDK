#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ECABA58F8ED50B6A.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace System { class Object; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADF6117F29253F41_INVOKE_OFFSET UNITYSDK_OFFSET(0x2936DF0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADF6117F29253F41__CTOR_OFFSET UNITYSDK_OFFSET(0x2936E20)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebView_ADF6117F29253F41_TypeDefinitionIndex = 15383;

	class MiHoYoSDKWebView_ADF6117F29253F41 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADF6117F29253F41__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::MiHoYo::SDK::MiHoYoSDKWebView* B8334CB64332323A, ::ECABA58F8ED50B6A B083BE7841B347C4)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::ECABA58F8ED50B6A))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADF6117F29253F41_INVOKE_OFFSET))(this, B8334CB64332323A, B083BE7841B347C4);
		}
	};
}

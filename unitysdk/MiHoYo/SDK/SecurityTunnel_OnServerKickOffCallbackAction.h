#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_SECURITYTUNNEL_ONSERVERKICKOFFCALLBACKACTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB04C860)
#define MIHOYO_SDK_SECURITYTUNNEL_ONSERVERKICKOFFCALLBACKACTION_CTOR_OFFSET UNITYSDK_OFFSET(0xB04C7F0)
#define MIHOYO_SDK_SECURITYTUNNEL_ONSERVERKICKOFFCALLBACKACTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB04C890)
#define MIHOYO_SDK_SECURITYTUNNEL_ONSERVERKICKOFFCALLBACKACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0xB043550)

namespace MiHoYo::SDK
{
	class SecurityTunnel_OnServerKickOffCallbackAction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONSERVERKICKOFFCALLBACKACTION_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONSERVERKICKOFFCALLBACKACTION_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONSERVERKICKOFFCALLBACKACTION_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONSERVERKICKOFFCALLBACKACTION_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}

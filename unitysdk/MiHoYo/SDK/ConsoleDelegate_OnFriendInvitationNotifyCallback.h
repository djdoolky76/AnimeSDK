#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLEDELEGATE_ONFRIENDINVITATIONNOTIFYCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D3354D0)
#define MIHOYO_SDK_CONSOLEDELEGATE_ONFRIENDINVITATIONNOTIFYCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D335550)
#define MIHOYO_SDK_CONSOLEDELEGATE_ONFRIENDINVITATIONNOTIFYCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D3351C0)
#define MIHOYO_SDK_CONSOLEDELEGATE_ONFRIENDINVITATIONNOTIFYCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3351B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_OnFriendInvitationNotifyCallback_TypeDefinitionIndex = 18942;

	class ConsoleDelegate_OnFriendInvitationNotifyCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_ONFRIENDINVITATIONNOTIFYCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 result, ::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_ONFRIENDINVITATIONNOTIFYCALLBACK_INVOKE_OFFSET))(this, result, jsonString);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 result, ::System::String* jsonString, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_ONFRIENDINVITATIONNOTIFYCALLBACK_BEGININVOKE_OFFSET))(this, result, jsonString, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_ONFRIENDINVITATIONNOTIFYCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

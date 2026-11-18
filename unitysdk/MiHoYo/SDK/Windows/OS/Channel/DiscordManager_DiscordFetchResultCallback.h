#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class DiscordPresenceExtension; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_DISCORDFETCHRESULTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D399310)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_DISCORDFETCHRESULTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D3993F0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_DISCORDFETCHRESULTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D398EC0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_DISCORDFETCHRESULTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D398EB0)

namespace MiHoYo::SDK::Windows::OS::Channel
{
	inline static constexpr unsigned int DiscordManager_DiscordFetchResultCallback_TypeDefinitionIndex = 19632;

	class DiscordManager_DiscordFetchResultCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_DISCORDFETCHRESULTCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Boolean ok, ::System::String* accessToken, ::System::Int32 expiresIn, ::System::Int64 expireAt, ::MiHoYo::SDK::PC::OS::DiscordPresenceExtension* serverPresence, ::System::String* errMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::Int32, ::System::Int64, ::MiHoYo::SDK::PC::OS::DiscordPresenceExtension*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_DISCORDFETCHRESULTCALLBACK_INVOKE_OFFSET))(this, ok, accessToken, expiresIn, expireAt, serverPresence, errMsg);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean ok, ::System::String* accessToken, ::System::Int32 expiresIn, ::System::Int64 expireAt, ::MiHoYo::SDK::PC::OS::DiscordPresenceExtension* serverPresence, ::System::String* errMsg, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::Int32, ::System::Int64, ::MiHoYo::SDK::PC::OS::DiscordPresenceExtension*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_DISCORDFETCHRESULTCALLBACK_BEGININVOKE_OFFSET))(this, ok, accessToken, expiresIn, expireAt, serverPresence, errMsg, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_DISCORDFETCHRESULTCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

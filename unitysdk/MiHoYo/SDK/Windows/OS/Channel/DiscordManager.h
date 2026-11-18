#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/KibanaLogLevel.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK::PC::OS { class DiscordPresenceExtension; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelBaseResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelLogoutResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelPresenceResult; }
namespace MiHoYo::SDK::Windows::OS::Channel { class DiscordManager_DiscordFetchResultCallback; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_CONNECTANDPUBLISH_OFFSET UNITYSDK_OFFSET(0x1CE796B0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_ENSUREDISCORDINITED_OFFSET UNITYSDK_OFFSET(0x1CE7A250)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_FETCHDISCORDPRESENCETOKEN_OFFSET UNITYSDK_OFFSET(0x1CE79570)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_INVOKEDISCORDSETPRESENCE_OFFSET UNITYSDK_OFFSET(0x1CE79940)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_ISLIFECYCLECURRENT_OFFSET UNITYSDK_OFFSET(0x1CE79A90)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_ONNATIVESIGNOUT_OFFSET UNITYSDK_OFFSET(0x1CE79E20)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_PARSESERVERACTIVITY_OFFSET UNITYSDK_OFFSET(0x1CE7A590)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_PUBLISHPRESENCE_OFFSET UNITYSDK_OFFSET(0x1CE797D0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_READJSONINT_OFFSET UNITYSDK_OFFSET(0x1CE7B510)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_READJSONLONG_OFFSET UNITYSDK_OFFSET(0x1CE7B230)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_READJSONSTRING_OFFSET UNITYSDK_OFFSET(0x1CE7AFF0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_REPLYDISCORDRP_OFFSET UNITYSDK_OFFSET(0x1CE79310)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_REPORTKIBANA_OFFSET UNITYSDK_OFFSET(0x1CE788A0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_REPORTOUTCOME_OFFSET UNITYSDK_OFFSET(0x1CE78AD0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_TRYAUTOTRIGGER_OFFSET UNITYSDK_OFFSET(0x1CE79ED0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_TRYCLEARANDDISCONNECT_OFFSET UNITYSDK_OFFSET(0x1CE585C0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_UPDATERICHPRESENCE_OFFSET UNITYSDK_OFFSET(0x1CE78BC0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE7B760)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE7B750)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER__TRYCLEARANDDISCONNECT_B__20_0_OFFSET UNITYSDK_OFFSET(0x1CE7B7A0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER__TRYCLEARANDDISCONNECT_B__20_1_OFFSET UNITYSDK_OFFSET(0x1CE7B890)

namespace MiHoYo::SDK::Windows::OS::Channel
{
	inline static constexpr unsigned int DiscordManager_TypeDefinitionIndex = 19631;

	class DiscordManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Windows::OS::Channel::DiscordManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Windows::OS::Channel::DiscordManager**)Il2CppClass::FromTypeDefinitionIndex(DiscordManager_TypeDefinitionIndex)->GetStaticField(0x9F90);
		}
		// static const ::System::Int64 MillisecondsPerSecond = 0x3E8; // 0x0
		::System::String* _lastRegion; // 0x10
		::System::String* _lastAid; // 0x18
		::System::String* _lastAccessToken; // 0x20
		::System::Int32 _expectedNativeSignOuts; // 0x28
		::System::Boolean _discordLoggedIn; // 0x2C
		::System::Boolean _discordInited; // 0x2D
		::System::Boolean _isFetchingDiscordToken; // 0x2E
		::System::Byte _padding0[0x1];
		::System::Int64 _expireAtUnix; // 0x30
		::System::Int32 _generation; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void ReportKibana(::System::String* eventName, ::MiHoYo::SDK::KibanaLogLevel level, ::System::Int32 code, ::System::String* msg)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::KibanaLogLevel, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_REPORTKIBANA_OFFSET))(eventName, level, code, msg);
		}

		static ::System::Void ReportOutcome(::System::String* eventName, ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult* result)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_REPORTOUTCOME_OFFSET))(eventName, result);
		}

		::System::Void UpdateRichPresence(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_UPDATERICHPRESENCE_OFFSET))(this, callback);
		}

		::System::Void ConnectAndPublish(::System::Int32 generation, ::System::String* aid, ::System::String* region, ::System::String* roleId, ::System::String* accessToken, ::System::Int32 expiresIn, ::MiHoYo::SDK::PC::OS::DiscordPresenceExtension* serverPresence, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::MiHoYo::SDK::PC::OS::DiscordPresenceExtension*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_CONNECTANDPUBLISH_OFFSET))(this, generation, aid, region, roleId, accessToken, expiresIn, serverPresence, callback);
		}

		::System::Void PublishPresence(::MiHoYo::SDK::PC::OS::DiscordPresenceExtension* presence, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::DiscordPresenceExtension*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_PUBLISHPRESENCE_OFFSET))(this, presence, callback);
		}

		::System::Boolean IsLifecycleCurrent(::System::Int32 generation, ::System::String* aid, ::System::String* region, ::System::String* roleId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_ISLIFECYCLECURRENT_OFFSET))(this, generation, aid, region, roleId);
		}

		::System::Void OnNativeSignOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_ONNATIVESIGNOUT_OFFSET))(this);
		}

		::System::Void TryAutoTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_TRYAUTOTRIGGER_OFFSET))(this);
		}

		::System::Void TryClearAndDisconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_TRYCLEARANDDISCONNECT_OFFSET))(this);
		}

		::System::Boolean EnsureDiscordInited()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_ENSUREDISCORDINITED_OFFSET))(this);
		}

		::System::Void InvokeDiscordSetPresence(::MiHoYo::SDK::PC::OS::DiscordPresenceExtension* presence, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::DiscordPresenceExtension*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_INVOKEDISCORDSETPRESENCE_OFFSET))(this, presence, callback);
		}

		::System::Void ReplyDiscordRP(::System::Action_1<::System::String*>* callback, ::System::Boolean ok, ::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_REPLYDISCORDRP_OFFSET))(this, callback, ok, msg);
		}

		::System::Void FetchDiscordPresenceToken(::MiHoYo::SDK::AccountModel* account, ::System::String* gameBiz, ::System::String* region, ::System::String* roleId, ::System::String* aidStr, ::MiHoYo::SDK::Windows::OS::Channel::DiscordManager_DiscordFetchResultCallback* done)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::MiHoYo::SDK::Windows::OS::Channel::DiscordManager_DiscordFetchResultCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_FETCHDISCORDPRESENCETOKEN_OFFSET))(this, account, gameBiz, region, roleId, aidStr, done);
		}

		::MiHoYo::SDK::PC::OS::DiscordPresenceExtension* ParseServerActivity(::MiHoYo::SDK::JSONNode* activityNode)
		{
			return ((::MiHoYo::SDK::PC::OS::DiscordPresenceExtension*(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_PARSESERVERACTIVITY_OFFSET))(this, activityNode);
		}

		static ::System::String* ReadJsonString(::MiHoYo::SDK::JSONNode* root, ::System::String* key)
		{
			return ((::System::String*(*)(::MiHoYo::SDK::JSONNode*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_READJSONSTRING_OFFSET))(root, key);
		}

		static ::System::Int32 ReadJsonInt(::MiHoYo::SDK::JSONNode* root, ::System::String* key)
		{
			return ((::System::Int32(*)(::MiHoYo::SDK::JSONNode*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_READJSONINT_OFFSET))(root, key);
		}

		static ::System::Int64 ReadJsonLong(::MiHoYo::SDK::JSONNode* root, ::System::String* key)
		{
			return ((::System::Int64(*)(::MiHoYo::SDK::JSONNode*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER_READJSONLONG_OFFSET))(root, key);
		}

		::System::Void _TryClearAndDisconnect_b__20_0(::MiHoYo::SDK::PC::OS::HoYoChannelPresenceResult* clearResult)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelPresenceResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER__TRYCLEARANDDISCONNECT_B__20_0_OFFSET))(this, clearResult);
		}

		::System::Void _TryClearAndDisconnect_b__20_1(::MiHoYo::SDK::PC::OS::HoYoChannelLogoutResult* logoutResult)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelLogoutResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_DISCORDMANAGER__TRYCLEARANDDISCONNECT_B__20_1_OFFSET))(this, logoutResult);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/AkMonitorErrorLevel.h"
#include "unitysdk/System/Object.h"
class AkAudioSourceChangeCallbackInfo;
class AkBankCallbackInfo;
class AkCallbackManager_BGMCallback;
class AkCallbackManager_BGMCallbackPackage;
class AkCallbackManager_EventCallbackPackage;
class AkCallbackManager_InitializationSettings;
class AkCallbackManager_MonitoringCallback;
class AkDurationCallbackInfo;
class AkDynamicSequenceItemCallbackInfo;
class AkEventCallbackInfo;
class AkMIDIEventCallbackInfo;
class AkMarkerCallbackInfo;
class AkMonitoringCallbackInfo;
class AkMusicPlaylistCallbackInfo;
class AkMusicSyncCallbackInfo;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AKCALLBACKMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x20830BD0)
#define AKCALLBACKMANAGER_GET_ISLOGGINGENABLED_OFFSET UNITYSDK_OFFSET(0x2082DBF0)
#define AKCALLBACKMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x2082E870)
#define AKCALLBACKMANAGER_POSTCALLBACKS_OFFSET UNITYSDK_OFFSET(0x2082F0B0)
#define AKCALLBACKMANAGER_REMOVEBANKCALLBACK_OFFSET UNITYSDK_OFFSET(0x2082E280)
#define AKCALLBACKMANAGER_REMOVEEVENTCALLBACKCOOKIE_OFFSET UNITYSDK_OFFSET(0x2082DF50)
#define AKCALLBACKMANAGER_REMOVEEVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x2082DC60)
#define AKCALLBACKMANAGER_SETBGMCALLBACK_OFFSET UNITYSDK_OFFSET(0x2082EFE0)
#define AKCALLBACKMANAGER_SETLASTADDEDPLAYINGID_OFFSET UNITYSDK_OFFSET(0x2082E5E0)
#define AKCALLBACKMANAGER_SETMONITORINGCALLBACK_OFFSET UNITYSDK_OFFSET(0x2082EE10)
#define AKCALLBACKMANAGER_SET_ISLOGGINGENABLED_OFFSET UNITYSDK_OFFSET(0x2082DC30)
#define AKCALLBACKMANAGER_TERM_OFFSET UNITYSDK_OFFSET(0x2082EAD0)

inline static constexpr unsigned int AkCallbackManager_TypeDefinitionIndex = 45897;

	class AkCallbackManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>** StaticGet_m_mapBankCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>**)UnitySDK::FromName("", "AkCallbackManager")->GetStaticField(0x6D560);
		}

		static ::AkEventCallbackInfo** StaticGet_AkEventCallbackInfo()
		{
			return (::AkEventCallbackInfo**)UnitySDK::FromName("", "AkCallbackManager")->GetStaticField(0x6D568);
		}

		static ::AkMusicPlaylistCallbackInfo** StaticGet_AkMusicPlaylistCallbackInfo()
		{
			return (::AkMusicPlaylistCallbackInfo**)UnitySDK::FromName("", "AkCallbackManager")->GetStaticField(0x6D570);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>** StaticGet_m_mapEventCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>**)UnitySDK::FromName("", "AkCallbackManager")->GetStaticField(0x6D578);
		}

		static ::AkMIDIEventCallbackInfo** StaticGet_AkMIDIEventCallbackInfo()
		{
			return (::AkMIDIEventCallbackInfo**)UnitySDK::FromName("", "AkCallbackManager")->GetStaticField(0x6D580);
		}

		static ::AkCallbackManager_BGMCallbackPackage** StaticGet_ms_sourceChangeCallbackPkg()
		{
			return (::AkCallbackManager_BGMCallbackPackage**)UnitySDK::FromName("", "AkCallbackManager")->GetStaticField(0x6D588);
		}

		static ::AkDurationCallbackInfo** StaticGet_AkDurationCallbackInfo()
		{
			return (::AkDurationCallbackInfo**)UnitySDK::FromName("", "AkCallbackManager")->GetStaticField(0x6D590);
		}

		static ::AkMarkerCallbackInfo** StaticGet_AkMarkerCallbackInfo()
		{
			return (::AkMarkerCallbackInfo**)UnitySDK::FromName("", "AkCallbackManager")->GetStaticField(0x6D598);
		}

		static ::AkCallbackManager_MonitoringCallback** StaticGet_m_MonitoringCB()
		{
			return (::AkCallbackManager_MonitoringCallback**)UnitySDK::FromName("", "AkCallbackManager")->GetStaticField(0x6D5A0);
		}

		static ::AkMonitoringCallbackInfo** StaticGet_AkMonitoringCallbackInfo()
		{
			return (::AkMonitoringCallbackInfo**)UnitySDK::FromName("", "AkCallbackManager")->GetStaticField(0x6D5A8);
		}

		static ::AkCallbackManager_EventCallbackPackage** StaticGet_m_LastAddedEventPackage()
		{
			return (::AkCallbackManager_EventCallbackPackage**)UnitySDK::FromName("", "AkCallbackManager")->GetStaticField(0x6D5B0);
		}

		static ::AkDynamicSequenceItemCallbackInfo** StaticGet_AkDynamicSequenceItemCallbackInfo()
		{
			return (::AkDynamicSequenceItemCallbackInfo**)UnitySDK::FromName("", "AkCallbackManager")->GetStaticField(0x6D5B8);
		}

		static ::AkMusicSyncCallbackInfo** StaticGet_AkMusicSyncCallbackInfo()
		{
			return (::AkMusicSyncCallbackInfo**)UnitySDK::FromName("", "AkCallbackManager")->GetStaticField(0x6D5C0);
		}

		static ::AkAudioSourceChangeCallbackInfo** StaticGet_AkAudioSourceChangeCallbackInfo()
		{
			return (::AkAudioSourceChangeCallbackInfo**)UnitySDK::FromName("", "AkCallbackManager")->GetStaticField(0x6D5C8);
		}

		static ::AkBankCallbackInfo** StaticGet_AkBankCallbackInfo()
		{
			return (::AkBankCallbackInfo**)UnitySDK::FromName("", "AkCallbackManager")->GetStaticField(0x6D5D0);
		}

		static ::System::IntPtr* StaticGet_m_pNotifMem()
		{
			return (::System::IntPtr*)UnitySDK::FromName("", "AkCallbackManager")->GetStaticField(0x15BB0);
		}

		static ::System::Boolean* StaticGet__IsLoggingEnabled_k__BackingField()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AkCallbackManager")->GetStaticField(0x15BB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_CCTOR_OFFSET))();
		}

		static ::System::Boolean get_IsLoggingEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_GET_ISLOGGINGENABLED_OFFSET))();
		}

		static ::System::Void set_IsLoggingEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_SET_ISLOGGINGENABLED_OFFSET))(a1);
		}

		static ::System::Void RemoveEventCallback(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_REMOVEEVENTCALLBACK_OFFSET))(a1);
		}

		static ::System::Void RemoveEventCallbackCookie(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_REMOVEEVENTCALLBACKCOOKIE_OFFSET))(a1);
		}

		static ::System::Void RemoveBankCallback(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_REMOVEBANKCALLBACK_OFFSET))(a1);
		}

		static ::System::Void SetLastAddedPlayingID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_SETLASTADDEDPLAYINGID_OFFSET))(a1);
		}

		static ::AKRESULT Init(::AkCallbackManager_InitializationSettings* a1)
		{
			return ((::AKRESULT(*)(::AkCallbackManager_InitializationSettings*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_INIT_OFFSET))(a1);
		}

		static ::System::Void Term()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_TERM_OFFSET))();
		}

		static ::System::Void SetMonitoringCallback(::AkMonitorErrorLevel a1, ::AkCallbackManager_MonitoringCallback* a2)
		{
			return ((::System::Void(*)(::AkMonitorErrorLevel, ::AkCallbackManager_MonitoringCallback*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_SETMONITORINGCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void SetBGMCallback(::AkCallbackManager_BGMCallback* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::AkCallbackManager_BGMCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_SETBGMCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Int32 PostCallbacks()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_POSTCALLBACKS_OFFSET))();
		}

	};

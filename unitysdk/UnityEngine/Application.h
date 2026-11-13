#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ApplicationInstallMode.h"
#include "unitysdk/UnityEngine/ApplicationSandboxType.h"
#include "unitysdk/UnityEngine/LogType.h"
#include "unitysdk/UnityEngine/NetworkReachability.h"
#include "unitysdk/UnityEngine/RuntimePlatform.h"
#include "unitysdk/UnityEngine/StackTraceLogType.h"
#include "unitysdk/UnityEngine/SystemLanguage.h"
#include "unitysdk/UnityEngine/ThreadPriority.h"
#include "unitysdk/UnityEngine/UserAuthorization.h"
#include "unitysdk/UnityEngine/PooledName.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class Application_AdvertisingIdentifierCallback; }
namespace UnityEngine { class Application_LogCallback; }
namespace UnityEngine { class Application_LowMemoryCallback; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Events { class UnityAction; }

#define UNITYENGINE_APPLICATION_ADD_DEEPLINKACTIVATED_OFFSET UNITYSDK_OFFSET(0x1F9C3950)
#define UNITYENGINE_APPLICATION_ADD_FOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1F9C37F0)
#define UNITYENGINE_APPLICATION_ADD_LOGMESSAGERECEIVEDTHREADED_OFFSET UNITYSDK_OFFSET(0x1F9C21F0)
#define UNITYENGINE_APPLICATION_ADD_LOGMESSAGERECEIVED_OFFSET UNITYSDK_OFFSET(0x1F9C2150)
#define UNITYENGINE_APPLICATION_ADD_LOWMEMORY_OFFSET UNITYSDK_OFFSET(0x1F9C1FF0)
#define UNITYENGINE_APPLICATION_ADD_ONBEFORERENDER_OFFSET UNITYSDK_OFFSET(0x1F9C3010)
#define UNITYENGINE_APPLICATION_ADD_QUITTING_OFFSET UNITYSDK_OFFSET(0x1F9C3BD0)
#define UNITYENGINE_APPLICATION_ADD_WANTSTOQUIT_OFFSET UNITYSDK_OFFSET(0x1F9C3AB0)
#define UNITYENGINE_APPLICATION_BUILDINVOCATIONFORARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1F9C2CB0)
#define UNITYENGINE_APPLICATION_CALLLOGCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F9C2290)
#define UNITYENGINE_APPLICATION_CALLLOWMEMORY_OFFSET UNITYSDK_OFFSET(0x1F9C2110)
#define UNITYENGINE_APPLICATION_CANCELQUIT_OFFSET UNITYSDK_OFFSET(0x1F9C1940)
#define UNITYENGINE_APPLICATION_CANSTREAMEDLEVELBELOADED_1_OFFSET UNITYSDK_OFFSET(0x1F9C1A30)
#define UNITYENGINE_APPLICATION_CANSTREAMEDLEVELBELOADED_OFFSET UNITYSDK_OFFSET(0x1F9C19F0)
#define UNITYENGINE_APPLICATION_CAPTURESCREENSHOT_1_OFFSET UNITYSDK_OFFSET(0x1F9C2FC0)
#define UNITYENGINE_APPLICATION_CAPTURESCREENSHOT_OFFSET UNITYSDK_OFFSET(0x1F9C2F70)
#define UNITYENGINE_APPLICATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9C4700)
#define UNITYENGINE_APPLICATION_CUSTOMFINDSCRIPTBYCLASSOPT_OFFSET UNITYSDK_OFFSET(0x1F9C1EC0)
#define UNITYENGINE_APPLICATION_CUSTOMUPDATEPRELOADMANAGER_OFFSET UNITYSDK_OFFSET(0x1F9C1EB0)
#define UNITYENGINE_APPLICATION_DONTDESTROYONLOAD_OFFSET UNITYSDK_OFFSET(0x1F9C2F50)
#define UNITYENGINE_APPLICATION_EXTERNALCALL_OFFSET UNITYSDK_OFFSET(0x1F9C2C90)
#define UNITYENGINE_APPLICATION_EXTERNALEVAL_OFFSET UNITYSDK_OFFSET(0x1F9C1CB0)
#define UNITYENGINE_APPLICATION_FORCECRASH_OFFSET UNITYSDK_OFFSET(0x1F9C1DB0)
#define UNITYENGINE_APPLICATION_GETAVAILABLEDISKSPACE_OFFSET UNITYSDK_OFFSET(0x1F9C1CA0)
#define UNITYENGINE_APPLICATION_GETBUILDTAGS_OFFSET UNITYSDK_OFFSET(0x1F9C1AA0)
#define UNITYENGINE_APPLICATION_GETGFXRENDERTHREADKERNELIDANDROID_OFFSET UNITYSDK_OFFSET(0x1F9C1F20)
#define UNITYENGINE_APPLICATION_GETINTEGRATEQUEUESIZE_OFFSET UNITYSDK_OFFSET(0x1F9C1F00)
#define UNITYENGINE_APPLICATION_GETJOBQUEUETHREADKERNELIDSANDROID_OFFSET UNITYSDK_OFFSET(0x1F9C1F40)
#define UNITYENGINE_APPLICATION_GETLOADINGTHREADKERNELIDANDROID_OFFSET UNITYSDK_OFFSET(0x1F9C1F30)
#define UNITYENGINE_APPLICATION_GETMAINTHREADKERNELIDANDROID_OFFSET UNITYSDK_OFFSET(0x1F9C1F10)
#define UNITYENGINE_APPLICATION_GETPRELOADQUEUESIZE_OFFSET UNITYSDK_OFFSET(0x1F9C1EE0)
#define UNITYENGINE_APPLICATION_GETSTACKTRACELOGTYPE_OFFSET UNITYSDK_OFFSET(0x1F9C1E10)
#define UNITYENGINE_APPLICATION_GETSTREAMPROGRESSFORLEVEL_1_OFFSET UNITYSDK_OFFSET(0x1F9C19C0)
#define UNITYENGINE_APPLICATION_GETSTREAMPROGRESSFORLEVEL_OFFSET UNITYSDK_OFFSET(0x1F9C1970)
#define UNITYENGINE_APPLICATION_GETVALUEFORARGV_OFFSET UNITYSDK_OFFSET(0x1F9C1B40)
#define UNITYENGINE_APPLICATION_GET_ABSOLUTEURL_OFFSET UNITYSDK_OFFSET(0x1F9C1C90)
#define UNITYENGINE_APPLICATION_GET_BACKGROUNDLOADINGPRIORITY_OFFSET UNITYSDK_OFFSET(0x1F9C1E40)
#define UNITYENGINE_APPLICATION_GET_BUILDGUID_OFFSET UNITYSDK_OFFSET(0x1F9C1AC0)
#define UNITYENGINE_APPLICATION_GET_CLOUDPROJECTID_OFFSET UNITYSDK_OFFSET(0x1F9C1D80)
#define UNITYENGINE_APPLICATION_GET_COMPANYNAME_OFFSET UNITYSDK_OFFSET(0x1F9C1D70)
#define UNITYENGINE_APPLICATION_GET_CONSOLELOGPATH_OFFSET UNITYSDK_OFFSET(0x1F9C1E30)
#define UNITYENGINE_APPLICATION_GET_DATAPATHNAME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F9C1B90)
#define UNITYENGINE_APPLICATION_GET_DATAPATHNAME_OFFSET UNITYSDK_OFFSET(0x1F9C1B60)
#define UNITYENGINE_APPLICATION_GET_DATAPATH_OFFSET UNITYSDK_OFFSET(0x1F9C1B50)
#define UNITYENGINE_APPLICATION_GET_GENUINECHECKAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1F9C1E70)
#define UNITYENGINE_APPLICATION_GET_GENUINE_OFFSET UNITYSDK_OFFSET(0x1F9C1E60)
#define UNITYENGINE_APPLICATION_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1F9C1D30)
#define UNITYENGINE_APPLICATION_GET_INSTALLERNAME_OFFSET UNITYSDK_OFFSET(0x1F9C1D20)
#define UNITYENGINE_APPLICATION_GET_INSTALLMODE_OFFSET UNITYSDK_OFFSET(0x1F9C1D40)
#define UNITYENGINE_APPLICATION_GET_INTERNETREACHABILITY_OFFSET UNITYSDK_OFFSET(0x1F9C1FE0)
#define UNITYENGINE_APPLICATION_GET_ISBATCHMODE_OFFSET UNITYSDK_OFFSET(0x1F9C1B00)
#define UNITYENGINE_APPLICATION_GET_ISCONSOLEPLATFORM_OFFSET UNITYSDK_OFFSET(0x1F9C1FA0)
#define UNITYENGINE_APPLICATION_GET_ISEDITOR_OFFSET UNITYSDK_OFFSET(0x1F9C2F40)
#define UNITYENGINE_APPLICATION_GET_ISFOCUSED_OFFSET UNITYSDK_OFFSET(0x1F9C1A60)
#define UNITYENGINE_APPLICATION_GET_ISFOREGROUNDWINDOW_OFFSET UNITYSDK_OFFSET(0x1F9C1A70)
#define UNITYENGINE_APPLICATION_GET_ISHUMANCONTROLLINGUS_OFFSET UNITYSDK_OFFSET(0x1F9C1B20)
#define UNITYENGINE_APPLICATION_GET_ISLOADINGLEVEL_OFFSET UNITYSDK_OFFSET(0x1F9C1960)
#define UNITYENGINE_APPLICATION_GET_ISMOBILEPLATFORM_OFFSET UNITYSDK_OFFSET(0x1F9C1F60)
#define UNITYENGINE_APPLICATION_GET_ISPLAYER_OFFSET UNITYSDK_OFFSET(0x1F9C2F30)
#define UNITYENGINE_APPLICATION_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1F9C1A40)
#define UNITYENGINE_APPLICATION_GET_ISTESTRUN_OFFSET UNITYSDK_OFFSET(0x1F9C1B10)
#define UNITYENGINE_APPLICATION_GET_LEVELCOUNT_OFFSET UNITYSDK_OFFSET(0x1F9C41B0)
#define UNITYENGINE_APPLICATION_GET_LOADEDLEVELNAME_OFFSET UNITYSDK_OFFSET(0x1F9C4240)
#define UNITYENGINE_APPLICATION_GET_LOADEDLEVEL_OFFSET UNITYSDK_OFFSET(0x1F9C41E0)
#define UNITYENGINE_APPLICATION_GET_PERSISTENTDATAPATHNAME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F9C1C30)
#define UNITYENGINE_APPLICATION_GET_PERSISTENTDATAPATHNAME_OFFSET UNITYSDK_OFFSET(0x1F9C1C00)
#define UNITYENGINE_APPLICATION_GET_PERSISTENTDATAPATH_OFFSET UNITYSDK_OFFSET(0x1F9C1BF0)
#define UNITYENGINE_APPLICATION_GET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x1F9C1F50)
#define UNITYENGINE_APPLICATION_GET_PLAYERFASTQUIT_OFFSET UNITYSDK_OFFSET(0x1F9C1A80)
#define UNITYENGINE_APPLICATION_GET_PRODUCTNAME_OFFSET UNITYSDK_OFFSET(0x1F9C1D60)
#define UNITYENGINE_APPLICATION_GET_RUNINBACKGROUND_OFFSET UNITYSDK_OFFSET(0x1F9C1AD0)
#define UNITYENGINE_APPLICATION_GET_SANDBOXTYPE_OFFSET UNITYSDK_OFFSET(0x1F9C1D50)
#define UNITYENGINE_APPLICATION_GET_STACKTRACELOGTYPE_OFFSET UNITYSDK_OFFSET(0x1F9C1DF0)
#define UNITYENGINE_APPLICATION_GET_STREAMEDBYTES_OFFSET UNITYSDK_OFFSET(0x1F9C19D0)
#define UNITYENGINE_APPLICATION_GET_STREAMINGASSETSPATHNAME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F9C1BE0)
#define UNITYENGINE_APPLICATION_GET_STREAMINGASSETSPATHNAME_OFFSET UNITYSDK_OFFSET(0x1F9C1BB0)
#define UNITYENGINE_APPLICATION_GET_STREAMINGASSETSPATH_OFFSET UNITYSDK_OFFSET(0x1F9C1BA0)
#define UNITYENGINE_APPLICATION_GET_SUBMITANALYTICS_OFFSET UNITYSDK_OFFSET(0x1F9C1EA0)
#define UNITYENGINE_APPLICATION_GET_SYSTEMLANGUAGE_OFFSET UNITYSDK_OFFSET(0x1F9C1FD0)
#define UNITYENGINE_APPLICATION_GET_TARGETFRAMERATE_OFFSET UNITYSDK_OFFSET(0x1F9C1DC0)
#define UNITYENGINE_APPLICATION_GET_TEMPORARYCACHEPATHNAME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F9C1C80)
#define UNITYENGINE_APPLICATION_GET_TEMPORARYCACHEPATHNAME_OFFSET UNITYSDK_OFFSET(0x1F9C1C50)
#define UNITYENGINE_APPLICATION_GET_TEMPORARYCACHEPATH_OFFSET UNITYSDK_OFFSET(0x1F9C1C40)
#define UNITYENGINE_APPLICATION_GET_UNITYVERSION_OFFSET UNITYSDK_OFFSET(0x1F9C1D00)
#define UNITYENGINE_APPLICATION_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1F9C1D10)
#define UNITYENGINE_APPLICATION_GET_WEBSECURITYENABLED_OFFSET UNITYSDK_OFFSET(0x1F9C19E0)
#define UNITYENGINE_APPLICATION_HASARGV_OFFSET UNITYSDK_OFFSET(0x1F9C1B30)
#define UNITYENGINE_APPLICATION_HASPROLICENSE_OFFSET UNITYSDK_OFFSET(0x1F9C1AF0)
#define UNITYENGINE_APPLICATION_HASUSERAUTHORIZATION_OFFSET UNITYSDK_OFFSET(0x1F9C1E90)
#define UNITYENGINE_APPLICATION_INTERNAL_APPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x1F9C3E10)
#define UNITYENGINE_APPLICATION_INTERNAL_APPLICATIONWANTSTOQUIT_OFFSET UNITYSDK_OFFSET(0x1F9C3CF0)
#define UNITYENGINE_APPLICATION_INTERNAL_EXTERNALCALL_OFFSET UNITYSDK_OFFSET(0x1F9C1CF0)
#define UNITYENGINE_APPLICATION_INVOKEDEEPLINKACTIVATED_OFFSET UNITYSDK_OFFSET(0x1F9C4030)
#define UNITYENGINE_APPLICATION_INVOKEFOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1F9C4000)
#define UNITYENGINE_APPLICATION_INVOKEONADVERTISINGIDENTIFIERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F9C2330)
#define UNITYENGINE_APPLICATION_INVOKEONBEFORERENDER_OFFSET UNITYSDK_OFFSET(0x1F9C3E40)
#define UNITYENGINE_APPLICATION_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1F9C1A50)
#define UNITYENGINE_APPLICATION_LOADLEVELADDITIVEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1F9C4530)
#define UNITYENGINE_APPLICATION_LOADLEVELADDITIVEASYNC_OFFSET UNITYSDK_OFFSET(0x1F9C44A0)
#define UNITYENGINE_APPLICATION_LOADLEVELADDITIVE_1_OFFSET UNITYSDK_OFFSET(0x1F9C4330)
#define UNITYENGINE_APPLICATION_LOADLEVELADDITIVE_OFFSET UNITYSDK_OFFSET(0x1F9C4300)
#define UNITYENGINE_APPLICATION_LOADLEVELASYNC_1_OFFSET UNITYSDK_OFFSET(0x1F9C4400)
#define UNITYENGINE_APPLICATION_LOADLEVELASYNC_OFFSET UNITYSDK_OFFSET(0x1F9C4370)
#define UNITYENGINE_APPLICATION_LOADLEVEL_1_OFFSET UNITYSDK_OFFSET(0x1F9C42D0)
#define UNITYENGINE_APPLICATION_LOADLEVEL_OFFSET UNITYSDK_OFFSET(0x1F9C42A0)
#define UNITYENGINE_APPLICATION_OBJECTTOJSSTRING_OFFSET UNITYSDK_OFFSET(0x1F9C2390)
#define UNITYENGINE_APPLICATION_OPENURL_OFFSET UNITYSDK_OFFSET(0x1F9C1DA0)
#define UNITYENGINE_APPLICATION_QUIT_1_OFFSET UNITYSDK_OFFSET(0x1F9C1930)
#define UNITYENGINE_APPLICATION_QUIT_OFFSET UNITYSDK_OFFSET(0x1F9C1920)
#define UNITYENGINE_APPLICATION_REGISTERLOGCALLBACKTHREADED_OFFSET UNITYSDK_OFFSET(0x1F9C41A0)
#define UNITYENGINE_APPLICATION_REGISTERLOGCALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1F9C4070)
#define UNITYENGINE_APPLICATION_REGISTERLOGCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F9C4060)
#define UNITYENGINE_APPLICATION_REMOVE_DEEPLINKACTIVATED_OFFSET UNITYSDK_OFFSET(0x1F9C3A00)
#define UNITYENGINE_APPLICATION_REMOVE_FOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1F9C38A0)
#define UNITYENGINE_APPLICATION_REMOVE_LOGMESSAGERECEIVEDTHREADED_OFFSET UNITYSDK_OFFSET(0x1F9C2240)
#define UNITYENGINE_APPLICATION_REMOVE_LOGMESSAGERECEIVED_OFFSET UNITYSDK_OFFSET(0x1F9C21A0)
#define UNITYENGINE_APPLICATION_REMOVE_LOWMEMORY_OFFSET UNITYSDK_OFFSET(0x1F9C2080)
#define UNITYENGINE_APPLICATION_REMOVE_ONBEFORERENDER_OFFSET UNITYSDK_OFFSET(0x1F9C33F0)
#define UNITYENGINE_APPLICATION_REMOVE_QUITTING_OFFSET UNITYSDK_OFFSET(0x1F9C3C60)
#define UNITYENGINE_APPLICATION_REMOVE_WANTSTOQUIT_OFFSET UNITYSDK_OFFSET(0x1F9C3B40)
#define UNITYENGINE_APPLICATION_REQUESTADVERTISINGIDENTIFIERASYNC_OFFSET UNITYSDK_OFFSET(0x1F9C1D90)
#define UNITYENGINE_APPLICATION_REQUESTUSERAUTHORIZATION_OFFSET UNITYSDK_OFFSET(0x1F9C1E80)
#define UNITYENGINE_APPLICATION_SETBUILDTAGS_OFFSET UNITYSDK_OFFSET(0x1F9C1AB0)
#define UNITYENGINE_APPLICATION_SETLOGCALLBACKDEFINED_OFFSET UNITYSDK_OFFSET(0x1F9C1DE0)
#define UNITYENGINE_APPLICATION_SETSTACKTRACELOGTYPE_OFFSET UNITYSDK_OFFSET(0x1F9C1E20)
#define UNITYENGINE_APPLICATION_SET_BACKGROUNDLOADINGPRIORITY_OFFSET UNITYSDK_OFFSET(0x1F9C1E50)
#define UNITYENGINE_APPLICATION_SET_PLAYERFASTQUIT_OFFSET UNITYSDK_OFFSET(0x1F9C1A90)
#define UNITYENGINE_APPLICATION_SET_RUNINBACKGROUND_OFFSET UNITYSDK_OFFSET(0x1F9C1AE0)
#define UNITYENGINE_APPLICATION_SET_STACKTRACELOGTYPE_OFFSET UNITYSDK_OFFSET(0x1F9C1E00)
#define UNITYENGINE_APPLICATION_SET_TARGETFRAMERATE_OFFSET UNITYSDK_OFFSET(0x1F9C1DD0)
#define UNITYENGINE_APPLICATION_TRYFREEZEPRELOADOPERATION_OFFSET UNITYSDK_OFFSET(0x1F9C1ED0)
#define UNITYENGINE_APPLICATION_UNFREEZEPRELOADOPERATION_OFFSET UNITYSDK_OFFSET(0x1F9C1EF0)
#define UNITYENGINE_APPLICATION_UNLOADLEVEL_1_OFFSET UNITYSDK_OFFSET(0x1F9C4670)
#define UNITYENGINE_APPLICATION_UNLOADLEVEL_OFFSET UNITYSDK_OFFSET(0x1F9C45D0)
#define UNITYENGINE_APPLICATION_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1F9C1950)

namespace UnityEngine
{
	inline static constexpr unsigned int Application_TypeDefinitionIndex = 4027;

	class Application : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::Boolean>** StaticGet_wantsToQuit()
		{
			return (::System::Func_1<::System::Boolean>**)UnitySDK::FromName("UnityEngine", "Application")->GetStaticField(0xA6B0);
		}

		static ::System::Action** StaticGet_quitting()
		{
			return (::System::Action**)UnitySDK::FromName("UnityEngine", "Application")->GetStaticField(0xA6B8);
		}

		static ::UnityEngine::Application_LogCallback** StaticGet_s_LogCallbackHandlerThreaded()
		{
			return (::UnityEngine::Application_LogCallback**)UnitySDK::FromName("UnityEngine", "Application")->GetStaticField(0xA6C0);
		}

		static ::UnityEngine::Application_LowMemoryCallback** StaticGet_lowMemory()
		{
			return (::UnityEngine::Application_LowMemoryCallback**)UnitySDK::FromName("UnityEngine", "Application")->GetStaticField(0xA6C8);
		}

		static ::UnityEngine::Application_LogCallback** StaticGet_s_RegisterLogCallbackDeprecated()
		{
			return (::UnityEngine::Application_LogCallback**)UnitySDK::FromName("UnityEngine", "Application")->GetStaticField(0xA6D0);
		}

		static ::UnityEngine::Application_AdvertisingIdentifierCallback** StaticGet_OnAdvertisingIdentifierCallback()
		{
			return (::UnityEngine::Application_AdvertisingIdentifierCallback**)UnitySDK::FromName("UnityEngine", "Application")->GetStaticField(0xA6D8);
		}

		static ::System::Action_1<::System::String*>** StaticGet_deepLinkActivated()
		{
			return (::System::Action_1<::System::String*>**)UnitySDK::FromName("UnityEngine", "Application")->GetStaticField(0xA6E0);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet_focusChanged()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("UnityEngine", "Application")->GetStaticField(0xA6E8);
		}

		static ::UnityEngine::Application_LogCallback** StaticGet_s_LogCallbackHandler()
		{
			return (::UnityEngine::Application_LogCallback**)UnitySDK::FromName("UnityEngine", "Application")->GetStaticField(0xA6F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_CTOR_OFFSET))(this);
		}

		static ::System::Void Quit(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_QUIT_OFFSET))(a1);
		}

		static ::System::Void Quit_1()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_QUIT_1_OFFSET))();
		}

		static ::System::Void CancelQuit()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_CANCELQUIT_OFFSET))();
		}

		static ::System::Void Unload()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_UNLOAD_OFFSET))();
		}

		static ::System::Boolean get_isLoadingLevel()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISLOADINGLEVEL_OFFSET))();
		}

		static ::System::Single GetStreamProgressForLevel(::System::Int32 a1)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETSTREAMPROGRESSFORLEVEL_OFFSET))(a1);
		}

		static ::System::Single GetStreamProgressForLevel_1(::System::String* a1)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETSTREAMPROGRESSFORLEVEL_1_OFFSET))(a1);
		}

		static ::System::Int32 get_streamedBytes()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_STREAMEDBYTES_OFFSET))();
		}

		static ::System::Boolean get_webSecurityEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_WEBSECURITYENABLED_OFFSET))();
		}

		static ::System::Boolean CanStreamedLevelBeLoaded(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_CANSTREAMEDLEVELBELOADED_OFFSET))(a1);
		}

		static ::System::Boolean CanStreamedLevelBeLoaded_1(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_CANSTREAMEDLEVELBELOADED_1_OFFSET))(a1);
		}

		static ::System::Boolean get_isPlaying()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISPLAYING_OFFSET))();
		}

		static ::System::Boolean IsPlaying(::UnityEngine::Object* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ISPLAYING_OFFSET))(a1);
		}

		static ::System::Boolean get_isFocused()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISFOCUSED_OFFSET))();
		}

		static ::System::Boolean get_isForegroundWindow()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISFOREGROUNDWINDOW_OFFSET))();
		}

		static ::System::Boolean get_playerFastQuit()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_PLAYERFASTQUIT_OFFSET))();
		}

		static ::System::Void set_playerFastQuit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_SET_PLAYERFASTQUIT_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::String*>* GetBuildTags()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETBUILDTAGS_OFFSET))();
		}

		static ::System::Void SetBuildTags(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_SETBUILDTAGS_OFFSET))(a1);
		}

		static ::System::String* get_buildGUID()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_BUILDGUID_OFFSET))();
		}

		static ::System::Boolean get_runInBackground()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_RUNINBACKGROUND_OFFSET))();
		}

		static ::System::Void set_runInBackground(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_SET_RUNINBACKGROUND_OFFSET))(a1);
		}

		static ::System::Boolean HasProLicense()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_HASPROLICENSE_OFFSET))();
		}

		static ::System::Boolean get_isBatchMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISBATCHMODE_OFFSET))();
		}

		static ::System::Boolean get_isTestRun()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISTESTRUN_OFFSET))();
		}

		static ::System::Boolean get_isHumanControllingUs()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISHUMANCONTROLLINGUS_OFFSET))();
		}

		static ::System::Boolean HasARGV(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_HASARGV_OFFSET))(a1);
		}

		static ::System::String* GetValueForARGV(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETVALUEFORARGV_OFFSET))(a1);
		}

		static ::System::String* get_dataPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_DATAPATH_OFFSET))();
		}

		static ::UnityEngine::PooledName get_dataPathName()
		{
			return ((::UnityEngine::PooledName(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_DATAPATHNAME_OFFSET))();
		}

		static ::System::String* get_streamingAssetsPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_STREAMINGASSETSPATH_OFFSET))();
		}

		static ::UnityEngine::PooledName get_streamingAssetsPathName()
		{
			return ((::UnityEngine::PooledName(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_STREAMINGASSETSPATHNAME_OFFSET))();
		}

		static ::System::String* get_persistentDataPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_PERSISTENTDATAPATH_OFFSET))();
		}

		static ::UnityEngine::PooledName get_persistentDataPathName()
		{
			return ((::UnityEngine::PooledName(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_PERSISTENTDATAPATHNAME_OFFSET))();
		}

		static ::System::String* get_temporaryCachePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_TEMPORARYCACHEPATH_OFFSET))();
		}

		static ::UnityEngine::PooledName get_temporaryCachePathName()
		{
			return ((::UnityEngine::PooledName(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_TEMPORARYCACHEPATHNAME_OFFSET))();
		}

		static ::System::String* get_absoluteURL()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ABSOLUTEURL_OFFSET))();
		}

		static ::System::Boolean GetAvailableDiskSpace(::System::UInt64 a1, ::System::UInt64 a2)
		{
			return ((::System::Boolean(*)(::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETAVAILABLEDISKSPACE_OFFSET))(a1, a2);
		}

		static ::System::Void ExternalEval(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_EXTERNALEVAL_OFFSET))(a1);
		}

		static ::System::Void Internal_ExternalCall(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_INTERNAL_EXTERNALCALL_OFFSET))(a1);
		}

		static ::System::String* get_unityVersion()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_UNITYVERSION_OFFSET))();
		}

		static ::System::String* get_version()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_VERSION_OFFSET))();
		}

		static ::System::String* get_installerName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_INSTALLERNAME_OFFSET))();
		}

		static ::System::String* get_identifier()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_IDENTIFIER_OFFSET))();
		}

		static ::UnityEngine::ApplicationInstallMode get_installMode()
		{
			return ((::UnityEngine::ApplicationInstallMode(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_INSTALLMODE_OFFSET))();
		}

		static ::UnityEngine::ApplicationSandboxType get_sandboxType()
		{
			return ((::UnityEngine::ApplicationSandboxType(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_SANDBOXTYPE_OFFSET))();
		}

		static ::System::String* get_productName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_PRODUCTNAME_OFFSET))();
		}

		static ::System::String* get_companyName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_COMPANYNAME_OFFSET))();
		}

		static ::System::String* get_cloudProjectId()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_CLOUDPROJECTID_OFFSET))();
		}

		static ::System::Boolean RequestAdvertisingIdentifierAsync(::UnityEngine::Application_AdvertisingIdentifierCallback* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Application_AdvertisingIdentifierCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REQUESTADVERTISINGIDENTIFIERASYNC_OFFSET))(a1);
		}

		static ::System::Void OpenURL(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_OPENURL_OFFSET))(a1);
		}

		static ::System::Void ForceCrash(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_FORCECRASH_OFFSET))(a1);
		}

		static ::System::Int32 get_targetFrameRate()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_TARGETFRAMERATE_OFFSET))();
		}

		static ::System::Void set_targetFrameRate(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_SET_TARGETFRAMERATE_OFFSET))(a1);
		}

		static ::System::Void SetLogCallbackDefined(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_SETLOGCALLBACKDEFINED_OFFSET))(a1);
		}

		static ::UnityEngine::StackTraceLogType get_stackTraceLogType()
		{
			return ((::UnityEngine::StackTraceLogType(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_STACKTRACELOGTYPE_OFFSET))();
		}

		static ::System::Void set_stackTraceLogType(::UnityEngine::StackTraceLogType a1)
		{
			return ((::System::Void(*)(::UnityEngine::StackTraceLogType))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_SET_STACKTRACELOGTYPE_OFFSET))(a1);
		}

		static ::UnityEngine::StackTraceLogType GetStackTraceLogType(::UnityEngine::LogType a1)
		{
			return ((::UnityEngine::StackTraceLogType(*)(::UnityEngine::LogType))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETSTACKTRACELOGTYPE_OFFSET))(a1);
		}

		static ::System::Void SetStackTraceLogType(::UnityEngine::LogType a1, ::UnityEngine::StackTraceLogType a2)
		{
			return ((::System::Void(*)(::UnityEngine::LogType, ::UnityEngine::StackTraceLogType))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_SETSTACKTRACELOGTYPE_OFFSET))(a1, a2);
		}

		static ::System::String* get_consoleLogPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_CONSOLELOGPATH_OFFSET))();
		}

		static ::UnityEngine::ThreadPriority get_backgroundLoadingPriority()
		{
			return ((::UnityEngine::ThreadPriority(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_BACKGROUNDLOADINGPRIORITY_OFFSET))();
		}

		static ::System::Void set_backgroundLoadingPriority(::UnityEngine::ThreadPriority a1)
		{
			return ((::System::Void(*)(::UnityEngine::ThreadPriority))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_SET_BACKGROUNDLOADINGPRIORITY_OFFSET))(a1);
		}

		static ::System::Boolean get_genuine()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_GENUINE_OFFSET))();
		}

		static ::System::Boolean get_genuineCheckAvailable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_GENUINECHECKAVAILABLE_OFFSET))();
		}

		static ::UnityEngine::AsyncOperation* RequestUserAuthorization(::UnityEngine::UserAuthorization a1)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::UnityEngine::UserAuthorization))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REQUESTUSERAUTHORIZATION_OFFSET))(a1);
		}

		static ::System::Boolean HasUserAuthorization(::UnityEngine::UserAuthorization a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::UserAuthorization))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_HASUSERAUTHORIZATION_OFFSET))(a1);
		}

		static ::System::Boolean get_submitAnalytics()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_SUBMITANALYTICS_OFFSET))();
		}

		static ::System::Boolean CustomUpdatePreloadManager(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_CUSTOMUPDATEPRELOADMANAGER_OFFSET))(a1);
		}

		static ::System::Void CustomFindScriptByClassOpt(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_CUSTOMFINDSCRIPTBYCLASSOPT_OFFSET))(a1);
		}

		static ::System::Boolean TryFreezePreloadOperation()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_TRYFREEZEPRELOADOPERATION_OFFSET))();
		}

		static ::System::Int32 GetPreloadQueueSize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETPRELOADQUEUESIZE_OFFSET))();
		}

		static ::System::Void UnFreezePreloadOperation()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_UNFREEZEPRELOADOPERATION_OFFSET))();
		}

		static ::System::Int32 GetIntegrateQueueSize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETINTEGRATEQUEUESIZE_OFFSET))();
		}

		static ::System::Int32 GetMainThreadKernelIdAndroid()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETMAINTHREADKERNELIDANDROID_OFFSET))();
		}

		static ::System::Int32 GetGfxRenderThreadKernelIdAndroid()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETGFXRENDERTHREADKERNELIDANDROID_OFFSET))();
		}

		static ::System::Int32 GetLoadingThreadKernelIdAndroid()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETLOADINGTHREADKERNELIDANDROID_OFFSET))();
		}

		static ::Il2CppArray<::System::Int32>* GetJobQueueThreadKernelIdsAndroid()
		{
			return ((::Il2CppArray<::System::Int32>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GETJOBQUEUETHREADKERNELIDSANDROID_OFFSET))();
		}

		static ::UnityEngine::RuntimePlatform get_platform()
		{
			return ((::UnityEngine::RuntimePlatform(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_PLATFORM_OFFSET))();
		}

		static ::System::Boolean get_isMobilePlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISMOBILEPLATFORM_OFFSET))();
		}

		static ::System::Boolean get_isConsolePlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISCONSOLEPLATFORM_OFFSET))();
		}

		static ::UnityEngine::SystemLanguage get_systemLanguage()
		{
			return ((::UnityEngine::SystemLanguage(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_SYSTEMLANGUAGE_OFFSET))();
		}

		static ::UnityEngine::NetworkReachability get_internetReachability()
		{
			return ((::UnityEngine::NetworkReachability(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_INTERNETREACHABILITY_OFFSET))();
		}

		static ::System::Void add_lowMemory(::UnityEngine::Application_LowMemoryCallback* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Application_LowMemoryCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADD_LOWMEMORY_OFFSET))(a1);
		}

		static ::System::Void remove_lowMemory(::UnityEngine::Application_LowMemoryCallback* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Application_LowMemoryCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REMOVE_LOWMEMORY_OFFSET))(a1);
		}

		static ::System::Void CallLowMemory()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_CALLLOWMEMORY_OFFSET))();
		}

		static ::System::Void add_logMessageReceived(::UnityEngine::Application_LogCallback* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Application_LogCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADD_LOGMESSAGERECEIVED_OFFSET))(a1);
		}

		static ::System::Void remove_logMessageReceived(::UnityEngine::Application_LogCallback* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Application_LogCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REMOVE_LOGMESSAGERECEIVED_OFFSET))(a1);
		}

		static ::System::Void add_logMessageReceivedThreaded(::UnityEngine::Application_LogCallback* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Application_LogCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADD_LOGMESSAGERECEIVEDTHREADED_OFFSET))(a1);
		}

		static ::System::Void remove_logMessageReceivedThreaded(::UnityEngine::Application_LogCallback* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Application_LogCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REMOVE_LOGMESSAGERECEIVEDTHREADED_OFFSET))(a1);
		}

		static ::System::Void CallLogCallback(::System::String* a1, ::System::String* a2, ::UnityEngine::LogType a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::UnityEngine::LogType, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_CALLLOGCALLBACK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void InvokeOnAdvertisingIdentifierCallback(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_INVOKEONADVERTISINGIDENTIFIERCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::String* ObjectToJSString(::System::Object* a1)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_OBJECTTOJSSTRING_OFFSET))(a1);
		}

		static ::System::Void ExternalCall(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_EXTERNALCALL_OFFSET))(a1, a2);
		}

		static ::System::String* BuildInvocationForArguments(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_BUILDINVOCATIONFORARGUMENTS_OFFSET))(a1, a2);
		}

		static ::System::Boolean get_isPlayer()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISPLAYER_OFFSET))();
		}

		static ::System::Void DontDestroyOnLoad(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_DONTDESTROYONLOAD_OFFSET))(a1);
		}

		static ::System::Void CaptureScreenshot(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_CAPTURESCREENSHOT_OFFSET))(a1, a2);
		}

		static ::System::Void CaptureScreenshot_1(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_CAPTURESCREENSHOT_1_OFFSET))(a1);
		}

		static ::System::Void add_onBeforeRender(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADD_ONBEFORERENDER_OFFSET))(a1);
		}

		static ::System::Void remove_onBeforeRender(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REMOVE_ONBEFORERENDER_OFFSET))(a1);
		}

		static ::System::Void add_focusChanged(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADD_FOCUSCHANGED_OFFSET))(a1);
		}

		static ::System::Void remove_focusChanged(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REMOVE_FOCUSCHANGED_OFFSET))(a1);
		}

		static ::System::Void add_deepLinkActivated(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADD_DEEPLINKACTIVATED_OFFSET))(a1);
		}

		static ::System::Void remove_deepLinkActivated(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REMOVE_DEEPLINKACTIVATED_OFFSET))(a1);
		}

		static ::System::Void add_wantsToQuit(::System::Func_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADD_WANTSTOQUIT_OFFSET))(a1);
		}

		static ::System::Void remove_wantsToQuit(::System::Func_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REMOVE_WANTSTOQUIT_OFFSET))(a1);
		}

		static ::System::Void add_quitting(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADD_QUITTING_OFFSET))(a1);
		}

		static ::System::Void remove_quitting(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REMOVE_QUITTING_OFFSET))(a1);
		}

		static ::System::Boolean Internal_ApplicationWantsToQuit()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_INTERNAL_APPLICATIONWANTSTOQUIT_OFFSET))();
		}

		static ::System::Void Internal_ApplicationQuit()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_INTERNAL_APPLICATIONQUIT_OFFSET))();
		}

		static ::System::Void InvokeOnBeforeRender()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_INVOKEONBEFORERENDER_OFFSET))();
		}

		static ::System::Void InvokeFocusChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_INVOKEFOCUSCHANGED_OFFSET))(a1);
		}

		static ::System::Void InvokeDeepLinkActivated(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_INVOKEDEEPLINKACTIVATED_OFFSET))(a1);
		}

		static ::System::Void RegisterLogCallback(::UnityEngine::Application_LogCallback* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Application_LogCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REGISTERLOGCALLBACK_OFFSET))(a1);
		}

		static ::System::Void RegisterLogCallbackThreaded(::UnityEngine::Application_LogCallback* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Application_LogCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REGISTERLOGCALLBACKTHREADED_OFFSET))(a1);
		}

		static ::System::Void RegisterLogCallback_1(::UnityEngine::Application_LogCallback* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::Application_LogCallback*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REGISTERLOGCALLBACK_1_OFFSET))(a1, a2);
		}

		static ::System::Int32 get_levelCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_LEVELCOUNT_OFFSET))();
		}

		static ::System::Int32 get_loadedLevel()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_LOADEDLEVEL_OFFSET))();
		}

		static ::System::String* get_loadedLevelName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_LOADEDLEVELNAME_OFFSET))();
		}

		static ::System::Void LoadLevel(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOADLEVEL_OFFSET))(a1);
		}

		static ::System::Void LoadLevel_1(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOADLEVEL_1_OFFSET))(a1);
		}

		static ::System::Void LoadLevelAdditive(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOADLEVELADDITIVE_OFFSET))(a1);
		}

		static ::System::Void LoadLevelAdditive_1(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOADLEVELADDITIVE_1_OFFSET))(a1);
		}

		static ::UnityEngine::AsyncOperation* LoadLevelAsync(::System::Int32 a1)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOADLEVELASYNC_OFFSET))(a1);
		}

		static ::UnityEngine::AsyncOperation* LoadLevelAsync_1(::System::String* a1)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOADLEVELASYNC_1_OFFSET))(a1);
		}

		static ::UnityEngine::AsyncOperation* LoadLevelAdditiveAsync(::System::Int32 a1)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOADLEVELADDITIVEASYNC_OFFSET))(a1);
		}

		static ::UnityEngine::AsyncOperation* LoadLevelAdditiveAsync_1(::System::String* a1)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOADLEVELADDITIVEASYNC_1_OFFSET))(a1);
		}

		static ::System::Boolean UnloadLevel(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_UNLOADLEVEL_OFFSET))(a1);
		}

		static ::System::Boolean UnloadLevel_1(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_UNLOADLEVEL_1_OFFSET))(a1);
		}

		static ::System::Boolean get_isEditor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISEDITOR_OFFSET))();
		}

		static ::System::Void get_dataPathName_Injected(::UnityEngine::PooledName a1)
		{
			return ((::System::Void(*)(::UnityEngine::PooledName))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_DATAPATHNAME_INJECTED_OFFSET))(a1);
		}

		static ::System::Void get_streamingAssetsPathName_Injected(::UnityEngine::PooledName a1)
		{
			return ((::System::Void(*)(::UnityEngine::PooledName))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_STREAMINGASSETSPATHNAME_INJECTED_OFFSET))(a1);
		}

		static ::System::Void get_persistentDataPathName_Injected(::UnityEngine::PooledName a1)
		{
			return ((::System::Void(*)(::UnityEngine::PooledName))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_PERSISTENTDATAPATHNAME_INJECTED_OFFSET))(a1);
		}

		static ::System::Void get_temporaryCachePathName_Injected(::UnityEngine::PooledName a1)
		{
			return ((::System::Void(*)(::UnityEngine::PooledName))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_TEMPORARYCACHEPATHNAME_INJECTED_OFFSET))(a1);
		}

	};
}

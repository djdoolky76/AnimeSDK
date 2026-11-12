#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace MiHoYo::SDK { class InvokeResponseModel; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ADDACTION_OFFSET UNITYSDK_OFFSET(0x1CDCAD30)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ADDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CDCC7D0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ADDINVORERETURNCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CDCD510)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ALL_SET_ENV_AND_GAMEBIZ_OFFSET UNITYSDK_OFFSET(0x1CDCF070)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ALL_SET_ENV_OFFSET UNITYSDK_OFFSET(0x1CDCEA30)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1CDCBB40)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDCFDF0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CHECKFUNCTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CDCD5F0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CHECKFUNCTIONINDEX_OFFSET UNITYSDK_OFFSET(0x1CDCD040)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CHECKPLATFORM_OFFSET UNITYSDK_OFFSET(0x1CDCFD10)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CHECKWATERMARKPLATFORMTYPE_OFFSET UNITYSDK_OFFSET(0x1CDCF880)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_GET_CLIPBOARD_DATA_OFFSET UNITYSDK_OFFSET(0x1CDCF7E0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1CDCF540)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_SAVE_IMAGE_OFFSET UNITYSDK_OFFSET(0x1CDCF6C0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_SET_DATA_OFFSET UNITYSDK_OFFSET(0x1CDCF600)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_SET_GAME_CONTROL_IMU_ENABLE_OFFSET UNITYSDK_OFFSET(0x1CDCF870)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_SET_LAUNCH_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x1CDCF530)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_TRANSMIT_DATA_OFFSET UNITYSDK_OFFSET(0x1CDCF750)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDCFDE0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_GETCMDLINEMAP_OFFSET UNITYSDK_OFFSET(0x1CDCBBC0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_INIT_OFFSET UNITYSDK_OFFSET(0x1CDCE480)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_INVOKERETURN_OFFSET UNITYSDK_OFFSET(0x1CDCD0D0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_LAUNCH_GET_DISK_FREE_SPACE_OFFSET UNITYSDK_OFFSET(0x1CDCF7B0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_LOGIN_ENTER_GAME_OFFSET UNITYSDK_OFFSET(0x1CDCF3F0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_LOGIN_WILL_ENTER_GAME_OFFSET UNITYSDK_OFFSET(0x1CDCF490)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_MIDDLEFUNCCHECK_OFFSET UNITYSDK_OFFSET(0x1CDCC890)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1CDCBEC0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ONGETINVOKERESPONSE_OFFSET UNITYSDK_OFFSET(0x1CDCB480)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ONINITRESPONSE_OFFSET UNITYSDK_OFFSET(0x1CDCB720)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_SDKINVOKEFUNCTION_OFFSET UNITYSDK_OFFSET(0x1CDCCCB0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_SDKINVOKE_OFFSET UNITYSDK_OFFSET(0x1CDCA120)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_SHARE_SHARE_OFFSET UNITYSDK_OFFSET(0x1CDCFC80)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_START_OFFSET UNITYSDK_OFFSET(0x1CDCBEB0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1CDCBED0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_WATERMARK_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1CDCFBD0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_WATERMARK_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0x1CDCFB20)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_WHITEFUNCCHECK_OFFSET UNITYSDK_OFFSET(0x1CDCC180)

namespace MiHoYo::SDK::Cloud
{
	inline static constexpr unsigned int MiHoYoSDKDll_TypeDefinitionIndex = 8898;

	class MiHoYoSDKDll : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Type** StaticGet_miHoYoDll()
		{
			return (::System::Type**)UnitySDK::FromName("MiHoYo.SDK.Cloud", "MiHoYoSDKDll")->GetStaticField(0x27000);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_cmdLineMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)UnitySDK::FromName("MiHoYo.SDK.Cloud", "MiHoYoSDKDll")->GetStaticField(0x27008);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_whiteFuncList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("MiHoYo.SDK.Cloud", "MiHoYoSDKDll")->GetStaticField(0x27010);
		}

		static ::Il2CppArray<::System::Object*>** StaticGet_parameters0()
		{
			return (::Il2CppArray<::System::Object*>**)UnitySDK::FromName("MiHoYo.SDK.Cloud", "MiHoYoSDKDll")->GetStaticField(0x27018);
		}

		static ::System::Action_1<::System::String*>** StaticGet_initCallback()
		{
			return (::System::Action_1<::System::String*>**)UnitySDK::FromName("MiHoYo.SDK.Cloud", "MiHoYoSDKDll")->GetStaticField(0x27020);
		}

		static ::Il2CppArray<::System::Object*>** StaticGet_parameters2()
		{
			return (::Il2CppArray<::System::Object*>**)UnitySDK::FromName("MiHoYo.SDK.Cloud", "MiHoYoSDKDll")->GetStaticField(0x27028);
		}

		static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_actionList()
		{
			return (::System::Collections::Generic::List_1<::System::Action*>**)UnitySDK::FromName("MiHoYo.SDK.Cloud", "MiHoYoSDKDll")->GetStaticField(0x27030);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_middleFuncList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("MiHoYo.SDK.Cloud", "MiHoYoSDKDll")->GetStaticField(0x27038);
		}

		static ::Il2CppArray<::System::Object*>** StaticGet_parameters1()
		{
			return (::Il2CppArray<::System::Object*>**)UnitySDK::FromName("MiHoYo.SDK.Cloud", "MiHoYoSDKDll")->GetStaticField(0x27040);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_1<::System::String*>*>** StaticGet_invokeCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_1<::System::String*>*>**)UnitySDK::FromName("MiHoYo.SDK.Cloud", "MiHoYoSDKDll")->GetStaticField(0x27048);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_1<::System::String*>*>** StaticGet_invokeReturnCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_1<::System::String*>*>**)UnitySDK::FromName("MiHoYo.SDK.Cloud", "MiHoYoSDKDll")->GetStaticField(0x27050);
		}

		static ::System::Int32* StaticGet_index()
		{
			return (::System::Int32*)UnitySDK::FromName("MiHoYo.SDK.Cloud", "MiHoYoSDKDll")->GetStaticField(0x7CE0);
		}

		static ::System::Int32* StaticGet_shareCallbackIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("MiHoYo.SDK.Cloud", "MiHoYoSDKDll")->GetStaticField(0x7CE4);
		}

		static ::System::Int32* StaticGet_TimeoutCount()
		{
			return (::System::Int32*)UnitySDK::FromName("MiHoYo.SDK.Cloud", "MiHoYoSDKDll")->GetStaticField(0x7CE8);
		}

		static ::System::Int32* StaticGet_loginCallbackIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("MiHoYo.SDK.Cloud", "MiHoYoSDKDll")->GetStaticField(0x7CEC);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CCTOR_OFFSET))();
		}

		static ::System::Void AddAction(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ADDACTION_OFFSET))(a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_UPDATE_OFFSET))(this);
		}

		static ::System::Boolean WhiteFuncCheck(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::System::String*>* a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_WHITEFUNCCHECK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void MiddleFuncCheck(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_MIDDLEFUNCCHECK_OFFSET))(a1, a2);
		}

		static ::System::String* SDKInvoke(::System::String* a1, ::System::String* a2, ::System::Action_1<::System::String*>* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_SDKINVOKE_OFFSET))(a1, a2, a3);
		}

		static ::System::String* SDKInvokeFunction(::System::String* a1, ::System::String* a2, ::System::Action_1<::System::String*>* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_SDKINVOKEFUNCTION_OFFSET))(a1, a2, a3);
		}

		static ::System::String* InvokeReturn(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_INVOKERETURN_OFFSET))(a1, a2);
		}

		static ::System::Void OnInitResponse(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ONINITRESPONSE_OFFSET))(a1);
		}

		static ::System::Void OnGetInvokeResponse(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ONGETINVOKERESPONSE_OFFSET))(a1);
		}

		static ::System::Void AddCallback(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ADDCALLBACK_OFFSET))(a1);
		}

		static ::System::Void AddInvoreReturnCallback(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ADDINVORERETURNCALLBACK_OFFSET))(a1);
		}

		static ::System::Void CheckFunctionIndex(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CHECKFUNCTIONINDEX_OFFSET))(a1, a2);
		}

		static ::System::Boolean CheckFunctionCallback(::MiHoYo::SDK::InvokeResponseModel* a1)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::InvokeResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CHECKFUNCTIONCALLBACK_OFFSET))(a1);
		}

		::System::Void GetCmdLineMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_GETCMDLINEMAP_OFFSET))(this);
		}

		static ::System::Void Init(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_INIT_OFFSET))(a1);
		}

		static ::System::String* all_set_env(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ALL_SET_ENV_OFFSET))(a1);
		}

		static ::System::String* all_set_env_and_gamebiz(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ALL_SET_ENV_AND_GAMEBIZ_OFFSET))(a1);
		}

		static ::System::String* login_enter_game(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_LOGIN_ENTER_GAME_OFFSET))(a1);
		}

		static ::System::String* login_will_enter_game(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_LOGIN_WILL_ENTER_GAME_OFFSET))(a1);
		}

		static ::System::String* cloud_set_launch_parameters(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_SET_LAUNCH_PARAMETERS_OFFSET))(a1);
		}

		static ::System::String* cloud_get_data(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_GET_DATA_OFFSET))(a1, a2);
		}

		static ::System::String* cloud_set_data(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_SET_DATA_OFFSET))(a1);
		}

		static ::System::String* cloud_save_image(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_SAVE_IMAGE_OFFSET))(a1, a2);
		}

		static ::System::String* cloud_transmit_data(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_TRANSMIT_DATA_OFFSET))(a1, a2);
		}

		static ::System::String* launch_get_disk_free_space()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_LAUNCH_GET_DISK_FREE_SPACE_OFFSET))();
		}

		static ::System::String* cloud_get_clipboard_data(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_GET_CLIPBOARD_DATA_OFFSET))(a1, a2);
		}

		static ::System::String* cloud_set_game_control_imu_enable(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_SET_GAME_CONTROL_IMU_ENABLE_OFFSET))(a1);
		}

		static ::System::Boolean CheckWatermarkPlatformType()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CHECKWATERMARKPLATFORMTYPE_OFFSET))();
		}

		static ::System::String* watermark_set_enable(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_WATERMARK_SET_ENABLE_OFFSET))(a1);
		}

		static ::System::String* watermark_set_config(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_WATERMARK_SET_CONFIG_OFFSET))(a1);
		}

		static ::System::String* share_share(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_SHARE_SHARE_OFFSET))(a1);
		}

		static ::System::Void CheckPlatform()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CHECKPLATFORM_OFFSET))();
		}

	};
}

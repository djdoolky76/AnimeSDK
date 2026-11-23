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

#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_A6EF09F95B2E397C_OFFSET UNITYSDK_OFFSET(0x3A8C430)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ALL_SET_ENV_AND_GAMEBIZ_OFFSET UNITYSDK_OFFSET(0x3A8E5A0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ALL_SET_ENV_OFFSET UNITYSDK_OFFSET(0x3A8E7E0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_B50AED7690337E5C_OFFSET UNITYSDK_OFFSET(0x3A8C690)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_B6D895F64BC2CFEF_OFFSET UNITYSDK_OFFSET(0x3A8BA30)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_BCEED7A13D5F873B_OFFSET UNITYSDK_OFFSET(0x3A8B8C0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_BEAB62EEAEC3B695_OFFSET UNITYSDK_OFFSET(0x3A8D250)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_BF346BFDE60EF53B_OFFSET UNITYSDK_OFFSET(0x3A8BB40)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_BFA13751E49CF18F_OFFSET UNITYSDK_OFFSET(0x3A8CE30)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CHECKWATERMARKPLATFORMTYPE_OFFSET UNITYSDK_OFFSET(0x3A8C500)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_GET_CLIPBOARD_DATA_OFFSET UNITYSDK_OFFSET(0x3A8E890)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_GET_DATA_OFFSET UNITYSDK_OFFSET(0x3A8E910)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_SAVE_IMAGE_OFFSET UNITYSDK_OFFSET(0x3A8E990)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_SET_DATA_OFFSET UNITYSDK_OFFSET(0x3A8EA10)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_SET_GAME_CONTROL_IMU_ENABLE_OFFSET UNITYSDK_OFFSET(0x27CB070)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_SET_LAUNCH_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x27CB070)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_TRANSMIT_DATA_OFFSET UNITYSDK_OFFSET(0x3A8EA80)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x3A8D6D0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_E8585E336BB36E1C_OFFSET UNITYSDK_OFFSET(0x3A8D010)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_EB73FBB786E10DAB_OFFSET UNITYSDK_OFFSET(0x3A8B9B0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_F1041CB81E04DF11_OFFSET UNITYSDK_OFFSET(0x3A8C3B0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_F8E4724DD85E5421_OFFSET UNITYSDK_OFFSET(0x3A8D970)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x3A8BAB0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_INIT_OFFSET UNITYSDK_OFFSET(0x3A8C9C0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_INVOKERETURN_OFFSET UNITYSDK_OFFSET(0x3A8CAC0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_LAUNCH_GET_DISK_FREE_SPACE_OFFSET UNITYSDK_OFFSET(0x3A0A510)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_LOGIN_ENTER_GAME_OFFSET UNITYSDK_OFFSET(0x3A8EAF0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_LOGIN_WILL_ENTER_GAME_OFFSET UNITYSDK_OFFSET(0x3A8EBA0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_SDKINVOKEFUNCTION_OFFSET UNITYSDK_OFFSET(0x3A8D350)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_SDKINVOKE_OFFSET UNITYSDK_OFFSET(0x3A8D530)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_SHARE_SHARE_OFFSET UNITYSDK_OFFSET(0x3A8EC50)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_WATERMARK_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x3A8ECC0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_WATERMARK_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0x3A8ED60)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A8DF10)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace MiHoYo::SDK::Cloud
{
	inline static constexpr unsigned int MiHoYoSDKDll_TypeDefinitionIndex = 12046;

	class MiHoYoSDKDll : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::System::Object*>** StaticGet_A3317C288CF1330A()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_EE6C9E2E778F7908()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_A016DF7BC087F8DB()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::System::Type** StaticGet_B4CF65F77DEA4312()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x18);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_A0D787BCAC165DED()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x20);
		}
		static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_A0F62624E4CA86F0()
		{
			return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x28);
		}
		static ::System::Action_1<::System::String*>** StaticGet_ED2A2A26075AA25C()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x30);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_1<::System::String*>*>** StaticGet_A66B7806DBB6FEB5()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x38);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_1<::System::String*>*>** StaticGet_A992B1E9CEAFCF39()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x40);
		}
		static ::System::Int32* StaticGet_EBC9556C8060B538()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x48);
		}
		static ::System::Int32* StaticGet_AC988A844A56DD5A()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4C);
		}
		static ::System::Int32* StaticGet_E78A69B680B7D9FD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x50);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_A0EBDD90B5E4CAE9()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x58);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_EE29FC93F520C1E7()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x60);
		}
		static ::System::Int32* StaticGet_A17C2A3CB0A586B0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x68);
		}

		static ::System::String* InvokeReturn(::System::String* E2692EDB678DEB5F, ::System::String* F0D3F87128A7C4CA)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_INVOKERETURN_OFFSET))(E2692EDB678DEB5F, F0D3F87128A7C4CA);
		}

		static ::System::Void BFA13751E49CF18F(::System::String* E2692EDB678DEB5F, ::System::String* F0D3F87128A7C4CA)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_BFA13751E49CF18F_OFFSET))(E2692EDB678DEB5F, F0D3F87128A7C4CA);
		}

		static ::System::String* all_set_env_and_gamebiz(::System::String* E38AC34CA582739D)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ALL_SET_ENV_AND_GAMEBIZ_OFFSET))(E38AC34CA582739D);
		}

		static ::System::String* watermark_set_config(::System::String* EEAF2235A100AEA8)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_WATERMARK_SET_CONFIG_OFFSET))(EEAF2235A100AEA8);
		}

		static ::System::Boolean BF346BFDE60EF53B(::MiHoYo::SDK::InvokeResponseModel* A8A64C573D7FC99A)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::InvokeResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_BF346BFDE60EF53B_OFFSET))(A8A64C573D7FC99A);
		}

		static ::System::String* cloud_set_launch_parameters(::System::String* B652C74F012A9C5B)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_SET_LAUNCH_PARAMETERS_OFFSET))(B652C74F012A9C5B);
		}

		static ::System::Void BCEED7A13D5F873B(::System::Action* F1A6F509F2BFBB51)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_BCEED7A13D5F873B_OFFSET))(F1A6F509F2BFBB51);
		}

		static ::System::Void EB73FBB786E10DAB(::System::Action_1<::System::String*>* E04D2BE64FCE9814)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_EB73FBB786E10DAB_OFFSET))(E04D2BE64FCE9814);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		static ::System::String* cloud_save_image(::System::String* F1BF0FE85E9DD584, ::System::Int32 E9CEADA4BBBF2E5D)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_SAVE_IMAGE_OFFSET))(F1BF0FE85E9DD584, E9CEADA4BBBF2E5D);
		}

		static ::System::String* watermark_set_enable(::System::String* F0D3F87128A7C4CA)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_WATERMARK_SET_ENABLE_OFFSET))(F0D3F87128A7C4CA);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL__CTOR_OFFSET))(this);
		}

		static ::System::String* all_set_env(::System::String* F01B486E65E8AFEB)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ALL_SET_ENV_OFFSET))(F01B486E65E8AFEB);
		}

		static ::System::String* cloud_transmit_data(::System::String* F220A2D27F7C6B6C, ::System::Int32 E9CEADA4BBBF2E5D)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_TRANSMIT_DATA_OFFSET))(F220A2D27F7C6B6C, E9CEADA4BBBF2E5D);
		}

		static ::System::Void B6D895F64BC2CFEF(::System::Action_1<::System::String*>* E04D2BE64FCE9814)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_B6D895F64BC2CFEF_OFFSET))(E04D2BE64FCE9814);
		}

		static ::System::Void Init(::System::Action_1<::System::String*>* E04D2BE64FCE9814)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_INIT_OFFSET))(E04D2BE64FCE9814);
		}

		static ::System::String* SDKInvokeFunction(::System::String* E2692EDB678DEB5F, ::System::String* F0D3F87128A7C4CA, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_SDKINVOKEFUNCTION_OFFSET))(E2692EDB678DEB5F, F0D3F87128A7C4CA, E04D2BE64FCE9814);
		}

		static ::System::String* login_will_enter_game(::System::String* F1BF0FE85E9DD584)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_LOGIN_WILL_ENTER_GAME_OFFSET))(F1BF0FE85E9DD584);
		}

		static ::System::Void A6EF09F95B2E397C()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_A6EF09F95B2E397C_OFFSET))();
		}

		static ::System::String* cloud_get_data(::System::String* A5C299C395D3E1B2, ::System::Int32 E9CEADA4BBBF2E5D)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_GET_DATA_OFFSET))(A5C299C395D3E1B2, E9CEADA4BBBF2E5D);
		}

		static ::System::String* login_enter_game(::System::String* F1BF0FE85E9DD584)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_LOGIN_ENTER_GAME_OFFSET))(F1BF0FE85E9DD584);
		}

		static ::System::String* cloud_get_clipboard_data(::System::String* A5C299C395D3E1B2, ::System::Int32 E9CEADA4BBBF2E5D)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_GET_CLIPBOARD_DATA_OFFSET))(A5C299C395D3E1B2, E9CEADA4BBBF2E5D);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL__CCTOR_OFFSET))();
		}

		static ::System::Boolean CheckWatermarkPlatformType()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CHECKWATERMARKPLATFORMTYPE_OFFSET))();
		}

		static ::System::Boolean F8E4724DD85E5421(::System::String* E2692EDB678DEB5F, ::System::String*& A342D5344F7596A8, ::System::String* F0D3F87128A7C4CA, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*&, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_F8E4724DD85E5421_OFFSET))(E2692EDB678DEB5F, A342D5344F7596A8, F0D3F87128A7C4CA, E04D2BE64FCE9814);
		}

		static ::System::String* cloud_set_game_control_imu_enable(::System::String* A3E26351629B9EF8)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_SET_GAME_CONTROL_IMU_ENABLE_OFFSET))(A3E26351629B9EF8);
		}

		static ::System::String* launch_get_disk_free_space()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_LAUNCH_GET_DISK_FREE_SPACE_OFFSET))();
		}

		static ::System::Void E8585E336BB36E1C(::System::String* A6CAE7339066B0FB)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_E8585E336BB36E1C_OFFSET))(A6CAE7339066B0FB);
		}

		::System::Void B50AED7690337E5C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_B50AED7690337E5C_OFFSET))(this);
		}

		::System::Void E02954280801633F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_E02954280801633F_OFFSET))(this);
		}

		static ::System::String* share_share(::System::String* F1BF0FE85E9DD584)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_SHARE_SHARE_OFFSET))(F1BF0FE85E9DD584);
		}

		static ::System::Void F1041CB81E04DF11(::System::String* E2692EDB678DEB5F, ::System::Int32 B48C66E5FB2449C6)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_F1041CB81E04DF11_OFFSET))(E2692EDB678DEB5F, B48C66E5FB2449C6);
		}

		static ::System::String* SDKInvoke(::System::String* E2692EDB678DEB5F, ::System::String* F0D3F87128A7C4CA, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_SDKINVOKE_OFFSET))(E2692EDB678DEB5F, F0D3F87128A7C4CA, E04D2BE64FCE9814);
		}

		static ::System::String* cloud_set_data(::System::String* FD181A16F6ABA0AF)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_SET_DATA_OFFSET))(FD181A16F6ABA0AF);
		}

		static ::System::Void BEAB62EEAEC3B695(::System::String* A6CAE7339066B0FB)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_BEAB62EEAEC3B695_OFFSET))(A6CAE7339066B0FB);
		}
	};
}

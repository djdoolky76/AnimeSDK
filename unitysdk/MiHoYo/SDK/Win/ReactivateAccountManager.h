#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Win { class ReactivateAccountManager; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_REACTIVATEACCOUNTMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x196001B0)
#define MIHOYO_SDK_WIN_REACTIVATEACCOUNTMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x196001A0)
#define MIHOYO_SDK_WIN_REACTIVATEACCOUNTMANAGER_HIDE_OFFSET UNITYSDK_OFFSET(0x19600020)
#define MIHOYO_SDK_WIN_REACTIVATEACCOUNTMANAGER_SHOW_OFFSET UNITYSDK_OFFSET(0x195FFC00)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ReactivateAccountManager_TypeDefinitionIndex = 9292;

	class ReactivateAccountManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::ReactivateAccountManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::ReactivateAccountManager**)UnitySDK::FromName("MiHoYo.SDK.Win", "ReactivateAccountManager")->GetStaticField(0x200F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNTMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNTMANAGER_CCTOR_OFFSET))();
		}

		::System::Void Show(::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* a1, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNTMANAGER_SHOW_OFFSET))(this, a1, a2);
		}

		::System::Void HIde()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNTMANAGER_HIDE_OFFSET))(this);
		}

	};
}

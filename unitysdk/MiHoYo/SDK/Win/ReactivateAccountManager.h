#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Win { class ReactivateAccountManager; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_REACTIVATEACCOUNTMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BDDC3E0)
#define MIHOYO_SDK_WIN_REACTIVATEACCOUNTMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BDDC3D0)
#define MIHOYO_SDK_WIN_REACTIVATEACCOUNTMANAGER_HIDE_OFFSET UNITYSDK_OFFSET(0x1BDDC250)
#define MIHOYO_SDK_WIN_REACTIVATEACCOUNTMANAGER_SHOW_OFFSET UNITYSDK_OFFSET(0x1BDDBE30)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ReactivateAccountManager_TypeDefinitionIndex = 9284;

	class ReactivateAccountManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::ReactivateAccountManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::ReactivateAccountManager**)UnitySDK::FromName("MiHoYo.SDK.Win", "ReactivateAccountManager")->GetStaticField(0x19B70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNTMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNTMANAGER_CCTOR_OFFSET))();
		}

		::System::Void Show(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNTMANAGER_SHOW_OFFSET))(this, a1, a2);
		}

		::System::Void HIde()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNTMANAGER_HIDE_OFFSET))(this);
		}

	};
}

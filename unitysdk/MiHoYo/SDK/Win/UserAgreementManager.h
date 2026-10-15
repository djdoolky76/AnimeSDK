#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Win { class UserAgreementManager; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_USERAGREEMENTMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BDFEA90)
#define MIHOYO_SDK_WIN_USERAGREEMENTMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BDFEA80)
#define MIHOYO_SDK_WIN_USERAGREEMENTMANAGER_SHOWUSERAGREEMENT_1_OFFSET UNITYSDK_OFFSET(0x1BDFEA70)
#define MIHOYO_SDK_WIN_USERAGREEMENTMANAGER_SHOWUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x1BDFEA60)

namespace MiHoYo::SDK::Win
{
	class UserAgreementManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::UserAgreementManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::UserAgreementManager**)UnitySDK::FromName("MiHoYo.SDK.Win", "UserAgreementManager")->GetStaticField(0x25AA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERAGREEMENTMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERAGREEMENTMANAGER_CCTOR_OFFSET))();
		}

		::System::Void ShowUserAgreement(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERAGREEMENTMANAGER_SHOWUSERAGREEMENT_OFFSET))(this, a1);
		}

		::System::Void ShowUserAgreement_1(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERAGREEMENTMANAGER_SHOWUSERAGREEMENT_1_OFFSET))(this, a1, a2);
		}

	};
}

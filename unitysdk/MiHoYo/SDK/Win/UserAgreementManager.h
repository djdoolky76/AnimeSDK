#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Win { class UserAgreementManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_USERAGREEMENTMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BDD69B0)
#define MIHOYO_SDK_WIN_USERAGREEMENTMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BDD69A0)
#define MIHOYO_SDK_WIN_USERAGREEMENTMANAGER_SHOWUSERAGREEMENT_1_OFFSET UNITYSDK_OFFSET(0x1BDD6990)
#define MIHOYO_SDK_WIN_USERAGREEMENTMANAGER_SHOWUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x1BDD6980)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int UserAgreementManager_TypeDefinitionIndex = 9373;

	class UserAgreementManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::UserAgreementManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::UserAgreementManager**)UnitySDK::FromName("MiHoYo.SDK.Win", "UserAgreementManager")->GetStaticField(0x2F560);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERAGREEMENTMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERAGREEMENTMANAGER_CCTOR_OFFSET))();
		}

		::System::Void ShowUserAgreement(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERAGREEMENTMANAGER_SHOWUSERAGREEMENT_OFFSET))(this, a1);
		}

		::System::Void ShowUserAgreement_1(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERAGREEMENTMANAGER_SHOWUSERAGREEMENT_1_OFFSET))(this, a1, a2);
		}

	};
}

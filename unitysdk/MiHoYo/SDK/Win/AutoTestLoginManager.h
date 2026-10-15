#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class ComboUserModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::Win { class AutoTestLoginManager; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BCDF480)
#define MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER_COMBOLOGIN_OFFSET UNITYSDK_OFFSET(0x1BCDE630)
#define MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER_COMBOLOGOUT_OFFSET UNITYSDK_OFFSET(0x1BCDE920)
#define MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCDF450)
#define MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER_LOGIN_OFFSET UNITYSDK_OFFSET(0x1BCDE750)
#define MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER_LOGOUT_OFFSET UNITYSDK_OFFSET(0x1BCDEA40)
#define MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER_ONCOMBOLOGINCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BCDDF90)
#define MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER_REQUESTCOMBOLOGIN_OFFSET UNITYSDK_OFFSET(0x1BCDDE00)
#define MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER_SETLOGINACCOUNT_OFFSET UNITYSDK_OFFSET(0x1BCDF0F0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int AutoTestLoginManager_TypeDefinitionIndex = 9268;

	class AutoTestLoginManager : public ::System::Object
	{
	public:
		::System::String* passwordAutoTest; // 0x10
		::System::String* accountAutoTest; // 0x18
		::System::Boolean isLoginRequest; // 0x20
		::System::Boolean isAutoTest; // 0x21
		::System::Byte _padding0[0x2];
		::System::Int32 tokenType; // 0x24
		static ::MiHoYo::SDK::Win::AutoTestLoginManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::AutoTestLoginManager**)UnitySDK::FromName("MiHoYo.SDK.Win", "AutoTestLoginManager")->GetStaticField(0x188E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER_CCTOR_OFFSET))();
		}

		::System::Void RequestComboLogin(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER_REQUESTCOMBOLOGIN_OFFSET))(this, a1, a2);
		}

		::System::Void OnComboLoginCallback(::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::ComboUserModel*>* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::ComboUserModel*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER_ONCOMBOLOGINCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void ComboLogin(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER_COMBOLOGIN_OFFSET))(this, a1);
		}

		::System::Void ComboLogout(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER_COMBOLOGOUT_OFFSET))(this, a1);
		}

		::System::Void Login(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER_LOGIN_OFFSET))(this, a1);
		}

		::System::Void Logout(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER_LOGOUT_OFFSET))(this, a1);
		}

		::System::Void SetLoginAccount(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER_SETLOGINACCOUNT_OFFSET))(this, a1);
		}

	};
}

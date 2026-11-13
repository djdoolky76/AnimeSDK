#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Console { class ComboManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Coroutine; }

#define MIHOYO_SDK_CONSOLE_COMBOMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x185E2F90)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x185E2F80)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x185DE980)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER_LOGIN_OFFSET UNITYSDK_OFFSET(0x185DEAD0)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER_LOGOUTWITHGAMENOTIFICATION_OFFSET UNITYSDK_OFFSET(0x185DF4F0)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER_LOGOUTWITHOUTCONFIRM_OFFSET UNITYSDK_OFFSET(0x185DF130)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER_LOGOUT_OFFSET UNITYSDK_OFFSET(0x185DF120)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER_MERGECOMBODATA_OFFSET UNITYSDK_OFFSET(0x185E1FE0)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER_ONCOMBOLOGINCALLBACK_OFFSET UNITYSDK_OFFSET(0x185E0500)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER_ONCOMBOLOGIN_OFFSET UNITYSDK_OFFSET(0x185E0750)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER_ONGETPING_OFFSET UNITYSDK_OFFSET(0x185E2480)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER_ONMDKLOGIN_OFFSET UNITYSDK_OFFSET(0x185DF8A0)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER_PING_OFFSET UNITYSDK_OFFSET(0x185E2200)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER_REQUESTPING_OFFSET UNITYSDK_OFFSET(0x185E2270)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER_REQUESTREDPOINT_OFFSET UNITYSDK_OFFSET(0x185E2E20)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER_SIGNCOMBOBODY_OFFSET UNITYSDK_OFFSET(0x185DFF20)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER_STOPPING_OFFSET UNITYSDK_OFFSET(0x185E23B0)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER_SWITCHROLE_OFFSET UNITYSDK_OFFSET(0x185DF660)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ComboManager_TypeDefinitionIndex = 8977;

	class ComboManager : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* comboLoginCallback; // 0x10
		::UnityEngine::Coroutine* pingCoroutine; // 0x18
		::System::Int64 totalTime; // 0x20
		::System::Single pingTime; // 0x28
		static ::MiHoYo::SDK::Console::ComboManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::ComboManager**)UnitySDK::FromName("MiHoYo.SDK.Console", "ComboManager")->GetStaticField(0x3AB00);
		}

		// static const ::System::Object MinPingTime; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER_CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Login(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER_LOGIN_OFFSET))(this, a1);
		}

		::System::Void Logout(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER_LOGOUT_OFFSET))(this, a1);
		}

		::System::Void LogoutWithGameNotification(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER_LOGOUTWITHGAMENOTIFICATION_OFFSET))(this, a1);
		}

		::System::Void LogoutWithoutConfirm(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER_LOGOUTWITHOUTCONFIRM_OFFSET))(this, a1);
		}

		::System::Void SwitchRole(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER_SWITCHROLE_OFFSET))(this, a1);
		}

		::System::Void OnMDKLogin(::System::Int32 a1, ::System::String* a2, ::MiHoYo::SDK::AccountModel* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER_ONMDKLOGIN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnComboLogin(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER_ONCOMBOLOGIN_OFFSET))(this, a1);
		}

		::System::Void MergeComboData(::MiHoYo::SDK::JSONNode* a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER_MERGECOMBODATA_OFFSET))(this, a1, a2);
		}

		::System::Void OnComboLoginCallback(::System::Int32 a1, ::System::String* a2, ::MiHoYo::SDK::JSONNode* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER_ONCOMBOLOGINCALLBACK_OFFSET))(this, a1, a2, a3);
		}

		::System::String* SignComboBody(::MiHoYo::SDK::JSONObject* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::JSONObject*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER_SIGNCOMBOBODY_OFFSET))(this, a1, a2);
		}

		::System::Void Ping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER_PING_OFFSET))(this);
		}

		::System::Void StopPing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER_STOPPING_OFFSET))(this);
		}

		::System::Void RequestPing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER_REQUESTPING_OFFSET))(this);
		}

		::System::Void OnGetPing(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER_ONGETPING_OFFSET))(this, a1);
		}

		::System::Void RequestRedPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER_REQUESTREDPOINT_OFFSET))(this);
		}

	};
}

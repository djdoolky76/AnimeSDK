#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Console::OS { class PS4BindManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Coroutine; }

#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_BINDBYINPUT_OFFSET UNITYSDK_OFFSET(0x1862B050)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1862A680)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_GETBINDINGWEBURL_OFFSET UNITYSDK_OFFSET(0x1862B580)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_GETCAPTCHCODE_OFFSET UNITYSDK_OFFSET(0x1862C140)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x18628F70)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_GET_RSAKEY_OFFSET UNITYSDK_OFFSET(0x1862A820)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_LOGREPORT_OFFSET UNITYSDK_OFFSET(0x1862AB90)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_PERFORMBINDEMAILFLOW_OFFSET UNITYSDK_OFFSET(0x18628FF0)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_QUERYWEBBINDINGRESULT_OFFSET UNITYSDK_OFFSET(0x1862BED0)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_REQUESTBINDEMAIL_OFFSET UNITYSDK_OFFSET(0x1862C510)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_REQUESTCREATEACTIONTICKETBYSTOKEN_OFFSET UNITYSDK_OFFSET(0x1862BAB0)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_REQUESTGETACTIONTICKETINFO_OFFSET UNITYSDK_OFFSET(0x1862BF50)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_REQUESTMAILCAPTCHA_OFFSET UNITYSDK_OFFSET(0x1862C200)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_REQUESTVERIFYACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x1862B1C0)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_SHOWBINDSUCCESSDIALOG_OFFSET UNITYSDK_OFFSET(0x1862A8D0)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_STARTWEBBINDINGRESULTQUERYLOOP_OFFSET UNITYSDK_OFFSET(0x1862BCF0)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_STOPWEBBINDINGRESULTQUERYLOOP_OFFSET UNITYSDK_OFFSET(0x1862BE50)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_UPDATEACTIONTICKETANDQRCODE_OFFSET UNITYSDK_OFFSET(0x1862B9F0)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_UPDATEQRCODE_OFFSET UNITYSDK_OFFSET(0x1862AF30)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER__GETCAPTCHCODE_G__CALLBACK_31_0_OFFSET UNITYSDK_OFFSET(0x1862D5A0)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER__PERFORMBINDEMAILFLOW_B__23_0_OFFSET UNITYSDK_OFFSET(0x1862C890)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER__PERFORMBINDEMAILFLOW_B__23_1_OFFSET UNITYSDK_OFFSET(0x1862C930)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER__PERFORMBINDEMAILFLOW_B__23_2_OFFSET UNITYSDK_OFFSET(0x1862C9E0)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER__PERFORMBINDEMAILFLOW_B__23_3_OFFSET UNITYSDK_OFFSET(0x1862CC60)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER__QUERYWEBBINDINGRESULT_G__ONQUERYRESULT_30_0_OFFSET UNITYSDK_OFFSET(0x1862D0C0)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER__SHOWBINDSUCCESSDIALOG_B__22_0_OFFSET UNITYSDK_OFFSET(0x1862C7D0)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER__UPDATEACTIONTICKETANDQRCODE_G__ONGETACTIONTICKET_26_0_OFFSET UNITYSDK_OFFSET(0x1862CDE0)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int PS4BindManager_TypeDefinitionIndex = 9114;

	class PS4BindManager : public ::System::Object
	{
	public:
		::System::Action* loginSuccessCallback; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Headers; // 0x18
		::System::String* mid; // 0x20
		::System::String* KibanaReportModule; // 0x28
		::System::Action_2<::System::Int32, ::System::String*>* loginFailedCallback; // 0x30
		::System::String* userAccountName; // 0x38
		::UnityEngine::Coroutine* WebBindResultQueryRoutine; // 0x40
		::System::String* ActionTicket; // 0x48
		::System::String* SToken; // 0x50
		::System::Single WEB_BINDING_RESULT_QUERY_INTERVAL_SEC; // 0x58
		::System::Boolean BindResultShown; // 0x5C
		static ::MiHoYo::SDK::Console::OS::PS4BindManager** StaticGet__instance()
		{
			return (::MiHoYo::SDK::Console::OS::PS4BindManager**)UnitySDK::FromName("MiHoYo.SDK.Console.OS", "PS4BindManager")->GetStaticField(0x44850);
		}

		// static const ::System::String* ACTION_TYPE_BIND_EMAIL; // 0x0
		// static const ::System::String* USER_CANCEL_BIND_HINT; // 0x0
		// static const ::System::Object ACTION_TICKET_EXPIRED; // 0x0
		// static const ::System::Object STOKEN_INVALID; // 0x0
		// static const ::System::Object VERIFY_METHOD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::Console::OS::PS4BindManager* get_Instance()
		{
			return ((::MiHoYo::SDK::Console::OS::PS4BindManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_GET_INSTANCE_OFFSET))();
		}

		static ::System::String* get_RSAKey()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_GET_RSAKEY_OFFSET))();
		}

		::System::Void ShowBindSuccessDialog(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_SHOWBINDSUCCESSDIALOG_OFFSET))(this, a1);
		}

		::System::Void PerformBindEmailFlow(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::Action* a5, ::System::Action_2<::System::Int32, ::System::String*>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action*, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_PERFORMBINDEMAILFLOW_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void BindByInput(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_BINDBYINPUT_OFFSET))(this, a1, a2);
		}

		::System::String* GetBindingWebURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_GETBINDINGWEBURL_OFFSET))(this);
		}

		::System::Void UpdateActionTicketAndQRCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_UPDATEACTIONTICKETANDQRCODE_OFFSET))(this);
		}

		::System::Void UpdateQRCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_UPDATEQRCODE_OFFSET))(this);
		}

		::System::Void StartWebBindingResultQueryLoop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_STARTWEBBINDINGRESULTQUERYLOOP_OFFSET))(this);
		}

		::System::Void StopWebBindingResultQueryLoop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_STOPWEBBINDINGRESULTQUERYLOOP_OFFSET))(this);
		}

		::System::Void QueryWebBindingResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_QUERYWEBBINDINGRESULT_OFFSET))(this);
		}

		::System::Void GetCaptchCode(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_GETCAPTCHCODE_OFFSET))(this, a1);
		}

		::System::Void RequestGetActionTicketInfo(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_REQUESTGETACTIONTICKETINFO_OFFSET))(this, a1, a2);
		}

		::System::Void RequestVerifyActionTicket(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_REQUESTVERIFYACTIONTICKET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RequestMailCaptcha(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_REQUESTMAILCAPTCHA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RequestBindEmail(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_REQUESTBINDEMAIL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RequestCreateActionTicketBySToken(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_REQUESTCREATEACTIONTICKETBYSTOKEN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LogReport(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_LOGREPORT_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowBindSuccessDialog_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER__SHOWBINDSUCCESSDIALOG_B__22_0_OFFSET))(this);
		}

		::System::Void _PerformBindEmailFlow_b__23_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER__PERFORMBINDEMAILFLOW_B__23_0_OFFSET))(this);
		}

		::System::Void _PerformBindEmailFlow_b__23_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER__PERFORMBINDEMAILFLOW_B__23_1_OFFSET))(this, a1);
		}

		::System::Void _PerformBindEmailFlow_b__23_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER__PERFORMBINDEMAILFLOW_B__23_2_OFFSET))(this);
		}

		::System::Void _PerformBindEmailFlow_b__23_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER__PERFORMBINDEMAILFLOW_B__23_3_OFFSET))(this);
		}

		::System::Void _UpdateActionTicketAndQRCode_g__OnGetActionTicket_26_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER__UPDATEACTIONTICKETANDQRCODE_G__ONGETACTIONTICKET_26_0_OFFSET))(this, a1);
		}

		::System::Void _QueryWebBindingResult_g__OnQueryResult_30_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER__QUERYWEBBINDINGRESULT_G__ONQUERYRESULT_30_0_OFFSET))(this, a1);
		}

		::System::Void _GetCaptchCode_g__callback_31_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER__GETCAPTCHCODE_G__CALLBACK_31_0_OFFSET))(this, a1);
		}

	};
}

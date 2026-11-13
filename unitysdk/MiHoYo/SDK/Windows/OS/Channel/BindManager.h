#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ReportType.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::UI::OS { class IWinAccountBindingDialog; }
namespace MiHoYo::SDK::UI::OS { class IWinBindingSuccessDialog; }
namespace MiHoYo::SDK::UI::OS { class IWinBindingWelcomeDialog; }
namespace MiHoYo::SDK::Windows::OS::Channel { class BindManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Coroutine; }

#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_BINDEMAIL_OFFSET UNITYSDK_OFFSET(0x19631170)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_BINDEXISTINGACCOUNT_OFFSET UNITYSDK_OFFSET(0x1962F6C0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_CREATEANDBINDNEWACCOUNT_OFFSET UNITYSDK_OFFSET(0x1962F660)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1962EA30)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_GENERATEACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x1962F4C0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_GETBINDINGWEBURL_OFFSET UNITYSDK_OFFSET(0x196301B0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_GETCAPTCHACODE_OFFSET UNITYSDK_OFFSET(0x196308D0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_GETCHANNELNICKNAME_OFFSET UNITYSDK_OFFSET(0x19631F40)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_GETREPORTTYPE_OFFSET UNITYSDK_OFFSET(0x19633040)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1962E530)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_GET_RSAKEY_OFFSET UNITYSDK_OFFSET(0x1962E980)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_ISBINDINGACCOUNTSWITCHON_OFFSET UNITYSDK_OFFSET(0x1962F4B0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_LOGINAFTERSUCCESSFULBINDING_OFFSET UNITYSDK_OFFSET(0x1962FE10)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_LOGINBYEMAILCAPTCHA_OFFSET UNITYSDK_OFFSET(0x19630BE0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_LOGREPORT_OFFSET UNITYSDK_OFFSET(0x1962EDF0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_ONCLOSEDIALOG_OFFSET UNITYSDK_OFFSET(0x19631E50)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_PERFORMBINDINGFLOW_OFFSET UNITYSDK_OFFSET(0x19630B40)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_QUERYWEBBINDINGRESULT_OFFSET UNITYSDK_OFFSET(0x19630320)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_REACTIVATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x196312D0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_REMOVESPACES_OFFSET UNITYSDK_OFFSET(0x19630B00)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_REQUESTBINDTHIRDPARTY_OFFSET UNITYSDK_OFFSET(0x19632C70)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_REQUESTCREATEACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x196301D0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_REQUESTGETACTIONTICKETINFO_OFFSET UNITYSDK_OFFSET(0x196303C0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_REQUESTLOGINBYACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x19632550)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_REQUESTREACTIVATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x196328A0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_REQUESTVERIFYCAPTCHA_OFFSET UNITYSDK_OFFSET(0x19630D70)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_RISKCHECK_OFFSET UNITYSDK_OFFSET(0x196318B0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_SAVEPREBINDINGPROTOCOLAGREERECORD_OFFSET UNITYSDK_OFFSET(0x19632530)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_SHOWBINDSUCCESSDIALOG_OFFSET UNITYSDK_OFFSET(0x1962FF40)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_SHOWPREBINDINGPROTOCOLDIALOG_OFFSET UNITYSDK_OFFSET(0x19631FF0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_SHOWWELCOMEDIALOG_OFFSET UNITYSDK_OFFSET(0x1962F080)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_STARTACCOUNTBINDING_OFFSET UNITYSDK_OFFSET(0x1962EBD0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_STARTWEBBINDINGRESULTQUERYLOOP_OFFSET UNITYSDK_OFFSET(0x19630760)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_STOPWEBBINDINGRESULTQUERYLOOP_OFFSET UNITYSDK_OFFSET(0x19630880)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_UPDATEQRCODE_OFFSET UNITYSDK_OFFSET(0x1962FCB0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__BINDEXISTINGACCOUNT_B__34_0_OFFSET UNITYSDK_OFFSET(0x19633340)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__BINDEXISTINGACCOUNT_B__34_1_OFFSET UNITYSDK_OFFSET(0x196333D0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__BINDEXISTINGACCOUNT_B__34_2_OFFSET UNITYSDK_OFFSET(0x19633530)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__BINDEXISTINGACCOUNT_B__34_3_OFFSET UNITYSDK_OFFSET(0x19633610)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__BINDEXISTINGACCOUNT_B__34_4_OFFSET UNITYSDK_OFFSET(0x196336F0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__PERFORMBINDINGFLOW_B__44_0_OFFSET UNITYSDK_OFFSET(0x19634130)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__QUERYWEBBINDINGRESULT_B__40_0_OFFSET UNITYSDK_OFFSET(0x19633970)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__SHOWBINDSUCCESSDIALOG_B__37_0_OFFSET UNITYSDK_OFFSET(0x19633850)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__SHOWBINDSUCCESSDIALOG_B__37_1_OFFSET UNITYSDK_OFFSET(0x196338E0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__SHOWWELCOMEDIALOG_B__33_0_OFFSET UNITYSDK_OFFSET(0x19633050)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__SHOWWELCOMEDIALOG_B__33_1_OFFSET UNITYSDK_OFFSET(0x196330E0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__SHOWWELCOMEDIALOG_B__33_2_OFFSET UNITYSDK_OFFSET(0x196332B0)

namespace MiHoYo::SDK::Windows::OS::Channel
{
	inline static constexpr unsigned int BindManager_TypeDefinitionIndex = 8367;

	class BindManager : public ::System::Object
	{
	public:
		::MiHoYo::SDK::UI::OS::IWinAccountBindingDialog* _accountBindingDialog; // 0x10
		::System::String* _userId; // 0x18
		::System::String* _loginTicket; // 0x20
		::System::String* PLATFORM; // 0x28
		::System::String* H5LOG_REPORT_MODULE; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _commonHeaders; // 0x38
		::MiHoYo::SDK::JSONObject* _captchaVerifyCombination; // 0x40
		::System::String* _webTicket; // 0x48
		::System::Action_1<::System::Boolean>* _processCompletedCallback; // 0x50
		::System::Action* _processCancelledCallback; // 0x58
		::System::String* _accessToken; // 0x60
		::System::String* _sToken; // 0x68
		::System::String* _userInputAccount; // 0x70
		::System::String* _userEmail; // 0x78
		::UnityEngine::Coroutine* _webBindingResultQueryCoroutine; // 0x80
		::MiHoYo::SDK::UI::OS::IWinBindingSuccessDialog* _bindingSuccessDialog; // 0x88
		::MiHoYo::SDK::UI::OS::IWinBindingWelcomeDialog* _bindingWelcomeDialog; // 0x90
		static ::MiHoYo::SDK::Windows::OS::Channel::BindManager** StaticGet__instance()
		{
			return (::MiHoYo::SDK::Windows::OS::Channel::BindManager**)UnitySDK::FromName("MiHoYo.SDK.Windows.OS.Channel", "BindManager")->GetStaticField(0x229F0);
		}

		// static const ::System::String* ACTION_TYPE_LOGIN_BY_EMAIL; // 0x0
		// static const ::System::String* ACTION_TYPE_BIND_THIRDPARTY; // 0x0
		// static const ::System::String* PASSPORT_HEADER_KEY_APP_ID_HEADER; // 0x0
		// static const ::System::String* PASSPORT_HEADER_KEY_AIGIS_USE_V4_HEADER; // 0x0
		// static const ::System::String* PASSPORT_HEADER_KEY_AIGIS_HEADER; // 0x0
		// static const ::System::String* PASSPORT_HEADER_KEY_REACTIVATE_HEADER; // 0x0
		// static const ::System::Object WEB_BINDING_RESULT_QUERY_INTERVAL_SEC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::Windows::OS::Channel::BindManager* get_Instance()
		{
			return ((::MiHoYo::SDK::Windows::OS::Channel::BindManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_GET_INSTANCE_OFFSET))();
		}

		static ::System::String* get_RSAKey()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_GET_RSAKEY_OFFSET))();
		}

		::System::Void StartAccountBinding(::System::Action* a1, ::System::Action_1<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_STARTACCOUNTBINDING_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsBindingAccountSwitchOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_ISBINDINGACCOUNTSWITCHON_OFFSET))(this);
		}

		::System::Void GenerateAccessToken(::System::Action_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_GENERATEACCESSTOKEN_OFFSET))(this, a1, a2);
		}

		::System::Void ShowWelcomeDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_SHOWWELCOMEDIALOG_OFFSET))(this);
		}

		::System::Void BindExistingAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_BINDEXISTINGACCOUNT_OFFSET))(this);
		}

		::System::Void CreateAndBindNewAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_CREATEANDBINDNEWACCOUNT_OFFSET))(this);
		}

		::System::Void LoginAfterSuccessfulBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_LOGINAFTERSUCCESSFULBINDING_OFFSET))(this);
		}

		::System::Void ShowBindSuccessDialog(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_SHOWBINDSUCCESSDIALOG_OFFSET))(this, a1, a2);
		}

		::System::String* GetBindingWebURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_GETBINDINGWEBURL_OFFSET))(this);
		}

		::System::Void UpdateQRCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_UPDATEQRCODE_OFFSET))(this);
		}

		::System::Void QueryWebBindingResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_QUERYWEBBINDINGRESULT_OFFSET))(this);
		}

		::System::Void StartWebBindingResultQueryLoop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_STARTWEBBINDINGRESULTQUERYLOOP_OFFSET))(this);
		}

		::System::Void StopWebBindingResultQueryLoop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_STOPWEBBINDINGRESULTQUERYLOOP_OFFSET))(this);
		}

		::System::Void GetCaptchaCode(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_GETCAPTCHACODE_OFFSET))(this, a1);
		}

		::System::Void PerformBindingFlow(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_PERFORMBINDINGFLOW_OFFSET))(this, a1);
		}

		::System::Void LoginByEmailCaptcha(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_LOGINBYEMAILCAPTCHA_OFFSET))(this, a1, a2);
		}

		::System::Void BindEmail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_BINDEMAIL_OFFSET))(this);
		}

		::System::Void ReactivateAccount(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_REACTIVATEACCOUNT_OFFSET))(this, a1, a2);
		}

		::System::Void RiskCheck(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_RISKCHECK_OFFSET))(this, a1, a2);
		}

		::System::Void OnCloseDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_ONCLOSEDIALOG_OFFSET))(this);
		}

		::System::String* GetChannelNickname()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_GETCHANNELNICKNAME_OFFSET))(this);
		}

		::System::Void ShowPreBindingProtocolDialog(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_SHOWPREBINDINGPROTOCOLDIALOG_OFFSET))(this, a1, a2);
		}

		::System::Void SavePreBindingProtocolAgreeRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_SAVEPREBINDINGPROTOCOLAGREERECORD_OFFSET))(this);
		}

		::System::Void RequestCreateActionTicket(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_REQUESTCREATEACTIONTICKET_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void RequestVerifyCaptcha(::System::String* a1, ::System::String* a2, ::MiHoYo::SDK::JSONObject* a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_REQUESTVERIFYCAPTCHA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void RequestLoginByActionTicket(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_REQUESTLOGINBYACTIONTICKET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RequestReactivateAccount(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_REQUESTREACTIVATEACCOUNT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RequestBindThirdparty(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_REQUESTBINDTHIRDPARTY_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void RequestGetActionTicketInfo(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_REQUESTGETACTIONTICKETINFO_OFFSET))(this, a1, a2, a3);
		}

		::System::String* RemoveSpaces(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_REMOVESPACES_OFFSET))(this, a1);
		}

		::System::Void LogReport(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_LOGREPORT_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::ReportType GetReportType()
		{
			return ((::MiHoYo::SDK::ReportType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_GETREPORTTYPE_OFFSET))(this);
		}

		::System::Void _ShowWelcomeDialog_b__33_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__SHOWWELCOMEDIALOG_B__33_0_OFFSET))(this);
		}

		::System::Void _ShowWelcomeDialog_b__33_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__SHOWWELCOMEDIALOG_B__33_1_OFFSET))(this);
		}

		::System::Void _ShowWelcomeDialog_b__33_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__SHOWWELCOMEDIALOG_B__33_2_OFFSET))(this);
		}

		::System::Void _BindExistingAccount_b__34_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__BINDEXISTINGACCOUNT_B__34_0_OFFSET))(this);
		}

		::System::Void _BindExistingAccount_b__34_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__BINDEXISTINGACCOUNT_B__34_1_OFFSET))(this);
		}

		::System::Void _BindExistingAccount_b__34_2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__BINDEXISTINGACCOUNT_B__34_2_OFFSET))(this, a1);
		}

		::System::Void _BindExistingAccount_b__34_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__BINDEXISTINGACCOUNT_B__34_3_OFFSET))(this);
		}

		::System::Void _BindExistingAccount_b__34_4(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__BINDEXISTINGACCOUNT_B__34_4_OFFSET))(this, a1);
		}

		::System::Void _ShowBindSuccessDialog_b__37_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__SHOWBINDSUCCESSDIALOG_B__37_0_OFFSET))(this);
		}

		::System::Void _ShowBindSuccessDialog_b__37_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__SHOWBINDSUCCESSDIALOG_B__37_1_OFFSET))(this);
		}

		::System::Void _QueryWebBindingResult_b__40_0(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__QUERYWEBBINDINGRESULT_B__40_0_OFFSET))(this, a1);
		}

		::System::Void _PerformBindingFlow_b__44_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__PERFORMBINDINGFLOW_B__44_0_OFFSET))(this);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/CXHandheld/BindManagerBase.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_BINDEMAIL_OFFSET UNITYSDK_OFFSET(0x1D8F2DF0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_GETCAPTCHACODE_OFFSET UNITYSDK_OFFSET(0x1D8F2F00)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_GET_RSAKEY_OFFSET UNITYSDK_OFFSET(0x1D8F2720)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_QUERYWEBBINDINGRESULT_OFFSET UNITYSDK_OFFSET(0x1D8F2AD0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_REPORTBINDFAIL_OFFSET UNITYSDK_OFFSET(0x1D8F27D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_REQUESTACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x1D8F2A10)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_REQUESTBINDTHIRDPARTY_OFFSET UNITYSDK_OFFSET(0x1D8F3840)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_REQUESTGETACTIONTICKETINFO_OFFSET UNITYSDK_OFFSET(0x1D8F2B40)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_REQUESTLOGINBYACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x1D8F33E0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_REQUESTREACTIVATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1D8F35E0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_REQUESTVERIFYCAPTCHA_OFFSET UNITYSDK_OFFSET(0x1D8F3090)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_UPDATEQRCODE_OFFSET UNITYSDK_OFFSET(0x1D8F2970)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8F3B10)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD__QUERYWEBBINDINGRESULT_B__17_0_OFFSET UNITYSDK_OFFSET(0x1D8F3FB0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD__UPDATEQRCODE_B__16_0_OFFSET UNITYSDK_OFFSET(0x1D8F3C10)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int BindManagerHandheld_TypeDefinitionIndex = 20034;

	class BindManagerHandheld : public ::MiHoYo::SDK::PC::OS::CXHandheld::BindManagerBase
	{
	public:
		// static const ::System::String* ACTION_TYPE_LOGINBYEMAIL; // 0x0
		// static const ::System::String* ACTION_TYPE_BINDTHIRDPARTY; // 0x0
		::System::String* UserId; // 0x50
		::System::String* WebTicket; // 0x58
		::System::String* LoginTicket; // 0x60
		::System::String* ConsoleAccountName; // 0x68
		::MiHoYo::SDK::JSONObject* CaptchaVerifyCombination; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Headers; // 0x78
		::System::String* SToken; // 0x80
		::System::String* UserEmail; // 0x88
		::System::String* ReactivateTicket; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD__CTOR_OFFSET))(this);
		}

		static ::System::String* get_RSAKey()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_GET_RSAKEY_OFFSET))();
		}

		::System::Void ReportBindFail(::System::Int32 retcode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_REPORTBINDFAIL_OFFSET))(this, retcode);
		}

		::System::Void UpdateQRCode(::System::Boolean refreshToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_UPDATEQRCODE_OFFSET))(this, refreshToken);
		}

		::System::Void QueryWebBindingResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_QUERYWEBBINDINGRESULT_OFFSET))(this);
		}

		::System::Void BindEmail(::System::Boolean refreshToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_BINDEMAIL_OFFSET))(this, refreshToken);
		}

		::System::Void GetCaptchaCode(::System::String* input, ::System::Boolean refreshToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_GETCAPTCHACODE_OFFSET))(this, input, refreshToken);
		}

		::System::Void RequestVerifyCaptcha(::System::String* captcha, ::System::String* actionTicket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_REQUESTVERIFYCAPTCHA_OFFSET))(this, captcha, actionTicket, callback);
		}

		::System::Void RequestActionTicket(::System::String* actionType, ::System::String* account, ::System::Boolean refreshToken, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_REQUESTACTIONTICKET_OFFSET))(this, actionType, account, refreshToken, callback);
		}

		::System::Void RequestLoginByActionTicket(::System::String* actionTicket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_REQUESTLOGINBYACTIONTICKET_OFFSET))(this, actionTicket, callback);
		}

		::System::Void RequestReactivateAccount(::System::String* actionTicket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_REQUESTREACTIVATEACCOUNT_OFFSET))(this, actionTicket, callback);
		}

		::System::Void RequestBindThirdparty(::System::String* actionTicket, ::System::String* stoken, ::System::String* uid, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_REQUESTBINDTHIRDPARTY_OFFSET))(this, actionTicket, stoken, uid, callback);
		}

		::System::Void RequestGetActionTicketInfo(::System::String* actionTicket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD_REQUESTGETACTIONTICKETINFO_OFFSET))(this, actionTicket, callback);
		}

		::System::Void _UpdateQRCode_b__16_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD__UPDATEQRCODE_B__16_0_OFFSET))(this, response);
		}

		::System::Void _QueryWebBindingResult_b__17_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD__QUERYWEBBINDINGRESULT_B__17_0_OFFSET))(this, response);
		}
	};
}

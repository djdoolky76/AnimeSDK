#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PS/BindManagerPS.h"
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN_BINDMOBILEBYTHIRDPARTYBINDMOBILETICKET_OFFSET UNITYSDK_OFFSET(0x1BF97BB0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN_BINDMOBILE_OFFSET UNITYSDK_OFFSET(0x1BF97AE0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN_CHECKREACTIVATEINFOBYACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x1BF97FB0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN_CREATETHIRDPARTYBINDMOBILEACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x1BF96F70)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN_CREATETHIRDPARTYBINDMOBILECAPTCHA_OFFSET UNITYSDK_OFFSET(0x1BF97D50)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF94490)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN_GETACTIONTICKETINFO_OFFSET UNITYSDK_OFFSET(0x1BF970A0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN_GETCAPTCHACODE_OFFSET UNITYSDK_OFFSET(0x1BF97290)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN_PERFORMBINDINGFLOW_OFFSET UNITYSDK_OFFSET(0x1BF97520)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN_QUERYWEBBINDINGRESULT_OFFSET UNITYSDK_OFFSET(0x1BF97010)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN_REACTIVATEACCOUNTBYACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x1BF97950)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN_REACTIVATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1BF97860)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN_UPDATEQRCODE_OFFSET UNITYSDK_OFFSET(0x1BF96D60)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN_VERIFYTHIRDPARTYBINDMOBILECAPTCHA_OFFSET UNITYSDK_OFFSET(0x1BF97680)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN__BINDMOBILE_B__12_0_OFFSET UNITYSDK_OFFSET(0x1BF99520)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN__QUERYWEBBINDINGRESULT_B__8_0_OFFSET UNITYSDK_OFFSET(0x1BF98890)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN__REACTIVATEACCOUNT_B__11_0_OFFSET UNITYSDK_OFFSET(0x1BF99360)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN__UPDATEQRCODE_B__7_0_OFFSET UNITYSDK_OFFSET(0x1BF981A0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int BindingManagerPSCN_TypeDefinitionIndex = 8905;

	class BindingManagerPSCN : public ::MiHoYo::SDK::PS::BindManagerPS
	{
	public:
		::System::String* ReactivateTicket; // 0x30
		::System::String* BindTicket; // 0x38
		::System::String* WebTicket; // 0x40
		// static const ::System::String* WEB_APP_ID_TEST; // 0x0
		// static const ::System::String* WEB_APP_ID; // 0x0
		// static const ::System::Object ACTION_TICKET_EXPIRED; // 0x0
		// static const ::System::String* ACTION_TYPE_BINDTICKET; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN_CTOR_OFFSET))(this);
		}

		::System::Void UpdateQRCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN_UPDATEQRCODE_OFFSET))(this);
		}

		::System::Void QueryWebBindingResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN_QUERYWEBBINDINGRESULT_OFFSET))(this);
		}

		::System::Void GetCaptchaCode(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN_GETCAPTCHACODE_OFFSET))(this, a1);
		}

		::System::Void PerformBindingFlow(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN_PERFORMBINDINGFLOW_OFFSET))(this, a1);
		}

		::System::Void ReactivateAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN_REACTIVATEACCOUNT_OFFSET))(this);
		}

		::System::Void BindMobile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN_BINDMOBILE_OFFSET))(this);
		}

		::System::Void CreateThirdpartyBindMobileActionTicket(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN_CREATETHIRDPARTYBINDMOBILEACTIONTICKET_OFFSET))(this, a1);
		}

		::System::Void GetActionTicketInfo(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN_GETACTIONTICKETINFO_OFFSET))(this, a1, a2);
		}

		::System::Void CreateThirdpartyBindMobileCaptcha(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN_CREATETHIRDPARTYBINDMOBILECAPTCHA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void VerifyThirdpartyBindMobileCaptcha(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN_VERIFYTHIRDPARTYBINDMOBILECAPTCHA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CheckReactivateInfoByActionTicket(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN_CHECKREACTIVATEINFOBYACTIONTICKET_OFFSET))(this, a1, a2);
		}

		::System::Void ReactivateAccountByActionTicket(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN_REACTIVATEACCOUNTBYACTIONTICKET_OFFSET))(this, a1, a2);
		}

		::System::Void BindMobileByThirdpartyBindMobileTicket(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN_BINDMOBILEBYTHIRDPARTYBINDMOBILETICKET_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateQRCode_b__7_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN__UPDATEQRCODE_B__7_0_OFFSET))(this, a1);
		}

		::System::Void _QueryWebBindingResult_b__8_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN__QUERYWEBBINDINGRESULT_B__8_0_OFFSET))(this, a1);
		}

		::System::Void _ReactivateAccount_b__11_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN__REACTIVATEACCOUNT_B__11_0_OFFSET))(this, a1);
		}

		::System::Void _BindMobile_b__12_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN__BINDMOBILE_B__12_0_OFFSET))(this, a1);
		}

	};
}

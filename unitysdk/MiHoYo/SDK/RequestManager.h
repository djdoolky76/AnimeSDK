#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class AgeGateTicketUpdateModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK { class RequestManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_REQUESTMANAGER_BEFOREVERIFY_OFFSET UNITYSDK_OFFSET(0x1D032300)
#define MIHOYO_SDK_REQUESTMANAGER_BINDACCOUNT_OFFSET UNITYSDK_OFFSET(0x1D0332D0)
#define MIHOYO_SDK_REQUESTMANAGER_BINDTHIRDPARTY_OFFSET UNITYSDK_OFFSET(0x1D0320C0)
#define MIHOYO_SDK_REQUESTMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D036840)
#define MIHOYO_SDK_REQUESTMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D036830)
#define MIHOYO_SDK_REQUESTMANAGER_GETCURRENCYANDCOUNTRYBYIP_OFFSET UNITYSDK_OFFSET(0x1D0345D0)
#define MIHOYO_SDK_REQUESTMANAGER_GETMAILVERIFYCODE_OFFSET UNITYSDK_OFFSET(0x1D02EBC0)
#define MIHOYO_SDK_REQUESTMANAGER_GETMOBILEVERIFYCODE_OFFSET UNITYSDK_OFFSET(0x1D030C70)
#define MIHOYO_SDK_REQUESTMANAGER_GETTICKETBYTOKEN_OFFSET UNITYSDK_OFFSET(0x1D02E720)
#define MIHOYO_SDK_REQUESTMANAGER_LOGINBYACCOUNT_1_OFFSET UNITYSDK_OFFSET(0x1D030150)
#define MIHOYO_SDK_REQUESTMANAGER_LOGINBYACCOUNT_OFFSET UNITYSDK_OFFSET(0x1D02FF30)
#define MIHOYO_SDK_REQUESTMANAGER_LOGINBYAUTHTICKET_OFFSET UNITYSDK_OFFSET(0x1D02F9F0)
#define MIHOYO_SDK_REQUESTMANAGER_LOGINBYGUEST_OFFSET UNITYSDK_OFFSET(0x1D030370)
#define MIHOYO_SDK_REQUESTMANAGER_LOGINBYMOBILECODE_OFFSET UNITYSDK_OFFSET(0x1D030E90)
#define MIHOYO_SDK_REQUESTMANAGER_LOGINBYTHIRDPARTY_1_OFFSET UNITYSDK_OFFSET(0x1D02F740)
#define MIHOYO_SDK_REQUESTMANAGER_LOGINBYTHIRDPARTY_OFFSET UNITYSDK_OFFSET(0x1D02F490)
#define MIHOYO_SDK_REQUESTMANAGER_LOGINBYTOKEN_1_OFFSET UNITYSDK_OFFSET(0x1D0312E0)
#define MIHOYO_SDK_REQUESTMANAGER_LOGINBYTOKEN_OFFSET UNITYSDK_OFFSET(0x1D031110)
#define MIHOYO_SDK_REQUESTMANAGER_MOBILECAPTCHA_OFFSET UNITYSDK_OFFSET(0x1D02F020)
#define MIHOYO_SDK_REQUESTMANAGER_PING_OFFSET UNITYSDK_OFFSET(0x1D0327A0)
#define MIHOYO_SDK_REQUESTMANAGER_QUERYQRCODE_OFFSET UNITYSDK_OFFSET(0x1D031DD0)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTABTEST_OFFSET UNITYSDK_OFFSET(0x1D0336A0)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTAGEGATELOADTICKET_OFFSET UNITYSDK_OFFSET(0x1D035570)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTAGEGATEPARENTALCONSENTEMAIL_OFFSET UNITYSDK_OFFSET(0x1D036050)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTAGEGATEPAYPREORDERVALIDATION_OFFSET UNITYSDK_OFFSET(0x1D036370)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTAGEGATERESENDEMAIL_OFFSET UNITYSDK_OFFSET(0x1D035D30)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTAGEGATEUPDATETICKET_OFFSET UNITYSDK_OFFSET(0x1D035890)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTBINDEMAILBYCODE_OFFSET UNITYSDK_OFFSET(0x1D02E980)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTGETCROSSTOKENURLBYSTOKEN_OFFSET UNITYSDK_OFFSET(0x1D034FA0)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTPAYDIALOGABTESTCN_OFFSET UNITYSDK_OFFSET(0x1D033DB0)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTPRICETIERV2_OFFSET UNITYSDK_OFFSET(0x1D0346A0)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTPRICETIER_OFFSET UNITYSDK_OFFSET(0x1D034330)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTQRCODE_OFFSET UNITYSDK_OFFSET(0x1D031B50)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTREDPOINTINFO_OFFSET UNITYSDK_OFFSET(0x1D032F70)
#define MIHOYO_SDK_REQUESTMANAGER_REQUESTSENDNOTICEEMAIL_OFFSET UNITYSDK_OFFSET(0x1D034BA0)
#define MIHOYO_SDK_REQUESTMANAGER_VERIFYMAILCAPTCHA_OFFSET UNITYSDK_OFFSET(0x1D02EDE0)
#define MIHOYO_SDK_REQUESTMANAGER_VERIFYMOBILECAPTCHA_OFFSET UNITYSDK_OFFSET(0x1D02F250)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int RequestManager_TypeDefinitionIndex = 8067;

	class RequestManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::RequestManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::RequestManager**)UnitySDK::FromName("MiHoYo.SDK", "RequestManager")->GetStaticField(0xC9A0);
		}

		// static const ::System::String* TICKET; // 0x0
		// static const ::System::String* X_RPC_APP_ID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_CCTOR_OFFSET))();
		}

		::System::Void GetTicketByToken(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_GETTICKETBYTOKEN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RequestBindEmailByCode(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTBINDEMAILBYCODE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GetMailVerifyCode(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_GETMAILVERIFYCODE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void VerifyMailCaptcha(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_VERIFYMAILCAPTCHA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MobileCaptcha(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_MOBILECAPTCHA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void VerifyMobileCaptcha(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_VERIFYMOBILECAPTCHA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LoginByThirdParty(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_LOGINBYTHIRDPARTY_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LoginByThirdParty_1(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_LOGINBYTHIRDPARTY_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LoginByAuthTicket(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_LOGINBYAUTHTICKET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LoginByAccount(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_LOGINBYACCOUNT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LoginByAccount_1(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_LOGINBYACCOUNT_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LoginByGuest(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_LOGINBYGUEST_OFFSET))(this, a1);
		}

		::System::Void GetMobileVerifyCode(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_GETMOBILEVERIFYCODE_OFFSET))(this, a1, a2);
		}

		::System::Void LoginByMobileCode(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_LOGINBYMOBILECODE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LoginByToken(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_LOGINBYTOKEN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LoginByToken_1(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_LOGINBYTOKEN_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RequestQRCode(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTQRCODE_OFFSET))(this, a1);
		}

		::System::Void QueryQRCode(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_QUERYQRCODE_OFFSET))(this, a1, a2);
		}

		::System::Void BindThirdParty(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_BINDTHIRDPARTY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BeforeVerify(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_BEFOREVERIFY_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void Ping(::System::String* a1, ::System::String* a2, ::System::Int64 a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int64, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_PING_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RequestRedPointInfo(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTREDPOINTINFO_OFFSET))(this, a1, a2);
		}

		::System::Void BindAccount(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_BINDACCOUNT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void RequestABTest(::System::String* a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3, ::System::Int32 a4, ::System::String* a5, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTABTEST_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void RequestPayDialogABTestCN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTPAYDIALOGABTESTCN_OFFSET))(this, a1);
		}

		::System::Void RequestPriceTier(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTPRICETIER_OFFSET))(this, a1, a2);
		}

		::System::Void GetCurrencyAndCountryByIP(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_GETCURRENCYANDCOUNTRYBYIP_OFFSET))(this, a1);
		}

		::System::Void RequestPriceTierV2(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTPRICETIERV2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RequestSendNoticeEmail(::MiHoYo::SDK::AccountModel* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTSENDNOTICEEMAIL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RequestGetCrossTokenUrlBySToken(::MiHoYo::SDK::AccountModel* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTGETCROSSTOKENURLBYSTOKEN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RequestAgeGateLoadTicket(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTAGEGATELOADTICKET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RequestAgeGateUpdateTicket(::MiHoYo::SDK::AgeGateTicketUpdateModel* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AgeGateTicketUpdateModel*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTAGEGATEUPDATETICKET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RequestAgeGateResendEmail(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTAGEGATERESENDEMAIL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RequestAgeGateParentalConsentEmail(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTAGEGATEPARENTALCONSENTEMAIL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RequestAgeGatePayPreOrderValidation(::MiHoYo::SDK::AccountModel* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER_REQUESTAGEGATEPAYPREORDERVALIDATION_OFFSET))(this, a1, a2, a3, a4);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::PC::OS { class GooglePlayBillingPayInfo; }
namespace System { class Action; }

#define MIHOYO_SDK_PC_OS_GOOGLEPAYMENTNETWORKREQUEST_CREATEORDER_OFFSET UNITYSDK_OFFSET(0x1BF10950)
#define MIHOYO_SDK_PC_OS_GOOGLEPAYMENTNETWORKREQUEST_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF132E0)
#define MIHOYO_SDK_PC_OS_GOOGLEPAYMENTNETWORKREQUEST_FIRSTPAYMENT_OFFSET UNITYSDK_OFFSET(0x1BF126D0)
#define MIHOYO_SDK_PC_OS_GOOGLEPAYMENTNETWORKREQUEST_VERIFYRECEIPT_OFFSET UNITYSDK_OFFSET(0x1BF11AD0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int GooglePaymentNetworkRequest_TypeDefinitionIndex = 8540;

	class GooglePaymentNetworkRequest : public ::System::Object
	{
	public:
		// static const ::System::Object TimeoutSeconds; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_GOOGLEPAYMENTNETWORKREQUEST_CTOR_OFFSET))(this);
		}

		static ::System::Void CreateOrder(::MiHoYo::SDK::AccountModel* a1, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_GOOGLEPAYMENTNETWORKREQUEST_CREATEORDER_OFFSET))(a1, a2, a3);
		}

		static ::System::Void VerifyReceipt(::MiHoYo::SDK::AccountModel* a1, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_GOOGLEPAYMENTNETWORKREQUEST_VERIFYRECEIPT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FirstPayment(::MiHoYo::SDK::AccountModel* a1, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_GOOGLEPAYMENTNETWORKREQUEST_FIRSTPAYMENT_OFFSET))(a1, a2, a3);
		}

	};
}

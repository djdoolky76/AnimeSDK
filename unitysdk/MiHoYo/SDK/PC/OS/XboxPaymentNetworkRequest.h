#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::PC::OS { class XboxPayInfo; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_XBOXPAYMENTNETWORKREQUEST_DETECTPAY_OFFSET UNITYSDK_OFFSET(0x1BF3E6F0)
#define MIHOYO_SDK_PC_OS_XBOXPAYMENTNETWORKREQUEST_RETRIEVETOKEN_OFFSET UNITYSDK_OFFSET(0x1BF3B190)

namespace MiHoYo::SDK::PC::OS
{
	class XboxPaymentNetworkRequest : public ::System::Object
	{
	public:
		// static const ::System::Object TimeoutSeconds; // 0x0
		static ::System::Void RetrieveToken(::MiHoYo::SDK::AccountModel* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXPAYMENTNETWORKREQUEST_RETRIEVETOKEN_OFFSET))(a1, a2);
		}

		static ::System::Void DetectPay(::MiHoYo::SDK::AccountModel* a1, ::MiHoYo::SDK::PC::OS::XboxPayInfo* a2, ::System::String* a3, ::System::String* a4, ::System::Action* a5)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*, ::MiHoYo::SDK::PC::OS::XboxPayInfo*, ::System::String*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXPAYMENTNETWORKREQUEST_DETECTPAY_OFFSET))(a1, a2, a3, a4, a5);
		}

	};
}

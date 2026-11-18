#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::PC::OS { class EpicPayInfo; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_EPICPAYMENTNETWORKREQUEST_DETECTPAY_OFFSET UNITYSDK_OFFSET(0x1E060A00)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int EpicPaymentNetworkRequest_TypeDefinitionIndex = 19819;

	class EpicPaymentNetworkRequest : public ::System::Object
	{
	public:
		static ::System::Void DetectPay(::MiHoYo::SDK::AccountModel* account, ::MiHoYo::SDK::PC::OS::EpicPayInfo* payInfo, ::System::String* accountId, ::System::String* accessToken, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*, ::MiHoYo::SDK::PC::OS::EpicPayInfo*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_EPICPAYMENTNETWORKREQUEST_DETECTPAY_OFFSET))(account, payInfo, accountId, accessToken, callback);
		}
	};
}

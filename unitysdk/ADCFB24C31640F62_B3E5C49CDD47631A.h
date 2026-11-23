#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ADCFB24C31640F62;
namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace System { template <typename T> class Action_1; }

#define ADCFB24C31640F62_B3E5C49CDD47631A_B90F2B94BE144545_OFFSET UNITYSDK_OFFSET(0x3A42370)
#define ADCFB24C31640F62_B3E5C49CDD47631A__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ADCFB24C31640F62_B3E5C49CDD47631A_TypeDefinitionIndex = 12959;

class ADCFB24C31640F62_B3E5C49CDD47631A : public ::System::Object
{
public:
	::ADCFB24C31640F62* A544919C800E2923; // 0x10
	::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>* E04D2BE64FCE9814; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADCFB24C31640F62_B3E5C49CDD47631A__CTOR_OFFSET))(this);
	}

	::System::Void B90F2B94BE144545(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + ADCFB24C31640F62_B3E5C49CDD47631A_B90F2B94BE144545_OFFSET))(this, A6CAE7339066B0FB);
	}
};

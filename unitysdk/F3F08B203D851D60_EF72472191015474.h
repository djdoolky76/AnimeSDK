#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Confirm_E18B39FBD22EF1C5.h"
#include "unitysdk/System/Object.h"

class F3F08B203D851D60_E824F9DB89276BD3;
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define F3F08B203D851D60_EF72472191015474_BB1D0A80BB586953_OFFSET UNITYSDK_OFFSET(0x3981BA0)
#define F3F08B203D851D60_EF72472191015474__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F3F08B203D851D60_EF72472191015474_TypeDefinitionIndex = 12491;

class F3F08B203D851D60_EF72472191015474 : public ::System::Object
{
public:
	::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* E6439664BA7E1642; // 0x10
	::F3F08B203D851D60_E824F9DB89276BD3* A8791C2B0F6F977B; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F3F08B203D851D60_EF72472191015474__CTOR_OFFSET))(this);
	}

	::System::Void BB1D0A80BB586953(::MiHoYo::SDK::Confirm_E18B39FBD22EF1C5 E82293C0814051A5)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_E18B39FBD22EF1C5))((::PBYTE)hIl2Cpp + F3F08B203D851D60_EF72472191015474_BB1D0A80BB586953_OFFSET))(this, E82293C0814051A5);
	}
};

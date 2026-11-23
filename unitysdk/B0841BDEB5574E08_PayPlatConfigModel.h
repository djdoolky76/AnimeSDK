#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ABTestInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define B0841BDEB5574E08_PAYPLATCONFIGMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x3937950)

inline static constexpr unsigned int B0841BDEB5574E08_PayPlatConfigModel_TypeDefinitionIndex = 12383;

class B0841BDEB5574E08_PayPlatConfigModel : public ::System::Object
{
public:
	::System::Boolean available; // 0x10
	::System::Boolean default_pay_platform; // 0x11
	::System::Byte _padding0[0x6];
	::System::Collections::Generic::List_1<::MiHoYo::SDK::ABTestInfo*>* abtest; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B0841BDEB5574E08_PAYPLATCONFIGMODEL__CTOR_OFFSET))(this);
	}
};

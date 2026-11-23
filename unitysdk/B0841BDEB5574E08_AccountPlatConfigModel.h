#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountPlatABTestInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define B0841BDEB5574E08_ACCOUNTPLATCONFIGMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x3925C30)

inline static constexpr unsigned int B0841BDEB5574E08_AccountPlatConfigModel_TypeDefinitionIndex = 12382;

class B0841BDEB5574E08_AccountPlatConfigModel : public ::System::Object
{
public:
	::System::Boolean available; // 0x10
	::System::Boolean default_account_platform; // 0x11
	::System::Boolean default_account_center; // 0x12
	::System::Byte _padding0[0x5];
	::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountPlatABTestInfo*>* abtest; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B0841BDEB5574E08_ACCOUNTPLATCONFIGMODEL__CTOR_OFFSET))(this);
	}
};

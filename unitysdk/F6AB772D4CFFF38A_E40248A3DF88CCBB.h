#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B6613C9D7676EEFB;
namespace System { class Action; }

#define F6AB772D4CFFF38A_E40248A3DF88CCBB_BDF181F9F2F00310_OFFSET UNITYSDK_OFFSET(0x3CC6200)
#define F6AB772D4CFFF38A_E40248A3DF88CCBB__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F6AB772D4CFFF38A_E40248A3DF88CCBB_TypeDefinitionIndex = 10542;

class F6AB772D4CFFF38A_E40248A3DF88CCBB : public ::System::Object
{
public:
	::B6613C9D7676EEFB* ACACB809C31A63B5; // 0x10
	::System::Action* F3CC6178234F35E2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F6AB772D4CFFF38A_E40248A3DF88CCBB__CTOR_OFFSET))(this);
	}

	::System::Void BDF181F9F2F00310()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F6AB772D4CFFF38A_E40248A3DF88CCBB_BDF181F9F2F00310_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"

class A02780807B4831D2;

#define F5B187867A7677B3_EC81B8692BF263E0_OFFSET UNITYSDK_OFFSET(0x202EE30)
#define F5B187867A7677B3__CTOR_OFFSET UNITYSDK_OFFSET(0x202EF20)

inline static constexpr unsigned int F5B187867A7677B3_TypeDefinitionIndex = 8264;

class F5B187867A7677B3
{
public:
	::System::Boolean EC81B8692BF263E0(::A02780807B4831D2* A12EE491614174A2)
	{
		return ((::System::Boolean(*)(::PVOID, ::A02780807B4831D2*))((::PBYTE)hIl2Cpp + F5B187867A7677B3_EC81B8692BF263E0_OFFSET))(this, A12EE491614174A2);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F5B187867A7677B3__CTOR_OFFSET))(this);
	}
};

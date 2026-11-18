#pragma once
#include "unitysdk/unitysdk.h"

#define JNNGKJFNLOM_LLIOGJLKLMO_OFFSET UNITYSDK_OFFSET(0x1309F870)
#define JNNGKJFNLOM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1309F7E0)
#define JNNGKJFNLOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1309F6C0)

inline static constexpr unsigned int JNNGKJFNLOM_TypeDefinitionIndex = 90336;

class JNNGKJFNLOM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNNGKJFNLOM__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Int32 AHFJCBLHFIJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JNNGKJFNLOM__CTOR_1_OFFSET))(this, AHFJCBLHFIJ);
	}

	::System::Void LLIOGJLKLMO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNNGKJFNLOM_LLIOGJLKLMO_OFFSET))(this);
	}
};

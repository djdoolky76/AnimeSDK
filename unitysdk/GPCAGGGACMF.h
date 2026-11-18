#pragma once
#include "unitysdk/unitysdk.h"

#define GPCAGGGACMF_DJDJKILDPGP_OFFSET UNITYSDK_OFFSET(0x181683D0)
#define GPCAGGGACMF_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x18168410)
#define GPCAGGGACMF_IKNGENHFHBG_OFFSET UNITYSDK_OFFSET(0x18168450)
#define GPCAGGGACMF__CTOR_OFFSET UNITYSDK_OFFSET(0x181684E0)

inline static constexpr unsigned int GPCAGGGACMF_TypeDefinitionIndex = 76081;

class GPCAGGGACMF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCAGGGACMF__CTOR_OFFSET))(this);
	}

	::System::Void DJDJKILDPGP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCAGGGACMF_DJDJKILDPGP_OFFSET))(this);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCAGGGACMF_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void IKNGENHFHBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCAGGGACMF_IKNGENHFHBG_OFFSET))(this);
	}
};

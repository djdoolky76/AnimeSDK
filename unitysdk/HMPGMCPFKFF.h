#pragma once
#include "unitysdk/unitysdk.h"

#define HMPGMCPFKFF_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x16F4F8E0)
#define HMPGMCPFKFF_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x16F4F850)
#define HMPGMCPFKFF__CTOR_OFFSET UNITYSDK_OFFSET(0x16F4F8A0)

inline static constexpr unsigned int HMPGMCPFKFF_TypeDefinitionIndex = 90609;

class HMPGMCPFKFF
{
public:
	::System::Int32 HLBKHEFJAPH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMPGMCPFKFF__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMPGMCPFKFF_ONRECYCLE_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMPGMCPFKFF_ANEOCOIFDDJ_OFFSET))(this);
	}
};

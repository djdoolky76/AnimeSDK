#pragma once
#include "unitysdk/unitysdk.h"

#define DJNKKBJBJJB_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x13E53CD0)
#define DJNKKBJBJJB_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x13E53C40)
#define DJNKKBJBJJB__CTOR_OFFSET UNITYSDK_OFFSET(0x13E53C90)

inline static constexpr unsigned int DJNKKBJBJJB_TypeDefinitionIndex = 65415;

class DJNKKBJBJJB
{
public:
	::System::UInt32 KNMHCPPLABK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNKKBJBJJB__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNKKBJBJJB_ONRECYCLE_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNKKBJBJJB_ANEOCOIFDDJ_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"

#define HFIALAEEAKN_AFBHCNCIKEK_OFFSET UNITYSDK_OFFSET(0x14A08A40)
#define HFIALAEEAKN_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x14A08A20)
#define HFIALAEEAKN_LIBFEFEJOCF_OFFSET UNITYSDK_OFFSET(0x14A08A30)
#define HFIALAEEAKN_ONATTACH_OFFSET UNITYSDK_OFFSET(0x14A08540)
#define HFIALAEEAKN_ONDETACH_OFFSET UNITYSDK_OFFSET(0x14A08740)
#define HFIALAEEAKN_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x14A08990)
#define HFIALAEEAKN__CTOR_OFFSET UNITYSDK_OFFSET(0x14A089E0)

inline static constexpr unsigned int HFIALAEEAKN_TypeDefinitionIndex = 73164;

class HFIALAEEAKN
{
public:
	::System::UInt32 KNMHCPPLABK; // 0x28
	::System::UInt32 BKJLLLIDIEP; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIALAEEAKN__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIALAEEAKN_ONATTACH_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIALAEEAKN_ONDETACH_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIALAEEAKN_ONRECYCLE_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIALAEEAKN_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void LIBFEFEJOCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIALAEEAKN_LIBFEFEJOCF_OFFSET))(this);
	}

	::System::Void AFBHCNCIKEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIALAEEAKN_AFBHCNCIKEK_OFFSET))(this);
	}
};

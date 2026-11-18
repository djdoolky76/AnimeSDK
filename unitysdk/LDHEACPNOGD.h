#pragma once
#include "unitysdk/unitysdk.h"

#define LDHEACPNOGD_AFBHCNCIKEK_OFFSET UNITYSDK_OFFSET(0x1635A770)
#define LDHEACPNOGD_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x1635A780)
#define LDHEACPNOGD_LIBFEFEJOCF_OFFSET UNITYSDK_OFFSET(0x1635A790)
#define LDHEACPNOGD_ONATTACH_OFFSET UNITYSDK_OFFSET(0x1635A3F0)
#define LDHEACPNOGD_ONDETACH_OFFSET UNITYSDK_OFFSET(0x1635A5C0)
#define LDHEACPNOGD_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1635A6E0)
#define LDHEACPNOGD__CTOR_OFFSET UNITYSDK_OFFSET(0x1635A730)

inline static constexpr unsigned int LDHEACPNOGD_TypeDefinitionIndex = 52889;

class LDHEACPNOGD
{
public:
	::System::Int32 PLMNGDPCPEC; // 0x28
	::System::Int32 LCKDHJGGGKE; // 0x2C
	::System::Boolean GKGKPNJBDKO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDHEACPNOGD__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDHEACPNOGD_ONATTACH_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDHEACPNOGD_ONDETACH_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDHEACPNOGD_ONRECYCLE_OFFSET))(this);
	}

	::System::Void AFBHCNCIKEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDHEACPNOGD_AFBHCNCIKEK_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDHEACPNOGD_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void LIBFEFEJOCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDHEACPNOGD_LIBFEFEJOCF_OFFSET))(this);
	}
};

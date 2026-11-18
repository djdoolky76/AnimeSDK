#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGLIFHIAIEH.h"
#include "unitysdk/System/ValueType.h"

class CCPFJIOFEKC;

#define NDOBNECDAON_ECFBOLNMFHD_OFFSET UNITYSDK_OFFSET(0x363D90)

inline static constexpr unsigned int NDOBNECDAON_TypeDefinitionIndex = 29002;

struct alignas(8) NDOBNECDAON
{
	::CCPFJIOFEKC* AEJFGOPBPHP; // 0x10
	::JGLIFHIAIEH BAPBGCKGNED; // 0x18
	::JGLIFHIAIEH CEHGFFDBHOJ; // 0x20
	::System::Int32 ODLHMLGNMNJ; // 0x28
	::System::Int32 ONGMGKADCEG; // 0x2C

	::System::Boolean ECFBOLNMFHD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDOBNECDAON_ECFBOLNMFHD_OFFSET))(this);
	}
};

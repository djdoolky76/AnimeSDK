#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LICBHCFJLNF.h"

#define HFCJMNJPIIC_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x140A2140)
#define HFCJMNJPIIC_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x140A20B0)
#define HFCJMNJPIIC_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x140A1FD0)
#define HFCJMNJPIIC__CTOR_OFFSET UNITYSDK_OFFSET(0x140A20A0)

inline static constexpr unsigned int HFCJMNJPIIC_TypeDefinitionIndex = 87309;

class HFCJMNJPIIC : public ::LICBHCFJLNF
{
public:
	::System::UInt32 GJCNAJOLAKA; // 0x10
	::System::UInt32 MNAIIBHLHMA; // 0x14
	::System::UInt32 FJPBKADAMGC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCJMNJPIIC__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCJMNJPIIC_FCMNHLDLJCI_OFFSET))(this);
	}

	static ::HFCJMNJPIIC* BBPCBEEHALC()
	{
		return ((::HFCJMNJPIIC*(*)())((::PBYTE)hIl2Cpp + HFCJMNJPIIC_BBPCBEEHALC_OFFSET))();
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCJMNJPIIC_ANEOCOIFDDJ_OFFSET))(this);
	}
};

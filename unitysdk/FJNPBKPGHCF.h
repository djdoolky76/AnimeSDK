#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KCIPADHDIIN.h"

#define FJNPBKPGHCF_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x116B67B0)
#define FJNPBKPGHCF_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x116B6720)
#define FJNPBKPGHCF_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x116B6650)
#define FJNPBKPGHCF__CTOR_OFFSET UNITYSDK_OFFSET(0x116B6710)

inline static constexpr unsigned int FJNPBKPGHCF_TypeDefinitionIndex = 88704;

class FJNPBKPGHCF : public ::KCIPADHDIIN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNPBKPGHCF__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNPBKPGHCF_FCMNHLDLJCI_OFFSET))(this);
	}

	static ::FJNPBKPGHCF* BBPCBEEHALC()
	{
		return ((::FJNPBKPGHCF*(*)())((::PBYTE)hIl2Cpp + FJNPBKPGHCF_BBPCBEEHALC_OFFSET))();
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNPBKPGHCF_ANEOCOIFDDJ_OFFSET))(this);
	}
};

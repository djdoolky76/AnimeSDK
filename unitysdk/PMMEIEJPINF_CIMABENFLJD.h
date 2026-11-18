#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IBCGAINLMAE_ECCDHCBHHME;
class PMMEIEJPINF;

#define PMMEIEJPINF_CIMABENFLJD_KHAOBELIHKB_OFFSET UNITYSDK_OFFSET(0x178ED6E0)
#define PMMEIEJPINF_CIMABENFLJD__CTOR_OFFSET UNITYSDK_OFFSET(0x178ED6D0)

inline static constexpr unsigned int PMMEIEJPINF_CIMABENFLJD_TypeDefinitionIndex = 81786;

class PMMEIEJPINF_CIMABENFLJD : public ::System::Object
{
public:
	::IBCGAINLMAE_ECCDHCBHHME* AEJAMJDBHAM; // 0x10
	::PMMEIEJPINF* KLHPEBKNIFB; // 0x18
	::System::Int32 EOGLMAEPALE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMEIEJPINF_CIMABENFLJD__CTOR_OFFSET))(this);
	}

	::System::Void KHAOBELIHKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMEIEJPINF_CIMABENFLJD_KHAOBELIHKB_OFFSET))(this);
	}
};

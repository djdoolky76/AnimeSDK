#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEKNEEMAHBC.h"
#include "unitysdk/GEKNEEMAHBC_JENDGGPPBIA.h"

#define MGHEIEJICHK_BPFPAIMCKBE_OFFSET UNITYSDK_OFFSET(0x177BBE80)
#define MGHEIEJICHK__CTOR_OFFSET UNITYSDK_OFFSET(0x177BBE90)

inline static constexpr unsigned int MGHEIEJICHK_TypeDefinitionIndex = 76311;

class MGHEIEJICHK : public ::GEKNEEMAHBC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHEIEJICHK__CTOR_OFFSET))(this);
	}

	::GEKNEEMAHBC_JENDGGPPBIA BPFPAIMCKBE()
	{
		return ((::GEKNEEMAHBC_JENDGGPPBIA(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHEIEJICHK_BPFPAIMCKBE_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBOOCPHCODE.h"
#include "unitysdk/System/ValueType.h"

class HHMKCBFMIGN;

#define INOEOEPKMJL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x862560)
#define INOEOEPKMJL_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x862570)
#define INOEOEPKMJL__CTOR_OFFSET UNITYSDK_OFFSET(0x862550)

inline static constexpr unsigned int INOEOEPKMJL_TypeDefinitionIndex = 34748;

struct alignas(8) INOEOEPKMJL
{
	::EBOOCPHCODE KOPADGAEAON; // 0x10
	::HHMKCBFMIGN* OFAJAJOFGNC; // 0x18

	::System::Void _ctor(::EBOOCPHCODE JMDONAMBDIH, ::HHMKCBFMIGN* AOKHOHCJNFJ)
	{
		return ((::System::Void(*)(::PVOID, ::EBOOCPHCODE, ::HHMKCBFMIGN*))((::PBYTE)hIl2Cpp + INOEOEPKMJL__CTOR_OFFSET))(this, JMDONAMBDIH, AOKHOHCJNFJ);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INOEOEPKMJL_DISPOSE_OFFSET))(this);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INOEOEPKMJL_JDAPDDEOCEA_OFFSET))(this);
	}
};

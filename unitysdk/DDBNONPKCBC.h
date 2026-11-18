#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define DDBNONPKCBC_JPPEEOLOGGP_OFFSET UNITYSDK_OFFSET(0x168B0590)

inline static constexpr unsigned int DDBNONPKCBC_TypeDefinitionIndex = 80927;

struct alignas(8) DDBNONPKCBC
{
	::System::String* DKBFCNGDODE; // 0x10
	::System::String* INBBLGDKMLC; // 0x18

	/*
	static ::DDBNONPKCBC JPPEEOLOGGP(::System::String* DKBFCNGDODE)
	{
		return ((::DDBNONPKCBC(*)(::System::String*))((::PBYTE)hIl2Cpp + DDBNONPKCBC_JPPEEOLOGGP_OFFSET))(DKBFCNGDODE);
	}
	*/
};

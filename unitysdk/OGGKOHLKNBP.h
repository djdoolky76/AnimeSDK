#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define OGGKOHLKNBP_PKNCMOLDACC_OFFSET UNITYSDK_OFFSET(0x5FAD30)

inline static constexpr unsigned int OGGKOHLKNBP_TypeDefinitionIndex = 93117;

struct alignas(4) OGGKOHLKNBP
{
	::System::Int16 DKOFFFNEFJC; // 0x10
	::System::UInt16 FICDHENFBFD; // 0x12
	::System::UInt32 MDCKPDKEBIH; // 0x14
	::System::UInt32 OPCGNPJFOPN; // 0x18

	::System::UInt32 PKNCMOLDACC()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGGKOHLKNBP_PKNCMOLDACC_OFFSET))(this);
	}
};

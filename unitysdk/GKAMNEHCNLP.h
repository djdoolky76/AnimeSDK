#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define GKAMNEHCNLP_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x772E60)

inline static constexpr unsigned int GKAMNEHCNLP_TypeDefinitionIndex = 57725;

struct alignas(4) GKAMNEHCNLP
{
	::System::Int32 CHMCBIOHJGK; // 0x10
	::System::Int32 DBGJNFKBEJK; // 0x14
	::System::Int32 OHLGFAMCOOL; // 0x18

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKAMNEHCNLP_FFCPIEDHBDP_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define JPCGPOKPEOG_BACBAMOFCCO_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7B4A80)

inline static constexpr unsigned int JPCGPOKPEOG_BACBAMOFCCO_TypeDefinitionIndex = 45830;

struct alignas(4) JPCGPOKPEOG_BACBAMOFCCO
{
	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JPCGPOKPEOG_BACBAMOFCCO_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FGHCKKKFHHE_ONBDENGIFOL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x77C220)

inline static constexpr unsigned int FGHCKKKFHHE_ONBDENGIFOL_TypeDefinitionIndex = 52119;

struct alignas(4) FGHCKKKFHHE_ONBDENGIFOL
{
	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FGHCKKKFHHE_ONBDENGIFOL_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FMPEMEANLPJ_KJOJICAPDCP_EXECUTE_OFFSET UNITYSDK_OFFSET(0x775C40)

inline static constexpr unsigned int FMPEMEANLPJ_KJOJICAPDCP_TypeDefinitionIndex = 62192;

struct alignas(4) FMPEMEANLPJ_KJOJICAPDCP
{
	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FMPEMEANLPJ_KJOJICAPDCP_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}
};

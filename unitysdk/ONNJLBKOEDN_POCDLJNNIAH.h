#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define ONNJLBKOEDN_POCDLJNNIAH_EXECUTE_OFFSET UNITYSDK_OFFSET(0x778D90)

inline static constexpr unsigned int ONNJLBKOEDN_POCDLJNNIAH_TypeDefinitionIndex = 55546;

struct alignas(4) ONNJLBKOEDN_POCDLJNNIAH
{
	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ONNJLBKOEDN_POCDLJNNIAH_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}
};

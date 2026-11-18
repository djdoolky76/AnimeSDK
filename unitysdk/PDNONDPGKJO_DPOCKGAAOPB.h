#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PDNONDPGKJO_DPOCKGAAOPB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x6A3230)

inline static constexpr unsigned int PDNONDPGKJO_DPOCKGAAOPB_TypeDefinitionIndex = 87163;

struct alignas(4) PDNONDPGKJO_DPOCKGAAOPB
{
	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PDNONDPGKJO_DPOCKGAAOPB_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}
};

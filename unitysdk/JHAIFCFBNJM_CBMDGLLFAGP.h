#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define JHAIFCFBNJM_CBMDGLLFAGP_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7E7EC0)

inline static constexpr unsigned int JHAIFCFBNJM_CBMDGLLFAGP_TypeDefinitionIndex = 44548;

struct alignas(4) JHAIFCFBNJM_CBMDGLLFAGP
{
	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JHAIFCFBNJM_CBMDGLLFAGP_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}
};

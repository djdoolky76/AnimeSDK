#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define HOHLBJLOBCJ_MOONBCFECKF_EXECUTE_OFFSET UNITYSDK_OFFSET(0x771EF0)

inline static constexpr unsigned int HOHLBJLOBCJ_MOONBCFECKF_TypeDefinitionIndex = 84854;

struct alignas(4) HOHLBJLOBCJ_MOONBCFECKF
{
	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOHLBJLOBCJ_MOONBCFECKF_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}
};
